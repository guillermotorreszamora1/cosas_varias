/*
Solution for the problem 490 of uva.onlinejudge.org
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
char palabras[101][101];
int longitudes[101];
int longitud_maxima;
int numero_lineas;
int main(){
	int i=0,j=0,k=0;
	char caracter;
	while(scanf("%c",&caracter)!=EOF){
		if(caracter=='\n'){
			longitudes[j]=i;
			palabras[j][i]='\0';
			if(longitudes[j]>longitud_maxima){
				longitud_maxima = longitudes[j];
			}
			i=0;
			j++;
		}else{
			palabras[j][i]=caracter;
			i++;
		}
	}
	numero_lineas = j;
	for(i=0;i<longitud_maxima;i++){
		for(j=numero_lineas-1;j>=0;j--){
			if(i<longitudes[j]){
				printf("%c",palabras[j][i]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}