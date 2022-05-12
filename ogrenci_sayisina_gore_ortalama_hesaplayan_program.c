#include <stdio.h>
#include <conio.h>

main()
{
    int sayac, ogrenci_sayisi, not_toplami, not;
    float ort;
    not_toplami = 0;
    sayac = 0;

    printf("Ogrenci sayisini giriniz: ");

    scanf("%d", &ogrenci_sayisi);

    while (sayac < ogrenci_sayisi) {

        printf("Siradaki ogrencinin notu: ");
        scanf("%d", &not);

        not_toplami = not_toplami + not;
        sayac = sayac + 1;
    }

    ort = (not_toplami) / ogrenci_sayisi;
    printf("Ortalama: %f", ort);

    getch();
    return 0;
}