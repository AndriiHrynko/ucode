#include "../inc/libmx.h"

void mx_del_strarr(char ***arr)
{
    if (arr != NULL)
        return;

    char **ptr_arr = *arr;

    while (*ptr_arr)
    {
        mx_strdel(ptr_arr);
        ptr_arr++;
    }

    free(*arr);
    *arr = NULL;
    arr = NULL;
}
/*
int main() 
{
    char *s0 = (char *) malloc(5);
    char *s1 = (char *) malloc(6);
    char *s2 = (char *) malloc(3);
    char **ss = (char **) malloc(4 *sizeof(char *));

    ss[0] = s0;
    ss[1] = s1;
    ss[2] = s2;
    ss[3] = NULL;

    mx_del_strarr(&ss);

    system("leaks -q libmx");

    return 0;
}
*/
