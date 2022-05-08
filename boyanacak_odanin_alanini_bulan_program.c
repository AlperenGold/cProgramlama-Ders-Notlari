#include <stdio.h>

main()
{
    int tavan_uzunluk, tavan_boy, tavan, d1_en, d1_boy, d1, d2_en, d2_boy, d2, toplam;
    printf("Tavanin en uzunlugunu giriniz: ");
    scanf("%d", &tavan_uzunluk);
    printf("Tavanin boy uzunlugunu giriniz: ");
    scanf("%d", &tavan_boy);
    tavan = tavan_uzunluk * tavan_boy;
    printf("Tavan alani: %d\n", tavan);

    printf("\n1. duvarin en uzunlugunu giriniz: ");
    scanf("%d", &d1_en);
    printf("1. duvarin boy uzunlugunu giriniz: ");
    scanf("%d", &d1_boy);
    d1 = d1_en * d1_boy * 2;
    printf("1. duvar ve karsi duvarin alanlar toplami: %d\n", d1);

    printf("\n2. duvarin en uzunlugunu giriniz: ");
    scanf("%d", &d2_en);
    printf("2. duvarin boy uzunlugunu giriniz: ");
    scanf("%d", &d2_boy);
    d2 = d2_en * d2_boy * 2;
    printf("2. duvar ve karsi duvarin alanlar toplami: %d\n", d2);

    toplam = d1 + d2 + tavan;
    printf("\nToplam boyanacak alan: %d", toplam);
}