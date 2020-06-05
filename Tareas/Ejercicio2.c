#include<stdio.h>

void main(){
	int ladoA;
	int ladoB;
	printf("\nIngrese el lado A: ");
	scanf("%d",&ladoA);
	printf("\nIngrese el lado B ");
	scanf("%d",&ladoB);
	int area = ladoA*ladoB;
	int perimetro = (ladoA*2)+(ladoB*2);
	printf("\nSu área:%d ",area);
	printf("\nSu perimetro:%d ",perimetro);
}
