#include <stdio.h>

main()
{
    float yol, hiz, zaman;
    printf("Gidilen mesafeyi giriniz (km): ");
    scanf("%f", &yol);

    printf("Gecirilen zamani giriniz (saat): ");
    scanf("%f", &zaman);

    hiz = yol / zaman;

    printf("Gitmeniz gereken hiz: %f km/s", hiz);
}
