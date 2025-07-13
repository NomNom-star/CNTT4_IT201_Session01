#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Nhap so luong phan tu (0 < n < 1000)\n:");
    scanf("%d", &n);

    if (n<=0 || n>1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Loi!!!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d:", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("max = %d\n", max);

    free(arr);

    return 0;
}