#include <stdio.h>


int isPrime(int n) {
    int i;

    if (n < 2)
        return 0; 

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0; 
    }

    return 1; 
}

int main() {
    int n;

    
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong!\n");
        
    }

    
    if (isPrime(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    
}

