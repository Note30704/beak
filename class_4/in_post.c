#include <stdio.h>

#define	MAX_SIZE	101
typedef char	element;

typedef struct	p_point
{
	element	stack[MAX_SIZE];
	int		top;
}				Stack;

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int		is_full(Stack *s)
{
	if (s->top == (MAX_SIZE - 1))
		return (1);
	return (0);
}

int		is_empty(Stack *s)
{
	if (s->top == -1)
		return (1);
	return (0);
}

void	ft_push(Stack *s, char ch)
{
	if (is_full(s))
		return ;
	else
		s->stack[++(s->top)] = ch;
}

int		ft_pop(Stack *s)
{
	if (is_empty(s))
		return (0);
	else
		return (s->stack[(s->top)--]);
}

int		prec(char sign)
{
	
	if (sign == '(' || sign == ')')
		return (0);
	else if (sign == '+' || sign == '-')
		return (1);
	else if (sign == '*' || sign == '/')
		return (2);
	return (-1);
}

element	peek(Stack *s)
{
	if (is_empty(s))
		return (0);
	else
		return (s->stack[s->top]);
}

void	in_to_postfix(char infix[])
{
	Stack	s;
	int		i;
	int		len;
	char	ch;
	char	top_op;

	len = ft_strlen(infix);
	s.top = -1;
	i = 0;
	while (i < len)
	{
		ch = infix[i];
		if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			while (!is_empty(&s) && (prec(ch) <= prec(peek(&s))))
				printf("%c", ft_pop(&s));
			ft_push(&s, ch);
		}
		else if (ch == '(')
		{
			ft_push(&s, ch);
		}
		else if (ch == ')')
		{
			top_op = ft_pop(&s);
			while (top_op != '(')
			{
				printf("%c", top_op);
				top_op = ft_pop(&s);
			}
		}
		else
			printf("%c", ch);
		i++;
	}
	while (!is_empty(&s))
		printf("%c", ft_pop(&s));
}

int	main(void)
{
	char	infix[101];

	scanf("%s", infix);

	in_to_postfix(infix);
	return (0);
}
