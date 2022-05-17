#include <stdio.h>
#include <conio.h>

main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    if (sayi % 2 == 0) {
        printf("%d sayisi bir cift sayidir.", sayi);
    }
    else{
        printf("%d sayisi bir tek sayidir.", sayi);
    }
    getch();
    return 0;
}