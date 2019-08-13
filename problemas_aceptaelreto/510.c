/*

Solution for the problem 510 of aceptaelreto.com
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
#include<stdlib.h>
int cmp_int(const void* a1,const void* b1){
	int a,b;
	a = *(int*)a1;
	b = *(int*)b1;
	return (a-b);
}
int cmp_int_rev(const void* a1,const void* b1){
	return -cmp_int(a1,b1);
}
int main(){
	int tallas[1000];
	int tallas_pos[1000];
	int tallas_neg[1000];
	int i,j,k;
	int tamano;
	int talla;
	while(1){
		scanf("%d",&tamano);
		if(tamano==0){
			return 0;
		}
		for(i=0,j=0,k=0;i<tamano;i++){
			scanf("%d",&talla);
			tallas[i]=talla;
			if(talla>0){
				tallas_pos[j++]=talla;
			}else{
				tallas_neg[k++]=talla;
			}
		}
		qsort(tallas_pos,j,sizeof(int),cmp_int);
		qsort(tallas_neg,k,sizeof(int),cmp_int_rev);
		for(i=0,j=0,k=0;i<tamano;i++){
			if(tallas[i]>0){
				printf("%d",tallas_pos[j++]);
			}else{
				printf("%d",tallas_neg[k++]);
			}
			if(i<(tamano-1)){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}
