/**
 * _strstr - function that locates first occurece of substring.
 * @haystack: string
 * @needle: substring
 * Return: location of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = x, z = 0; needle[z] != '\0'; y++, z++)
		{
			if (haystack[y] != needle[z] || haystack[x] == '\0')
				break;
		}
		if (needle[z] == '\0')
		{
			return (haystack + x);
		}
	}
	return (0);
}
