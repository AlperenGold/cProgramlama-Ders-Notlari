#include <stdio.h>

main()
{
    char harf;
    printf("Bir harf giriniz: ");
    scanf("%c", &harf);
    
    if (harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U' || harf == 'a' || harf == 'e' || harf == 'i' || harf == 'o' || harf == 'u') {
        printf("%c sesli bir harftir.", harf);
    }
    else {
        printf("%c sesli bir harf degildir.", harf);
    }
}