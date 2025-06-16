int xuatHienNhieuNhat(int arr[], int n){
    int maxCount = 0;
    int giaTri = arr[0];

    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]== arr[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount = count;
            giaTri = arr[i];
        }
    }
    return giaTri;
}
// Độ phức tạp thời gian là O(n^2)