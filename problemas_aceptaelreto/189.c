/*

Solution for the problem 189 of aceptaelreto.com
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
int * embarque(int* pasajeros,int* n_pasajeros,int cubierta);
int main(){
	int n_pasajeros;
	int n_operaciones;
	int dato,i;
	char op[10];
	int *pasajeros;
	while(1){
		scanf("%d",&n_pasajeros);
		if(n_pasajeros==0){
			break;
		}
		pasajeros = (int *)malloc(n_pasajeros*sizeof(int));
		for(i=0;i<n_pasajeros;i++){
			scanf("%d",pasajeros+i);
		}
		scanf("%d",&n_operaciones);
		for(i=0;i<n_operaciones;i++){
		scanf("%s",op);
		scanf("%d",&dato);
			if(op[0]=='E'){
				pasajeros = embarque(pasajeros,&n_pasajeros,dato);
				printf("%d\n",n_pasajeros);
			}else{
				printf("%d\n",pasajeros[dato-1]);
			}
		}
		free(pasajeros);
		printf("*\n");
	}
}
int *embarque(int *pasajeros,int *n_pasajeros,int cubierta){
	//int *pasajeros_n;
	int i,n_pasajeros_n=0;
	//pasajeros_n = (int *)malloc((*n_pasajeros)*sizeof(int));
	for(i=0;i<*n_pasajeros;i++){
		if(pasajeros[i]!=cubierta){
			pasajeros[n_pasajeros_n] = pasajeros[i];
			n_pasajeros_n++;
		}
	}
	*n_pasajeros = n_pasajeros_n;
	//free(pasajeros);
	return pasajeros;
}
