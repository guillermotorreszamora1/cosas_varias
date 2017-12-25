/*

Solution for the problem 162 of aceptaelreto.com
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
	int i,j,k,l;
	int tamano;
	char caracter;
	while(1){
	scanf("%d",&tamano);
	if(tamano==0){
		return 0;
	}
	scanf("%c",&caracter);
	scanf("%c",&caracter);
	printf("|");
	for(i=0;i<8;i++){
		for(j=0;j<tamano;j++){
			printf("-");
		}
	}
	printf("|\n");
	for(i=0;i<8;i++){
		for(j=0;j<tamano;j++){
			printf("|");
			for(k=0;k<8;k++){
				for(l=0;l<tamano;l++){
					if((i%2==0)&&(k%2==0)){
						printf(" ");
					}else if((i%2==1)&&(k%2==1)){
						printf(" ");
					}else{
						printf("%c",caracter);
					}
				}
			}
			printf("|\n");
		}
	}
	printf("|");
	for(i=0;i<8;i++){
		for(j=0;j<tamano;j++){
			printf("-");
		}
	}
	printf("|\n");
	}
}
