#include <stdio.h>

int main()
{
    int n, i, score = 0, plus = 0;
    
    scanf("%d", &n);
    int arr[n];
    
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 1)
        {
            plus++;
            score += plus;
        }
        else
        {
            plus = 0;
        }
    }
    printf("%d", score);
}