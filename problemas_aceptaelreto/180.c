/*

Solution for the problem 180 of aceptaelreto.com
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
#include<stdlib.h>
int cmp(const void* a,const void* b){
	return *((int*)a)-*((int*)b);
}
int main(){
	int i,n_casos,j;
	int triangulo[3],aux,cuadrados[3];
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d",&triangulo[0]);
		scanf("%d",&triangulo[1]);
		scanf("%d",&triangulo[2]);
		qsort(triangulo,3,sizeof(int),cmp);
		if(triangulo[2]>=(triangulo[1]+triangulo[0])){
			printf("IMPOSIBLE\n");
		}else{
			cuadrados[0] = triangulo[0]*triangulo[0];
			cuadrados[1] = triangulo[1]*triangulo[1];
			cuadrados[2] = triangulo[2]*triangulo[2];
			if((cuadrados[0]+cuadrados[1])<cuadrados[2]){
				printf("OBTUSANGULO\n");
			}else if((cuadrados[0]+cuadrados[1])==cuadrados[2]){
				printf("RECTANGULO\n");
			}else{
				printf("ACUTANGULO\n");
			}
		}
	}
	return 0;
}
