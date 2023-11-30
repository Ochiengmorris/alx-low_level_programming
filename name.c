#include <stdio.h>
#include <stdlib.h>

int main()
{
        int age;
        char *name;

        name = malloc(sizeof(char *));
        printf("Hello, what's your name : ");
        scanf("%s", name);
        printf("Good morning, %s !!. Have a nice day.\n", name);
        free(name);

        return (0);
}          
