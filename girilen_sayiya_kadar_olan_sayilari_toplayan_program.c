#include <stdio.h>

main()
{
    int sayac, toplam, girilen_sayi;
    sayac = 0;
    toplam = 0;

    printf("Kaca kadar toplama yapilacagini giriniz: ");
    scanf("%d", &girilen_sayi);

    while (sayac <= girilen_sayi) {
        toplam = toplam + sayac;
        sayac = sayac + 1;
    }
    
    printf("Toplam: %d", toplam);
    return 0;
}