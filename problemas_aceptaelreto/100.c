/*

Solution for the problem 100 of aceptaelreto.com
    Copyright (C) 2017 Guillermo Torres Zamora

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
#include<stdlib.h>
void itoa(int a,char *puntero);
void burbuja_ma(char *a);//Mayor a menor
void burbuja_me(char *a);//Menor a mayor
int caprecar(int numero,char *puntero);
int main(){
	int pruebas,i,numero,contador;
	char *puntero= (char *)malloc(5*sizeof(char));
	scanf("%d",&pruebas);
	for(i=0;i<pruebas;i++){
		scanf("%d",&numero);
		contador=0;
		for(;;){
			if(numero==6174){
				break;
			}
			numero = caprecar(numero,puntero);
			if(numero==0){
				contador=8;
				break;
			}
			
			contador++;
		}
		printf("%d\n",contador);
	}
	free(puntero);
	return 0;
}
int caprecar(int numero,char *puntero){
	int n1,n2;
	itoa(numero,puntero);
	burbuja_ma(puntero);
	n1 = atoi(puntero);
	burbuja_me(puntero);
	n2 = atoi(puntero);
	numero = n1 - n2;
	return numero;
}
void itoa(int a,char *puntero){
	int i;
	for(i=3;i>=0;i--){
		puntero[i] = (a%10)+'0';
		a = a/10;
	}
	puntero[4]='\n';
}
void burbuja_ma(char *a){
	int i,j;
	char temp;
	for(i=0;i<3;i++){
		for(j=0;j<(3-i);j++){
			if(a[j]<a[j+1]){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j]= temp;
			}
		}
	}
	a[5]='\0';
}
void burbuja_me(char *a){
	int i,j;
	char temp;
	for(i=0;i<3;i++){
		for(j=0;j<(3-i);j++){
			if(a[j]>a[j+1]){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j]= temp;
			}
		}
	}
	a[5]='\0';
}
