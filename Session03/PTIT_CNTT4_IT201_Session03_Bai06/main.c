#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, m ;
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

    printf("Nhap so luong phan tu can them :");
    scanf("%d", &m);
    if (m<=0 || m>1000) {
        printf("So luong phan tu muon them khong hop le\n");
        free(arr);
        return 1;
    }

    arr = (int*)realloc(arr, (n+m) * sizeof(int));
    if(arr == NULL) {
        printf("Loi!!!\n");
        return 1;
    }

    for (int i = n; i < n+m; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    printf("mang sau khi them : [");
    for (int i = 0; i < n+m; i++) {
        printf("%d, ", arr[i]);
        if (i < n+m-1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(arr);

    return 0;
}