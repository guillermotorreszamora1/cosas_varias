/*
Solution for the problem 112 of uva.onlinejudge.org
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
int objetivo;
int bandera;
int recursive(int ac1){
	int primer_caracter=1;
	char caracter;
	int numero=0;
	int signo=0;
	int estado;
	int contador=0;
	while(scanf("%c",&caracter)){
		if(caracter=='('){
			if(signo==1){
				numero = -numero;
				signo = 0;
			}
			if(contador==0){
				estado = recursive(ac1+numero);
			}else if(recursive(ac1+numero)&&estado){
				if((ac1+numero)==objetivo){
					bandera=1;
				}
			}
			contador++;
		}
		if(caracter==')'){
			if(primer_caracter==1){
				return 1;
			}
			return 0;
		}
		if(caracter=='-'){
			signo=1;
			primer_caracter=0;
		}
		if(caracter>='0'&&caracter<='9'){
			numero = numero*10+caracter-'0';
			primer_caracter=0;
		}
	}
}
int main(){
	char caracter;
	while(scanf("%d",&objetivo)!=EOF){
		caracter=' ';
		while(caracter!='('){
			scanf("%c",&caracter);
		}
		bandera=0;
		recursive(0);
		if(bandera==1){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}