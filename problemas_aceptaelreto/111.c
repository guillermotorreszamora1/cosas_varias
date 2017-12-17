/*

Solution for the problem 111 of aceptaelreto.com
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
#include<string.h>
char orbitales[20][3]={"1s","2s","2p","3s","3p","4s","3d","4p","5s","4d","5p","6s","4f","5d","6p","7s","5f","6d","7p"};
int maximos[20]={2,2,6,2,6/*3p*/,2,10,6,2,10/*4d*/,6,2,14,10,6/*6p*/,2,14,10,6};
/*s2
p6
d10
f14*/
#define MIN(x,y) ((x)>(y)?(y):(x))
int main(){
	char salida[100];
	char elemento[50];
	int numero;
	char c_numero[5];
	int i=0;
	while(1){
		scanf("%s",elemento);
		if(!strcmp(elemento,"Exit")){
			return 0;
		}
		scanf("%d",&numero);
		salida[0]='\0';
		if(numero>0){
			for(i=0;numero>0;i++){
				if(i!=0){
					strcat(salida," ");
				}
				strcat(salida,orbitales[i]);
				sprintf(c_numero,"%d",MIN(maximos[i],numero));
				strcat(salida,c_numero);
				numero = numero - maximos[i];
			}
			printf("%s\n",salida);
		}else{
			printf("1s0\n");
		}
	}
}
