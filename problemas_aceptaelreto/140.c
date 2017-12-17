/*

Solution for the problem 140 of aceptaelreto.com
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
int main(){
	char cadena[11];
	int tamano,i;
	int sumatorio;
	while(1){
		sumatorio =0;
		scanf("%s",cadena);
		if(cadena[0]=='-'){
			return 0;
		}
		tamano = strlen(cadena);
		for(i=0;i<tamano;i++){
			printf("%c",cadena[i]);
			if(i<(tamano-1)){
				printf(" + ");
			}else{
				printf(" = ");
			}
			sumatorio += cadena[i] -'0';
		}
		printf("%d\n",sumatorio);
	}
	return 0;
}
