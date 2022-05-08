#include <stdio.h>
 
main()
{
    int sayi;
    int sayac = 0;
    int i = 2;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    while(i < sayi) {
        if(sayi % i == 0) {
            sayac++;
        }
        i++;
    }
    if(sayac == 0) {
        printf("Girdiginiz %d sayisi, asal bir sayidir.", sayi);
    }
    else {
        printf("Girdiginiz %d sayisi, asal bir sayi degildir.", sayi);
    }
}