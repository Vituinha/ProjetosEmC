#include <stdio.h>
#include <stdlib.h>
int main(){
	int pontos;
	float salario, bonus, salariofinal;
	printf("Digite os pontos e o salario atual do funcionario.\n");
	scanf("%d%f", &pontos, &salario);
	if(pontos >= 1000){
		bonus = 500;
	} else if( pontos >= 500 && pontos < 1000){
		bonus = 300;
	} else {
		bonus = 0;
	}
	salariofinal = bonus + salario;
	printf("O salario final e de: %f", salariofinal);
	return 0;
}
