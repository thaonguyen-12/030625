#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int tinhTong(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return tong;
}

float trungbinh(int arr[], int n) {
    int tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 != 0) {
            tong = tong + arr[i];
            dem++;
        }
    }
    if (dem == 0) return 0;
    
    return tong / dem;
}




int main() {
    int arr[] = { 1, 2, 3, 4, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    
    int tong = tinhTong(arr, n);  
    float tb = trungbinh(arr, n);

    printf("Tong cac gia tri trong mang la: %d\n", tong);
    printf("trung binh cac gia tri trong mang la: %f\n", tb);
    return 0;
}


