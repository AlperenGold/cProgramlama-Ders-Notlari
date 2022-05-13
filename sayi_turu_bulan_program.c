#include <stdio.h>

main()
{
    int sayi, yuzler, onlar, birler;
    printf("3 basamakli bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    if (sayi < 1000 && sayi > 99) {
        yuzler = sayi / 100;
        onlar = (sayi / 10) % 10;
        birler = sayi % 10;
        if (yuzler == onlar && yuzler != birler) {
            printf("Girdiginiz sayi mukemmel bir sayi.");
        }
        else if (yuzler == birler && yuzler != onlar) {
            printf("Girdiginiz sayi harika bir sayi.");
        }
        else if (onlar == birler && onlar != yuzler) {
            printf("Girdiginiz sayi super bir sayi.");
        }
        else {
            printf("Girdiginiz sayi normal bir sayi.");
        }
    }
    else {
        printf("Girdiginiz sayi 3 basamakli bir sayi değil.");
    }
}