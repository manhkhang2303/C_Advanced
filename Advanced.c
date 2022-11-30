#include <stdio.h>
#include <stdint.h>
#define MAX 100
void tangdan(int a[], int n);
void giamdan(int a[], int n);
void nhap(int a[], int n);
void xuat(int a[], int n);
void phan_tu_phan_biet(int a[], int b[], int n, int *m);
void Xu_li(int a[], int b[], int n, int *m);

int main(int argc, char const *argv[]) {
    int a[MAX];
    int b[MAX];
    int *m;
    int n;
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX);
    nhap(a, n);
    xuat(a, n);
    Xu_li(a, b, n, m);
    //tangdan(a, n);
    //giamdan(a, n);
    return 0;    
}
void nhap(int a[], int n) {
    printf("\t\t\t===== NHAP MANG =====\n");
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n) {
    printf("\t\t\t===== XUAT MANG =====\n");
    for(int i = 0; i < n; i++) {
        printf("Phan tu thu a[%d]: %d\n", i, a[i]);
    }
}
void tangdan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                a[i] = a[i] ^ a[j];
                a[j] = a[i] ^ a[j];
                a[i] = a[i] ^ a[j];
            }
        }
    }
}
void giamdan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                a[i] = a[i] ^ a[j];
                a[j] = a[i] ^ a[j];
                a[i] = a[i] ^ a[j];
            }
        }
    }
}
void phan_tu_phan_biet(int a[], int b[], int n, int *m) {
    *m = 0;
    b[*m] = a[0];
    (*m)++;
    for(int i = 0; i < n; i++) {
        _Bool Kiem_tra = 1;
        for(int j = i - 1; j >= 0; j--) {
            Kiem_tra = 0;
            break;
        }
        if(Kiem_tra = 1) {
        b[*m] = a[i];
        (*m)++;
    }
    }
}
void Xu_li(int a[], int b[], int n, int *m) {
    phan_tu_phan_biet(a, b, n, m);
    for(int i = 0; i < *m; i++) {
        int dem = 0;
        for(int j = 0; j < n; j++) {
            if(b[i] == a[j]) { 
                dem++;
            }
        }
        printf("\nPhan tu %d xuat hien %d lan", b[i], dem);
    }
}