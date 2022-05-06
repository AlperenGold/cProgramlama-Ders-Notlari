#include <stdio.h>

main()
{
    int a;
    int b;
    int c; 
    int secim;
    printf("1- Ucgenin alani!");
    printf("\n2- Karenin alani!");
    printf("\n3- Dikdortgenin alani!");
    printf("\nBir secim yapiniz: ");
    scanf("%d", &secim);
    
    if (secim == 1) {
        printf("\nTaban uzunlugu giriz: ");
        scanf("%d", &a);
        printf("Yuksekligi giriniz: ");
        scanf("%d", &b);
        c = a * b / 2;
        printf("Ucgenin alani: %d", c);
    }
    if (secim == 2) {
        printf("\nKarenin bir kenarinin uzunlugunu giriniz: ");
        scanf("%d", &a);
        c = a * a;
        printf("Karenin alani: %d", c);
    }
    if (secim == 3) {
        printf("\nDikdortgenin birinci kenarinin uzunlugunu giriniz: ");
        scanf("%d", &a);
        printf("Dikdortgenin ikinci kenarinin uzunlugunu giriniz: ");
        scanf("%d", &b);
        c = a * b;
        printf("Dikdortgenin alani: %d", c);
    }
}