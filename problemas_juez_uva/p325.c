/*
Solution for the problem 325 of uva.onlinejudge.org
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
int main(){
	int estado;
	int estado2;
	int auxiliar;
	char caracter;
	int i;
	int fin;
	int n_caracteres;
	int n_espacios;
	int legal;
	fin=0;
	while(1){
		n_caracteres=0;
		legal=1;
		estado = 0;
		estado2 = 0;
		while(scanf("%c",&caracter)!=EOF){
			if(n_caracteres==0&&caracter=='*'){
				fin=1;
				n_caracteres++;
				continue;
			}else if(fin==1){
				if(caracter=='\n'){
					goto finalizar;
				}else{
					printf("*");
				}
				fin=0;
			}
			n_caracteres++;
			if(caracter=='\n'){
				n_caracteres=0;
				break;
			}
		reprocesar:
			switch(estado){
			case 0:/*init*/
				if(caracter==' '){
					continue;
				}else if((caracter=='+' || caracter == '-')&&!estado2){
					estado2++;
				}else if(caracter< '0' || caracter > '9'){
					legal = 0;
				}else{
					estado2 += 2;
				}
				if(estado2!=1){
					estado= 2;
				}
				printf("%c",caracter);
			break;
			case 1:/*espacios */
				if(caracter==' '){
					n_espacios++;
				}else{
					for(i=0;i<n_espacios;i++){
						printf(" ");
					}
					estado = estado2;
					legal =0 ;
					goto reprocesar;
				}
			break;
			case 2:/*procesar numero*/
				if(caracter==' '){
					estado2 = estado;
					n_espacios=1;
					estado=1;
					continue;
				}
				if(caracter=='.'){
					estado = 3;
					auxiliar = 0;
					printf("%c",caracter);
					continue;
				}
				if(caracter=='e'||caracter=='E'){
					estado = 5;
					auxiliar=0;
					printf("%c",caracter);
					continue;
				}
				if(caracter<'0'||caracter>'9'){
					legal = 0;
				}
				printf("%c",caracter);
			break;
			case 3:/*numero despues de punto */
				if(caracter=='E'||caracter=='e'){
					if(auxiliar==0){
						legal= 0;
					}
					estado = 5;
					auxiliar=0;
					printf("%c",caracter);
					continue;
				}
				if(caracter==' '){
					estado2 = estado;
					n_espacios=1;
					estado=1;
					continue;
				}
				if(caracter<'0'|| caracter > '9'){
					legal=0;
				}else{
					auxiliar++;
				}
				printf("%c",caracter);
			break;
			case 5:/*estado final*/
				if(caracter==' '){
					estado2 = estado;
					n_espacios=1;
					estado=1;
					continue;
				}
				if(auxiliar==0&&(caracter=='+'||caracter=='-')){
					auxiliar++;
				}else
				if(caracter<'0'||caracter>'9'){
					legal=0;
				}else{
					auxiliar += 2;
				}
				printf("%c",caracter);
			break;
			}
		}
		/*comprobador de estado*/
		recheck:
		if(legal==1){
			if(estado==3&&auxiliar>0){/*22.2*/
				legal=1;
			} else
			if(estado==5&&auxiliar>1){/*22.2E2*/
				legal=1;
			} else
			if(estado==1){
				estado = estado2;
				goto recheck;
			} else{
				legal=0;
			}
		}
		if(legal==1){
			printf(" is legal.\n");
		}else{
			printf(" is illegal.\n");
		}
	}
	finalizar:
	return 0;
}