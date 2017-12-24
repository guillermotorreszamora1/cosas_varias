/*

Solution for the problem 157 of aceptaelreto.com
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
	int valor_mes[13]={0,0/*Enero*/,31,59,90,120,151,181,212,243,273,304,334};
	int n_casos;
	int mes,dia;
	int resultado;
	scanf("%d",&n_casos);
	for(;n_casos>0;n_casos--){
		scanf("%d",&dia);
		scanf("%d",&mes);
		resultado = 365 - (dia+valor_mes[mes]);
		printf("%d\n",resultado);
	}
}

