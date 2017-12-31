/*

Solution for the problem 438 of aceptaelreto.com
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
int lectura(char* cadena){
	int i;
	int retorno;
	for(i=0;;i++){
		retorno = scanf("%c",cadena+i);
		if(retorno==EOF){
			return EOF;
		}
		if(cadena[i]=='\n'){
			cadena[i]='\0';
			return !EOF;
		}
	}
}
int main(){
	char cadena[1001];
	int i;
	int longitud;
	int n_letras;
	int n_exclamaciones;
	while(lectura(cadena)!=EOF){
		longitud = strlen(cadena);
		n_letras=0;
		n_exclamaciones=0;
		for(i=0;i<longitud;i++){
			if(cadena[i]>='a'&&cadena[i]<='z'){
				n_letras++;
			}
			if(cadena[i]>='A'&&cadena[i]<='Z'){
				n_letras++;
			}
			if(cadena[i]=='!'){
				n_exclamaciones++;
			}
		}
		if(n_letras>=n_exclamaciones){
			printf("escrito\n");
		}else{
			printf("ESGRITO\n");
		}
	}
	return 0;
}
