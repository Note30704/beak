#include <stdio.h>

int		n;
int		m;
char	g_b[8][8];
char	g_w[8][8];

void	make_WB(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if ((i + j) % 2 == 0)
			{
				g_b[i][j] = 'B';
				g_w[i][j] = 'W';
			}
			else
			{
				g_b[i][j] = 'W';
				g_w[i][j] = 'B';
			}
			j++;
		}
		i++;
	}
}

int	check_chess(char chess[51][51])
{
	int	i;
	int	j;
	int	a;
	int	b;
	int	min;
	int	Bcount;
	int	Wcount;

	min = 64;
	i = 0;
	while (i < n - 7)
	{
		j = 0;
		while (j < m - 7)
		{
			Bcount = 64;
			Wcount = 64;
			a = 0;
			while (a < 8)
			{
				b = 0;
				while (b < 8)
				{
					if (g_b[a][b] == chess[i + a][j + b])
						Bcount--;
					if (g_w[a][b] == chess[i + a][j + b])
						Wcount--;
					b++;
				}
				a++;
			}
			if (Bcount < min)
				min = Bcount;
			if (Wcount < min)
				min = Wcount;
			j++;
		}
		i++;
	}
	return (min);
}

int	main(void)
{
	int		i;
	int		j;
	int		ans;
	char	chess[51][51];

	make_WB();
	scanf("%d %d", &n, &m);
	i = 0;
	while (i < n)
	{
		scanf("%s", chess[i]);
		i++;
	}
	ans = check_chess(chess);
	printf("%d\n", ans);
	return (0);
}

