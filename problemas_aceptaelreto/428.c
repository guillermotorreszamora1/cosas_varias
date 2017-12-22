/*

Solution for the problem 428 of aceptaelreto.com
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
int proces(int numero){
	int conteo=0;
	int modulo;
	while(1){
		if(numero==0){
			return conteo;
		}
		modulo = numero%5;
		numero = numero/5;
		if(modulo==4){
			conteo++;
		}
	}
}
int main(){
	int i;
	int dato;
	scanf("%d",&i);
	for(;i>0;i--){
		scanf("%d",&dato);
		if(proces(dato)>1){
			printf("SI\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
