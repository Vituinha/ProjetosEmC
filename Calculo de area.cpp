#include <stdio.h>
#include <stdlib.h>
int main(){
	float largura, comprimento, area;
	printf("Digite a largura e o comprimento do terreno.\n");
	scanf("%f%f", &largura, &comprimento);
	area = largura * comprimento;
	printf("A area e: %f", area);
	return 0;
}
