#include <stdio.h>


int faktoriyel_hesabi(int sayi) {
    int sonuc = 1;
    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    int a, b, n;
    
   
    printf("Lutfen a degerini girin: ");
    scanf("%d",&a);
    printf("Lutfen b degerini girin: ");
    scanf("%d",&b);
    printf("Lutfen n degerini girin: ");
    scanf("%d",&n);
    

    for (int k = 0; k <= n; k++) {
        
        int komb = faktoriyel_hesabi(n) / (faktoriyel_hesabi(k) * faktoriyel_hesabi(n - k));

   
        int terimA = 1, terimB = 1;
        for (int i = 0; i < (n - k); i++) terimA *= a;
        for (int i = 0; i < k; i++) terimB *= b;

       
        printf("%d", komb * terimA * terimB);
        if (k < n) printf(" + ");
    }

    printf("\n");



    return 0;
}







