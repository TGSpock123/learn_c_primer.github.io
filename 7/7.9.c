#include <stdio.h>
int main (void)
{
    int i, j, k, charCount, rowCount, wordCount, sentenceCount;
    char ch;

    for (i = 0, j = 0, k = 0, charCount = 0, rowCount = 1, wordCount = 0, sentenceCount = 0;
    (ch = getchar()) != '|'; )
    {
        if (i != 0 && ch == ' ')
        {
            wordCount ++;
        }else if (j != 0 && ch == '\n')
        {
            rowCount ++;
            wordCount ++;
        }else if (k != 0 && ch == '.')
        {
            sentenceCount ++;
            wordCount ++;
        }else if (ch != '.' && ch != ' ' && ch != '\n' && ch != '|')
        {
            charCount ++;
            i = 1;
            k = 1;
            j = 1;
        }
    }
    if (i != 0)
    {
        wordCount ++;
    }
    if (j != 0)
    {
        sentenceCount ++;
    }
    printf("%d, %d, %d", i, j, k);
    printf("you' ve print %d chars, %d words, %d sentences, total %d rows. \n",
           charCount, wordCount, sentenceCount, rowCount);

    return 0;
}