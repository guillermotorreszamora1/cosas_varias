/*

Solution for the problem 167 of aceptaelreto.com
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
int procesar_patron_iterativo(int tamano);
int main(){
	int tamano;
	int respuesta;
	while(scanf("%d",&tamano)!=EOF){
		respuesta = procesar_patron_iterativo(tamano);
		printf("%d\n",respuesta);
	}
	return 0;
}
int procesar_patron_iterativo(int tamano){
	int multiplicador=4;
	int acumulado=0;
	while(1){
		if(tamano==1||tamano==0){
			return tamano*multiplicador+acumulado;
		}	
		acumulado += tamano*multiplicador;
		multiplicador = multiplicador*4;
		tamano = tamano/2;
	}
}
/*493255
las3mosqueperras+semper.navidad2017
*/

/*No es cifrado cesar*/

