#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char* cadena_o,char* cadena_r){
	int i,size;
	size = strlen(cadena_o);
	for(i=0;i<size;i++){
		cadena_r[size-1-i] = cadena_o[i]; 
	}
	cadena_r[size]='\0';
}
int kaprekar(int numero){
	char cadena[5];
	char cadena_r[5];
	int a,b;
	sprintf(cadena,"%d",numero);
	reverse(cadena,cadena_r);
	sscanf(cadena,"%d",&a);
	sscanf(cadena_r,"%d",&b);
	return abs(a-b);
}
int main(){
	int numero;
	scanf("%d",&numero);
	numero = kaprekar(numero);
	printf("%d\n",numero);
}
