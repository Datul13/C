#include <stdio.h>

int main()
{
	int A;
	int B;
	int i;
	printf("Masukkan Bilangan Awal : ");
	scanf("%d", &A);
	printf("Masukkan Bilangan Akhir : ");
	scanf("%d", &B);
	for(i=A;i<=B;i++){
		if(i%3!=0)
		printf("%d ",i);
	}
	getch();
}
