#include <stdio.h>
#include <string.h>


int main()
{
    int num = 0;
    char ch[1000] = { "" };
    
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        scanf("%s", ch);
        
        printf("%c%c\n", ch[0], ch[strlen(ch) - 1]);
    }
}