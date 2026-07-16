#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("current directory\n");
    system("pwd")
    printf("\nfiles\n");
    system("ls -1");
    printf("\ncreating directory\n");
    system("mkdir demo");
    printf("\nlistening files again\n");
    system("ls");
    printf("\nremopving directory\n");
    systemn("rmdir demo");
    return 0;
}