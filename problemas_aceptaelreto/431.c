/*

Solution for the problem 431 of aceptaelreto.com
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
int cmp(const void* a,const void* b){
	int* a_;
	int* b_;
	a_ = (int*) a;
	b_ = (int*) b;
	return *b_ - *a_;
}
int main(){
	int n_familias;
	int n_hijos;
	int influencia;
	int numero;
	int poder;
	int poder_hijo;
	int poder_hijo_max[20];
	int poder_hijo_m;
	int i;
	while(1){
		scanf("%d",&n_familias);
		if(n_familias==0){
			return 0;
		}
		for(i=0;i<n_familias;i++){
			scanf("%d",&n_hijos);
			scanf("%d",&poder);
			poder_hijo_max[i]=0;
			for(;n_hijos>0;n_hijos--){
				scanf("%d",&influencia);
				poder_hijo = poder*influencia;
				if(poder_hijo>poder_hijo_max[i]){
					poder_hijo_max[i] = poder_hijo;
				}
			}
		}
		qsort(poder_hijo_max,n_familias,sizeof(int),cmp);
		for(i=0;i<(n_familias-1);i++){
			printf("%d ",poder_hijo_max[i]);
		}
		if(i<n_familias){
			printf("%d\n",poder_hijo_max[i]);
		}
	}
}
129-1998-Gtz
