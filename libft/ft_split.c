#include "libft.h"



size_t ft_word_count(char const *s, char c)
{
	size_t i;
	size_t new_word;
	int words;

	i = 0;
	new_word = 0;
	words = 0;
	while(s[i])
	{
		if(s[i] != c && new_word == 0)
		{
			new_word = 1;
			words++;
		}
		else if(s[i] == c)
			new_word = 0;
		i++;
	}
	return(words);
}

int mem_count(const char *s, char c)
{
	int length;

	length = 0;
	while(s[length] && s[length] != c)
	      length++;
	return(length);	
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t a;
	size_t len_a;
	size_t word_count;
	char **str;

	word_count = ft_word_count(s, c);
	i = 0;
	a = 0;
	str = malloc(sizeof(char *) * (word_count + 1));
	if(!str)
		return(NULL);
	while(a < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		len_a = mem_count(&s[i], c);
		str[a] = malloc(sizeof(char) * (len_a + 1));
		if(!str[a])
			return(NULL);
		ft_strlcpy(str[a], &s[i], len_a + 1);

		i += len_a;
		a++;
	}

	str[a] = NULL;
	return(str);
}

/*
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char **result = ft_split(argv[1], argv[2][0]);

        for (int i = 0; result[i] != NULL; i++)
            printf("%s\n", result[i]);
    }
    return 0;
}
*/
