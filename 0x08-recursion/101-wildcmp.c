
/**
 * getlen - get length of string
 * @s: string
 * @len: counter
 * Return: length of s
 */
int getlen(char *s, int len)
{
	if (*s == '\0' || *s == '*')
	{
		return (len);
	}
	else
	{
		return (getlen(s + 1, len + 1));
	}
}
/**
 * wildcmp - compares two s1 and s2
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			if (getlen(s1, 0) > getlen(s2 + 1, 0))
			{
				return (wildcmp(s1 + 1, s2));
			}
			else if (getlen(s1, 0) == getlen(s2 + 1, 0))
			{
				return (wildcmp(s1, s2 + 1));
			}
			else
			{
				return (0);
			}
		}
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 != *s2)
	{
		return (0);
	}
	else
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
}
