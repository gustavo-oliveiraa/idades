/*informar a idade!
0-3 -> bebê
4-10 -> criança
11-17 -> adolescente
18-40 -> adulto
41-60 -> adulto 2
61 ... -> idoso*/


#include<stdio.h>
int main(){
	int idade;
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	if(idade >= 0 && idade <= 3)
	{
	        printf("Tem de 0 a 3 anos sendo um, bebe.\n");
    }
	else if(idade >= 4 && idade <= 10)
	{
	printf("Tem de 4 a 10 anos entao e uma, criança.\n");
    }
	else if(idade >= 11 && idade <= 17)
	{
	printf("Tem de 11 a 17 anos sendo um, adolescente.\n");
    }
    else if(idade >= 18 && idade <= 40)
	{
    printf("Tem de 18 a 40 anos sendo um, adulto.\n");
    }
    else if(idade >= 41 && idade <=60)
	{
    printf("Tem de 41 a 60 anos sendo um, adulto 2.\n");
    }
	else
	{
	printf("Tem de 61 ou mais sendo, idoso.\n");
	}
	return 0;
}
