#include <stdio.h>

main()
{
	int sayi, toplam;
	toplam = 0;
	
	do {
		scanf("%d", &sayi);
		toplam += sayi;
	}
	while(toplam < 100);

	printf("%d", toplam);
}