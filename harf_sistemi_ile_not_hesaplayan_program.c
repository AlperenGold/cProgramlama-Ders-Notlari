#include <stdio.h>

main()
{
    int vize;
    int final;
    int quiz;
    int notu;

    printf("Vize notunuzu giriniz: ");
    scanf("%d", &vize);
    printf("Final notunuzu giriniz: ");
    scanf("%d", &final);
    printf("Quiz notunuzu giriniz: ");
    scanf("%d", &quiz);

    notu = (quiz * 0.1) + (vize * 0.3) + (final * 0.6);

    printf("Ortalama: %d\n", notu);

    if (notu < 100 && notu >= 90) {
        printf("AA ile dersi geçtiniz.");
    }
    else if (notu < 90 && notu >= 85) {
        printf("BA ile dersi geçtiniz.");
    }
    else if (notu < 85 && notu >= 80) {
        printf("BB ile dersi geçtiniz.");
    }
    else if (notu < 80 && notu >= 75) {
        printf("CB ile dersi geçtiniz.");
    }
    else if (notu < 75 && notu >= 50) {
        printf("%d ile koşullu olarak geçtiniz.", notu);
    }
    else {
        printf("%d ile dersten kaldınız.", notu);
    }
}