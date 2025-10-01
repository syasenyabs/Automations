#include <stdio.h>

int main() {
    int num;
    unsigned long long faktoriyel = 1;

    printf("Sayi girin: ");
    scanf("%d", &num);

    int temp = num;  
    for(int i = 1; i <= temp; i++) {
        faktoriyel *= i;
    }

    printf("%d girilen sayi fact: %llu\n", num, faktoriyel);
    return 0;
}
