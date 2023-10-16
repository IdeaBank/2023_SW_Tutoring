#include <stdio.h>
#include <string.h>

int tokenize_string(char *str, char *words[], char seperator);

int main()
{
    char A[150] = { '\0' };
    char *words[15] = { NULL };
    int word_count;

    char B[10] = { '\0' }, C[10] = { '\0' };
    char result[300] = { '\0' };

    char *word;

    gets(A);

    word_count = tokenize_string(A, words, ' ');

    scanf("%s %s", B, C);

    for(int i = 0; i < word_count; ++i)
    {
        if(strcmp(words[i], B) == 0)
            strcat(result, C);

        else
            strcat(result, words[i]);

        if(strlen(words[i]) != 0)
            strcat(result, " ");
    }

    puts(result);
}

int tokenize_string(char *str, char *words[], char seperator)
{
    char *p, *current = str;
    int count = 0;

    for(p = str; *p != '\0'; ++p)
    {
        if(*p == seperator)
        {
            *p = '\0';

            words[count++] = current;
            current = p + 1;
        }
    }

    words[count++] = current;

    return count;
}