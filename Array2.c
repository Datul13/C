#include<stdio.h>
main(){
	int i,j,x,y;
	printf("Masukkan Jumlah Baris : ");
	scanf("%d", &i);
	printf("Masukam Jumlah Kolom : ");
	scanf("%d", &j);
	
	printf("Output:");
	printf("\n");
	for(x = 1; x<=i; x++){
		if(x % 2 == 0){
			printf(" ");
			for(y = 1; y<=j; y++){
			printf("*");
			}
		}
		else{
			for(y = 1; y<=j; y++){
			printf("*");
			}
		}
		
		printf("\n");
	}
}
