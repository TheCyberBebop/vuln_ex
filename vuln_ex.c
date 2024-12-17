#include <stdio.h>
#include <string.h>
void pass_function()
{
    int length;
    char bufferA[8];
    char bufferB[4];
    printf("Enter password: ");
    gets(bufferA);

    strcpy(bufferB, bufferA);
    printf("Returning\n");
    return;
}

int main(int argc, char *argv[])
{
    pass_function();
    return 0;
}
