#include <stdio.h>

main()
{
    int araba_yas, model, hacim, mtv, mtv_e;
    printf("Model giriniz: ");
    scanf("%d", &model);
    araba_yas = 2023 - model;
    printf("Hacim giriniz: ");
    scanf("%d", &hacim);
    mtv = araba_yas * hacim / 2;

    if (mtv >= 2000) {
        mtv_e = mtv + 1000;
        printf("\nEkstra tutarlı MTV ucreti: %d", mtv_e);
    }

    printf("MTV ucreti: %d", mtv);
}