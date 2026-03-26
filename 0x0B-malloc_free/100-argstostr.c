#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    int i, j, k = 0, len = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* calculate total length */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            len++;
            j++;
        }
        len++; /* for newline */
    }

    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);

    /* copy arguments */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            str[k] = av[i][j];
            k++;
            j++;
        }
        str[k] = '\n';
        k++;
    }

    str[k] = '\0';

    return (str);
}
