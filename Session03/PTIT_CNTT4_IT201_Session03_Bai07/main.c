#include <stdio.h>
#include <stdlib.h>

int tinhTongHangK(int **arr, int k, int cols) {
    int sum = 0;
    for (int i = 0; i < cols; i++) {
        sum += arr[k-1][i];
    }
    return sum;
}

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    if (rows <= 0 && cols <= 0) {
        printf("So hang va cot khong hop le\n");
        return 1;
    } else if (cols <= 0) {
        printf("So cot khong hop le\n");
        return 1;
    } else if (rows <= 0) {
        printf("So hang khong hop le\n");
        return 1;
    }

    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Loi !!!\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Khong the cap phat bo nho cho hang %d\n", i);
            return 1;
        }
    }

    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d] ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    int k;
    printf("Nhap hang can tinh tong: \n");
    scanf("%d", &k);

    if (k<0 || k>rows) {
        printf("So hang khong hop le\n");
    } else {
        int sum = tinhTongHangK(arr, k, cols);
        printf("sum = %d\n", sum);
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }

    free(arr);
    return 0;

}