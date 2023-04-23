#include <stdio.h>
#include <stdlib.h>
int main(){
	float imc, altura, peso;
	printf("Digite qual sua altura e seu peso respectivamente.\n");
	scanf("%f%f", &altura, &peso);
	imc = peso/(altura*altura);
	if(imc < 17){
		printf("Muito abaixo do peso com imc: %f", imc);
	} else if (imc >= 17 && imc <= 18.49){
		printf("Abaixo do peso com o imc: %f", imc);
	} else if (imc >= 18.5 && imc <= 24.99){
		printf("Peso normal com imc de: %f", imc);
	} else if (imc >= 25 && imc <= 29.99){
		printf("Acima do peso com o imc: %f", imc);
	} else if (imc >= 30 && imc <= 34.99){
		printf("Obesidade I com imc de: %f", imc);
	} else if (imc >= 35 && imc <= 39.99){
		printf("Obesidade II com imc de: %f", imc);
	} else {
		printf("Obesidade III com imc de: %f", imc);
	}
	return 0;
}
