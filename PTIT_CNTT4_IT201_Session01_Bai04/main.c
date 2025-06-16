#include <stdio.h>

int main(void) {
    int n;
    // Cách 1:
    int sum = 0;
    for(int i =0; i<n; i++){
        sum += i;
    }
    printf("sum = %d\n", sum);
    // Độ phức tạp thời gian là O(n)

    // Cách 2:
    int sum2 = n * (n + 1) / 2;
    printf("sum2 = %d\n", sum2);
    // Độ phức tạp thời gian là O(1)
    return 0;
}
