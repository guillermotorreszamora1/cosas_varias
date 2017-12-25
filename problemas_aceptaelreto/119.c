/*

Solution for the problem 119 of aceptaelreto.com
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
#include<math.h>
int main(){
	int acumulador;
	int entrada;
	int numero;
	while(1){
		scanf("%d",&entrada);
		if(entrada==0){
			return 0;
		}
		acumulador=0;
		while(1){
			numero = sqrt(entrada);
			entrada = entrada - numero*numero;
			acumulador += numero*numero + 4*numero;
			if(entrada==0){
				break;
			}
		}
		printf("%d\n",acumulador);
	}
}
