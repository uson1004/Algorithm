#include <stdio.h>

int main()
{
    int arr[5] = { 0 }, sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 40) {
        arr[i] = 40;    
        
        }
        sum += arr[i];
    }
    printf("%d", sum / 5);
}