/*

Solution for the problem 174 of aceptaelreto.com
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
#include<stdlib.h>
#include<string.h>
/*Año 2013*/
int digitos_repetidos(char* agno){
	int  i,j;
	int tamano;
	tamano = strlen(agno);
	for(i=1;i<tamano;i++){
		for(j=0;j<i;j++){
			if(agno[i]==agno[j]){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	long i,casos;
	long repetido_o;
	int repetido;
	char agno[10];
	long i_agno;
	long o_agno;
	long serie;
	long serie_final;
	long resultado;
	scanf("%ld",&casos);
	for(i=0;i<casos;i++){
		scanf("%s",agno);
		o_agno = atol(agno);
		repetido = digitos_repetidos(agno);
		repetido_o = repetido;
		i_agno = o_agno;
		while(repetido==repetido_o){
			i_agno--;
			sprintf(agno,"%ld",i_agno);
			repetido = digitos_repetidos(agno);
		}
		i_agno++;
		serie = i_agno;
		/*printf("%ld\n",serie);*/
		i_agno = o_agno;
		repetido = repetido_o;
		while(repetido==repetido_o){
			i_agno++;
			sprintf(agno,"%ld",i_agno);
			repetido = digitos_repetidos(agno);
		}
		i_agno--;
		serie_final= i_agno;
		resultado = serie_final -serie +1;
		printf("%ld %ld\n",serie,resultado);
	}
	return 0;
}
