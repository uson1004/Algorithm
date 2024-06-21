#include <stdio.h>

int main()
{
    int arr[5] = { 0, }, sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    if ((arr[1] / arr[3]) > (arr[2] / arr[4])) {
        sum = arr[1] / arr[3];
        if ((arr[1] % arr[3]) != 0) {
            sum += 1;
        }
    } else {
        sum = arr[2] / arr[4];
        if ((arr[2] % arr[4]) != 0) {
            sum += 1;
        }
    }
    printf("%d", arr[0] - sum);
}