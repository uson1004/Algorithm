#include <stdio.h>
#include <string.h>

int main()
{
    char ro[100] = { "" };
    
    scanf("%s", ro);
    
    printf("%ld", strlen(ro));
}