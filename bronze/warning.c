#include <stdio.h>

int	main(void)
{
	int	h[3];
	int	m[3];
	int	s[3];

	scanf("%d:%d:%d", &h[0], &m[0], &s[0]);
	scanf("%d:%d:%d", &h[1], &m[1], &s[1]);

	if (s[0] > s[1])
	{
		m[1]--;
		s[1] = s[1] + 60;
	}	
	if (m[0] > m[1])
	{
		h[1]--;
		m[1] = m[1] + 60;
	}
	if (h[0] > h[1])
		h[1] = h[1] + 24;
	s[2] = s[1] - s[0];
	m[2] = m[1] - m[0];
	h[2] = h[1] - h[0];
	if (h[2] == 0 && m[2] == 0 && s[2] == 0)
		h[2] = 24;
	printf("%.2d:%.2d:%.2d", h[2], m[2], s[2]);
	return (0);
}
