/**
 * _strcmp - compares 2 strings
 * @s1: the first string
 * @s2: the second string
 * Return: positive if s1 > s2, negative if s2 > s1 or 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	int i = 0;

	while (s1[i] != '\0')
	{
		count1 += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		count2 += s2[i];
		i++;
	}
	return (count1 - count2);
}
