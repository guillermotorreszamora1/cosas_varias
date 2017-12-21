/*

Solution for the problem 366 of aceptaelreto.com
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
typedef struct{
	int puntuacion;
	int peso;
}nino_t;
int nino_cmp(const void* a,const void* b){
	nino_t* ninoa;
	nino_t* ninob;
	ninoa = (nino_t*)a;
	ninob = (nino_t*)b;
	if(ninoa->puntuacion>ninob->puntuacion){
		return -1;
	}else if(ninoa->puntuacion==ninob->puntuacion){
		if(ninoa->peso<ninob->peso){
			return -1;
		}else if(ninoa->peso==ninob->peso){
			return 0;
		}else{
			return 1;
		}
	}else{
		return 1;
	}
}
/*Para orden ascendente se resta*/

int main(){
	int i;
	int numero_ninos;
	nino_t nino[100000];
	while(1){
		scanf("%d",&numero_ninos);
		if(numero_ninos==0){
			break;
		}
		for(i=0;i<numero_ninos;i++){
			scanf("%d",&(nino[i].puntuacion));
			scanf("%d",&(nino[i].peso));
		}
		qsort(nino,numero_ninos,sizeof(nino_t),nino_cmp);
		for(i=0;i<numero_ninos;i++){
			printf("%d %d\n",nino[i].puntuacion,nino[i].peso);
		}
		printf("\n");ssss
	}
	return 0;
}
