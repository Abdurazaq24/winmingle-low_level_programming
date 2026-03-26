#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ');
}

int count_words(char *str)
{
    int i = 0, count = 0;

    while (str[i])
    {
        if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
            count++;
        i++;
    }
    return count;
}

char **strtow(char *str)
{
    char **words;
    int i = 0, j, k, start, len, wc;

    if (str == NULL || *str == '\0')
        return NULL;

    wc = count_words(str);
    if (wc == 0)
        return NULL;

    words = malloc(sizeof(char *) * (wc + 1));
    if (words == NULL)
        return NULL;

    i = 0;
    k = 0;

    while (str[i])
    {
        if (!is_space(str[i]))
        {
            start = i;
            len = 0;

            while (str[i] && !is_space(str[i]))
            {
                i++;
                len++;
            }

            words[k] = malloc(sizeof(char) * (len + 1));
            if (words[k] == NULL)
                return NULL;

            for (j = 0; j < len; j++)
                words[k][j] = str[start + j];

            words[k][j] = '\0';
            k++;
        }
        else
        {
            i++;
        }
    }

    words[k] = NULL;
    return words;
}
