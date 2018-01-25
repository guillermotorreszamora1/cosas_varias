/*

Solution for the problem 166 of aceptaelreto.com
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
	int origen;
	int destino;
	int distancia1;
	int distancia2;
	while(1){
		scanf("%d",&origen);
		scanf("%d",&destino);
		if(origen==destino){
			if(origen==0){
				break;
			}
			printf("0\n");
		}else if(origen>destino){
			distancia1 = origen - destino;
			distancia2 = (destino+99)-origen;
			if(distancia1<distancia2){
				printf("%d\n",distancia1);/*5 2*/
			}else{
				printf("%d\n",distancia2);/*63 5*/
			}
		}else{/*destino>origen*/
			distancia1 = destino - origen;
			distancia2 = (origen+99) - destino;
			if(distancia1<distancia2){
				printf("%d\n",distancia1);/*2 5*/
			}else{
				printf("%d\n",distancia2);/*5 63*/
			}
		}
	}
	return 0;
}
