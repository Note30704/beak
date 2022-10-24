#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct	s_point
{
	int				stack;
	struct	s_point	*link;
}				Stack;

typedef struct
{
	Stack	*top;
}				StackType;

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

void	ft_push(StackType *s, int input)
{
	Stack	*tmp;

	tmp = (Stack *)malloc(sizeof(Stack));
	tmp->stack = input;
	tmp->link = s->top;
	s->top = tmp;
}

int		ft_pop(StackType *s)
{
	int		stack_num;
	Stack	*tmp = s->top;

	stack_num = tmp->stack;
	s->top = s->top->link;
	free(tmp);
	return (stack_num);
}

int	ft_stack_num(char *s_sign, int n)
{
	StackType	s;
	int	i;
	int	ch;
	int	num;
	int	input;
	int	save_point;
	int	flag;

	s.top = NULL;
	num = 0;
	flag = 1;
	save_point = 1;

	i = 0;
	while (n)
	{
		scanf("%d", &input);

		while (save_point <= input)
		{
			ft_push(&s, save_point);
			s_sign[num] = '+';
			num++;
			save_point++;
		}
		ch = ft_pop(&s);
		if (ch != input)
			flag = 0;
		else
		{
			s_sign[num] = '-';
			num++;
		}
		n--;
	}
	return (flag);
}

int	main(void)
{
	char	s_sign[200002];
	int	i;
	int	n;
	int	len;

	scanf("%d", &n);

	memset(s_sign, 0, sizeof(s_sign));
	if (ft_stack_num(s_sign, n) == 0)
		printf("NO\n");
	else
	{
		len = ft_strlen(s_sign);
		i = 0;
		while (i < len)
		{
			printf("%c\n", s_sign[i]);
			i++;
		}
	}
	return (0);
}
