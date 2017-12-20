/*
Solution for the problem 150 of aceptaelreto.com
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
int main(){
	int tamano;
	int i,j;
	char caracter;
	while(1){
		scanf("%d",&tamano);
		scanf("%c",&caracter);
		scanf("%c",&caracter);
		if(tamano==0&&caracter=='0'){
			return 0;
		}
		if(tamano==1){
			printf("%c\n",caracter);
		}
		if(tamano>1){
			for(i=0;i<(tamano-1);i++){
				for(j=tamano-1;j>i;j--){
					printf(" ");
				}
				for(j=0;j<(tamano+2*i);j++){
					printf("%c",caracter);
				}
				printf("\n");
			}
			for(;i>=0;i--){
				for(j=tamano-1;j>i;j--){
					printf(" ");
				}
				for(j=0;j<(tamano+2*i);j++){
					printf("%c",caracter);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
