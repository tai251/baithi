#include <stdio.h>

int main() {
    int n, tong = 0;

    
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("khong phai la so nguyen duong");
        
    }

  int i;
    for (i = 1; i <= n; i++) {
        tong += i;
    }

    
    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);

   
}

