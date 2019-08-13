/*

Solution for the problem 523 of aceptaelreto.com
    Copyright (C) 2019 Guillermo Torres Zamora

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
typedef struct{
	int numero;
	char letras[4];
}Coche;
int compara_coche(Coche* a,Coche* b){
	int cadena;
	cadena = strcmp(a->letras,b->letras);
	if(cadena!=0){
		return -cadena;
	}
	return -(a->numero-b->numero);
}
int main(){
	int n_casos;
	char matricula[8];
	Coche coche_edu;
	Coche coche_otro;
	int n_viejos;
	int n_nuevos;
	int dif;
	scanf("%d",&n_casos);
	while(n_casos--){
		n_viejos=0;
		n_nuevos=0;
		scanf("%s",matricula);
		sscanf(matricula,"%d%s",&(coche_edu.numero),coche_edu.letras);
		while(1){
			scanf("%s",matricula);
			if(strcmp(matricula,"0")==0){
				break;
			}
			sscanf(matricula,"%d%s",&(coche_otro.numero),coche_otro.letras);
			dif = compara_coche(&coche_edu,&coche_otro);
			if(dif<0){
				n_viejos++;
			}else{
				n_nuevos++;
			}
		}
		printf("%d %d\n",n_viejos,n_nuevos);
	}
	return 0;
}
