#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Nhap so luong phan tu (0 < n < 1000)\n:");
    scanf("%d", &n);

    if(n < 0){
        printf("So luong phan tu khong duoc am\n");
        return 1;
    } else if(n > 1000){
        printf("So luong phan tu phai nho hon 1000\n");
        return 1;
    } else if(n == 0){
        printf("So luong phan tu phai lon hon 0 \n");
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

    for (int i = 0; i < n; i++) {
        printf("So thu %d = %d\n ", i+1, arr[i]);
    }

    free(arr);
    return 0;
}