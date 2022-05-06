#include <stdio.h>

main()
{
	int sayi;
	int toplam;
	int sayac = 0;
	toplam = 0;
	
	do {
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayi);
		toplam += sayi;
		sayac++;
	}
	while(sayi != 0);

	printf("Girilen %d adet sayinin toplami %d'dir", sayac, toplam);
}