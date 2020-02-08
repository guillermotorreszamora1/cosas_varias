/*

Solution for the problem 546 of aceptaelreto.com
    Copyright (C) 2020 Guillermo Torres Zamora

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
	int n_casos;
	int i;
	int cromo;
	int n_cromos;
	int alejandro[5001];
	int mateo[5001];
	int primero;
	scanf("%d",&n_casos);
	while(n_casos){
		for(i=0;i<=5000;i++){
			alejandro[i]=0;
			mateo[i]=0;
		}
		scanf("%d",&n_cromos);
		for(i=0;i<n_cromos;i++){
			scanf("%d",&cromo);
			alejandro[cromo]++;
		}
		scanf("%d",&n_cromos);
		for(i=0;i<n_cromos;i++){
			scanf("%d",&cromo);
			mateo[cromo]++;
		}
		primero=1;
		n_casos--;
		for(i=0;i<=5000;i++){
			if(alejandro[i]>1&&mateo[i]==0){
				if(!primero){
					printf(" ");
				}
				printf("%d",i);
				primero=0;
			}
		}
		if(primero){
			printf("Nada que intercambiar");
		}
		printf("\n");
		primero=1;
		for(i=0;i<=5000;i++){
			if(mateo[i]>1&&alejandro[i]==0){
				if(!primero){
					printf(" ");
				}
				printf("%d",i);
				primero=0;
			}
		}
		if(primero){
			printf("Nada que intercambiar");
		}
		printf("\n");
	}
	return 0;
}
