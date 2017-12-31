/*

Solution for the problem 437 of aceptaelreto.com
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
typedef struct{
	int horas;
	int minutos;
	int segundos;
	int sum_segundos;
} tiempo;
void pasar_simple(tiempo* t){
	t->sum_segundos = t->segundos + t->minutos*60 + t->horas*3600;
}
void pasar_complejo(tiempo* t){
	int aux;
	aux = t->sum_segundos;
	t->horas = aux/3600;
	aux -= t->horas*3600;
	t->minutos = aux/60;
	aux -= t->minutos*60;
	t->segundos = aux;
}
int main(){
	int i;
	int n_casos;
	tiempo hora;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d:%d:%d",&hora.horas,&hora.minutos,&hora.segundos);
		pasar_simple(&hora);
		hora.sum_segundos = 60*60*24 - hora.sum_segundos;
		pasar_complejo(&hora);
		printf("%.2d:%.2d:%.2d\n",hora.horas,hora.minutos,hora.segundos);
	}
	return 0;
}
