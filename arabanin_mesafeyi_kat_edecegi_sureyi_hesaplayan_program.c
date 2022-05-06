#include <stdio.h>

main()
{
    int mesafe;
    int hiz;
    
    printf("Gidilecek mesafeyi giriniz (km): ");
    scanf("%d", &mesafe);
    printf("Aracin hizini giriniz (km/s): ");
    scanf("%d", &hiz);
    
    int toplam = (mesafe / (float)hiz) * 3600;
    
    printf("Yolda gecirelecek sure: %d saat %d dakika %d saniyedir.\n", toplam / 3600, (toplam % 3600) / 60, toplam % 60);
}