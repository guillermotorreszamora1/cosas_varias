/*
Solution for the problem 355 of uva.onlinejudge.org
    Copyright (C) 2018 Guillermo Torres Zamora
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include<stdio.h>
#include<string.h>
int error;
long long int conversorMenor(char* cadena,int base){
	int i,tamano;
	long long int numero;
	error = 0;
	tamano = strlen(cadena);
	numero = 0;
	for(i=0;i<tamano;i++){
		if(((cadena[i])-'0')>=base){
			error = 1;
		}
		numero = numero*base+(cadena[i]-'0');
	}
	return numero;
}
long long int conversorMayor(char* cadena,int base){
	int i,tamano;
	long long int numero;
	error = 0;
	tamano = strlen(cadena);
	numero = 0;
	for(i=0;i<tamano;i++){
		if(cadena[i]>='0'&&cadena[i]<='9'){
			numero = numero*base +(cadena[i]-'0');
		}else if((cadena[i]-'A'+10)<base){
			numero = numero*base + (cadena[i]-'A'+10);
		}else{
			error = 1;
		}
	}
	return numero;
}
void conversor2(char* cadena,int base,long long int numero){
	int i=0,j;
	int resto;
	char subcadena[41];
	while(numero>0){
		resto = numero%base;
		numero = numero/base;
		if(resto<10){
			subcadena[i] = resto + '0';
		}else{
			subcadena[i] = resto -10+'A';
		}
		i++;
	}
	if(i>0){
		j=0;
		for(i--;i>=0;i--){
			cadena[j] = subcadena[i];
			j++; 
		}
		cadena[j]='\0';
	}else{
		cadena[0]='0';
		cadena[1]='\0';
	}
}
int main(){
	int base1,base2;
	long long int numero;
	char cadena[64];
	char cadena2[64];
	while(scanf("%d %d %s",&base1,&base2,cadena)!=EOF){
		if(base1>10){
			numero = conversorMayor(cadena,base1);
		}else{
			numero = conversorMenor(cadena,base1);
		}
		conversor2(cadena2,base2,numero);
		if(error==1){
			printf("%s is an illegal base %d number\n",cadena,base1);
		}else{
			printf("%s base %d = %s base %d\n",cadena,base1,cadena2,base2);
		}
	}
	return 0;
}