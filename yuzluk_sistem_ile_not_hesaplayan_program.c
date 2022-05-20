#include <stdio.h>
 
main()
{
    int vize;
    int final;
    int quiz;
    int not;
   
    printf("Vize notunuzu giriniz: ");
    scanf("%d", &vize);
    printf("Final notunuzu giriniz: ");
    scanf("%d", &final);
    printf("Quiz notunuzu giriniz: ");
    scanf("%d", &quiz);
   
    not = (quiz * 0.1) + (vize * 0.3) + (final * 0.6);
   
    printf("Yil sonu notu: %d \n", not);
   
    if(not > 60) {
        printf("%d ile dersten gectiniz.", not);
    }
    else if(not < 60) {
        printf("%d ile dersten kaldiniz.", not);
    }
    else {
        printf("%d ile dersten kaldiniz.", not);
    }
}