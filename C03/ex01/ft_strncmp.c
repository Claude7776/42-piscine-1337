/* #include <stdio.h> */
// code is short now
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && --n && *s1)
	{
		*s1++, *s2++;
	}
	return (*s1 - *s2);
}
/* int main()
{
	char s1[] = "heLLO World!";
	char s2[] = "HEllo world!";
	int size = 4;
	printf("%d", ft_strncmp(s1, s2, size));
} */
