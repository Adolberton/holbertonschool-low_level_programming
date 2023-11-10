char *str_concat(char *s1, char *s2)
{
	char *copi;
	int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	copi = malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
	{
		copi[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		copi[len1 + 1] = s2[j];
			len1++;
	}
	copi[len1 + 1] = '\0';
	return(copi);
}

