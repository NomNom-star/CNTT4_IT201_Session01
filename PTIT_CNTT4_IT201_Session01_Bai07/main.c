#include <stdio.h>
#include <stdbool.h>

bool cach1(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
// Độ phức tạp thời gian là O(n^2)
}

bool cach2(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return true;
        }
    }
    return false;
// Độ phức tạp thời gian là O(n^2)+O(n)
}