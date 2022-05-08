#include <stdio.h>

main(){
	int yaricap;
	float pi=3.14;
	float alan;
     
	printf("Dairenin yaricapini giriniz: "); 
	scanf("%d", &yaricap);

	alan = pi * yaricap * yaricap; 
	printf("Dairenin alani: %f", alan);
}