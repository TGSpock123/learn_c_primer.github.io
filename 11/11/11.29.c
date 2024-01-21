//test
#include "s_gets.h"
int main (void)
{
    char ch1[40], ch2[40], q, *qwe;
    int i = 5;

    printf ("please enter ch1, strcpy wil make ch2: \n");
    s_gets (ch1, 40);
    printf ("1. %s\n", ch1);
    strcpy (ch2, ch1);
    printf ("1. %s\n", ch2);

    printf ("please enter ch1, strncpy wil make ch2: \n");
    s_gets (ch1, 40);
    printf ("2. %s\n",ch1);
    strncpy (ch2, ch1, i);
    ch2[i] = '\0';
    printf ("2. %s\n", ch2);

    printf ("this test is for strcat, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter ch2: \n");
    s_gets (ch2, 40);
    strcat (ch1, ch2);
    printf ("3. %s\n", ch1);

    printf ("this is for strncat, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter ch2: \n");
    s_gets (ch2, 40);
    strncat (ch1, ch2, 40 - 1 - strlen(ch1));
    printf ("4. %s\n", ch1);

    printf ("this test is for strcmp, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter ch2: \n");
    s_gets (ch2, 40);
    printf ("5. %d\n", strcmp (ch1, ch2));

    printf ("this is for strncmp, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter ch2: \n");
    s_gets (ch2, 40);
    printf ("6. %d\n", strncmp (ch1, ch2, i));

    //书上这段错了, 具体看示例代码
    printf ("this test is for strchr, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter a charater: \n");
    q = getchar();
    getchar();
    if (!strchr (ch1, q))
    {
        printf ("7. there is no %c in ch1: %s\n", q, ch1);
    }else
    {
        qwe = strchr (ch1, q);
        printf ("7. %c is in ch1: %s, after %c is %s\n", q, ch1, q, qwe + 1);
    }

    //这段也错了
    printf ("this test is for strpbrk, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter ch2: \n");
    s_gets (ch2, 40);
    if (!strpbrk (ch1, ch2))
    {
        printf ("8. there is no element of ch2: %s in ch1: %s\n", ch2, ch1);
    }else
    {
        qwe = strpbrk (ch1, ch2);
        printf ("8. there is at least one element"
                "of ch2: %s is in ch1: %s \nafter the first match is %s\n", ch2, ch1, qwe + 1);
        while (!strpbrk (qwe + 1, ch2))
        {
            qwe = strpbrk (qwe + 1, ch2);
            printf ("after next match is %s\n", qwe + 1);
        }
    }

    printf ("this test is for strrchr, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter a charater: \n");
    q = getchar();
    getchar();
    if (!strrchr (ch1, q))
    {
        printf ("9. there is no %c in ch1: %s\n", q, ch1);
    }else
    {
        qwe = strrchr (ch1, q);
        printf ("9. %c is in ch1: %s, after %c' last match is %s\n", q, ch1, q, qwe + 1);
    }

    printf ("this test is for strstr, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("please enter ch2: \n");
    s_gets (ch2, 40);
    if (!strstr (ch1, ch2))
    {
        printf ("10. ch2: %s is not in ch1: %s\n", ch2, ch1);
    }else
    {
        qwe = strstr (ch1, ch2);
        printf ("10. ch2: %s is in ch1: %s, after ch2 is %s\n", ch2, ch1, qwe + strlen(ch2));
    }

    printf ("this test is for strlen, please enter ch1: \n");
    s_gets (ch1, 40);
    printf ("the length of ch1: %s is %lu\n", ch1, strlen (ch1));

    return 0;
}