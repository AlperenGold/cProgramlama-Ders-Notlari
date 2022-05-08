#include <stdio.h>

main()
{
	int sayi1, sayi2, c;
	printf("Iki sayi giriniz: ");
	scanf("%d %d" , &sayi1, &sayi2);
    c = 0;
    
	do {
		c = c + sayi1;
		sayi2= sayi2 - 1;
		
	}
    while(sayi2 > 0);

	printf("Sonuc: %d", c);
}