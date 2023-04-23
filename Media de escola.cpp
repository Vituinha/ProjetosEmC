#include <stdio.h>
#include <stdlib.h>
int main(){
	float n1, n2, frequencia, media;
	printf("Digite respectivamente a nota1, nota2 e frequencia do aluno.\n");
	scanf("%f%f%f", &n1, &n2, &frequencia);
	media = (n1+n2)/2;
	if(media >= 6 && frequencia >= 75){
		printf("Aprovado com media: %f e frequencia: %f", media, frequencia);
	} else if (media >= 6 && frequencia < 75){
		printf("Reprovado por frequencia com media: %f e frequencia: %f", media, frequencia);
	} else if (media < 6 && frequencia >= 75){
		printf("Reprovado por media com media de: %f e frequencia: %f", media, frequencia);
	} else {
		printf("Reprovado por media e frequencia com media: %f e frequencia: %f", media, frequencia);
	}
	return 0;
}
