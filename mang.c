#include<stdio.h>
int main(){
    //khai bao mang
    int n;
    printf ("\nMoi nhap vao so phan tu cua mang: ");
    scanf ("%d", &n);
    int a[n];
    //nhap mang tu ng dung
    printf ("\nNhap phan tu cua mang...");
    for (int i = 0; i < n; i++){
        printf ("\nNhap phan tu thu %d: ", i);
        scanf ("%d, ", &a[i]);
    }
    //xu ly mang
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max ) max = a[i];
    }
    printf ("\nGia tri lon nhat trong mang la %d", max);
    int min = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] < min ) min = a[i];
    }
    printf ("\nGia tri nho nhat trong mang la %d", min);
    //tinh tong
    int tong = 0;
    for (int i = 0; i < n; i++){
        tong = tong + a[i];
    }
    printf ("\nTong cac gia tri trong mang la: %d", tong);
    printf ("\n");
    //hien cac so chan
    printf ("\nCac so chan la: ");

    for (int i = 0; i < n; i++){
        if (a[i]% 2 == 0)
        printf ("%d ", a[i]);
        printf ("\n");
    }
    //hien cac so le
    printf ("\nCac so le la: ");

    for (int i = 0; i < n; i++){
        if (a[i]% 2 == 1)
        printf ("%d ", a[i]);
        printf ("\n");
    }
    //xuat mang
    printf ("--------");
    printf ("\nCac phan tu cua mang la: ");
    for (int i = 0 ; i < n; i++){
        printf ("\nPhan tu thu %d gia tri la %d ", i, a[i]);
    }
}