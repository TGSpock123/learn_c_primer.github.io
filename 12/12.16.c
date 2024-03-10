#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_store = 30;
const char * pcg = "String Literal";
int main (void)
{
    int auto_store = 40, * pi;
    char auto_string[] = "Auto char array", * pcl;

    pi = (int *) malloc (sizeof(int));
    *pi = 35;
    pcl = (char *) malloc (strlen ("Dynamic String") + 1);
    strcpy (pcl, "Dynamic String");
    printf ("static_store: %d at %p\n", static_store, &static_store);
    printf ("%s at %p\n", "Quoted string", "Quoted string");
    printf ("%s at %p\n", pcg, pcg);
    printf ("auto store: %d at %p\n", auto_store, &auto_store);
    printf ("%s at %p\n", auto_string, auto_string);
    printf ("*pi: %d at %p\n", *pi, pi);
    printf ("%s at %p\n", pcl, pcl);

    free (pi);
    free (pcl);
}