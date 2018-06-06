/*
Solution for the problem 119 of uva.onlinejudge.org
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
#include<string.h>
int n_personas;
char tabla[10][20];
int dinero[10];
int buscar(char nombre[12]){
	int i;
	for(i=0;i<n_personas;i++){
		if(strcmp(tabla[i],nombre)==0){
			return i;
		}
	}
}
int main(){
	int i,j,k=0;
	int n_regalos;
	char nombre1[12];
	int n1,n2;
	char nombre2[12];
	int cantidad;
	while(1){
		if(scanf("%d",&n_personas)==EOF){
			break;
		}
		if(k>0){
			printf("\n");
		}
		for(i=0;i<n_personas;i++){
			scanf("%s",tabla[i]);
			dinero[i]=0;
		}
		for(i=0;i<n_personas;i++){
			scanf("%s",nombre1);
			scanf("%d",&cantidad);
			scanf("%d",&n_regalos);
			n1 = buscar(nombre1);
			if(n_regalos!=0){
				cantidad = cantidad/n_regalos;
				dinero[n1] -=cantidad*n_regalos;
				for(j=0;j<n_regalos;j++){
					scanf("%s",nombre2);
					n2 = buscar(nombre2);
					dinero[n2] += cantidad;
				}
			}
		}
		for(i=0;i<n_personas;i++){
			printf("%s %d\n",tabla[i],dinero[i]);
		}
		k++;
	}
	return 0;
}