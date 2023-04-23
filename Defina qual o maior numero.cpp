#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1, n2;
	printf("Digite dois numeros inteiros para determinar qual e o maior deles.\n");
	scanf("%d%d", &n1, &n2);
	if(n1 > n2){
		printf("O numero %d e o maior.", n1);
	} else if(n1 < n2) {
		printf("O numero %d e o maior.", n2);
	} else {
		printf("Os numeros sao iguais.");
	}
	return 0;
}
