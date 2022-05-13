#include <stdio.h>

main()
{
    int sayi, birler, onlar;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    if (sayi > 9 && sayi < 100) {
        birler = sayi % 10;
        onlar = sayi / 10;
    }
    else {
        printf("Hatali bir sayi girdiniz.");
    }

    switch (onlar) {
    case 1:
        printf("On");
        break;
    case 2:
        printf("Yirmi");
        break;
    case 3:
        printf("Otuz");
        break;
    case 4:
        printf("Kirk");
        break;
    case 5:
        printf("Elli");
        break;
    case 6:
        printf("Altmis");
        break;
    case 7:
        printf("Yetmis");
        break;
    case 8:
        printf("Seksen");
        break;
    case 9:
        printf("Doksan");
        break;
    }

    switch (birler) {
    case 0:
        printf("Sifir");
        break;
    case 1:
        printf("Bir");
        break;
    case 2:
        printf("Iki");
        break;
    case 3:
        printf("Uc");
        break;
    case 4:
        printf("Dort");
        break;
    case 5:
        printf("Bes");
        break;
    case 6:
        printf("Alti");
        break;
    case 7:
        printf("Yedi");
        break;
    case 8:
        printf("Sekiz");
        break;
    case 9:
        printf("Dokuz");
        break;
    }
}