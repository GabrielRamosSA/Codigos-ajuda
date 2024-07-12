#include <stdio.h>

void maiusculo(char *sPtr)
{
    while (*sPtr != '\0')
    {
        if (*sPtr >= 'a' && *sPtr <= 'z')
        {

            *sPtr -= 32;
        }
        ++sPtr;
    }
}

int main()
{
    char vetor[100];

    while (1)
    {
        scanf(" %[^\n]", vetor);

        if (vetor[0] == '0' && vetor[1] == '\0')
            break;

        maiusculo(vetor);
        printf("%s\n", vetor);
    }

    return 0;
}
