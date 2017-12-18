/*

Solution for the problem 381 of aceptaelreto.com
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
#include<math.h>
int mcm(int n,int v[5]);
int main(){
	int n_planetas,i,resultado;
	int periodos[5];
	while(1){
		scanf("%d",&n_planetas);
		if(n_planetas==0){
			break;
		}
		for(i=0;i<n_planetas;i++){
			scanf("%d",&periodos[i]);
		}
		resultado =mcm(n_planetas,periodos);
		printf("%d\n",resultado);
	}
	return 0;
}
int mcm(int n,int v[5]){
	int i,j,k,resultado=1;
	int fac[5][3]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
	int num[5][3]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
	int rfac[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int rnum[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(i=0;i<n;i++){
		for(j=2;v[i]!=1;){
			if(!(v[i]%j)){
				v[i]= v[i] / j;
				for(k=0;;k++){
					if(fac[i][k]==j||fac[i][k]==0){
						//printf("fac:%d:j:%d:\n",fac[i][k],j);
						fac[i][k]=j;
						//printf("2fac:%d:j:%d:\n",fac[i][k],j);
						num[i][k]++;
						break;
					}
				}
				}else{
					j++;
			}
		}
	}
	//
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			//printf(":i:%d:j:%d:num:%d:fac:%d:\n",i,j,num[i][j],fac[i][j]);
		}
	}
	//
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			if(fac[i][j]==0){
				break;
			}
			for(k=0;;k++){
			 	if(rfac[k]==0){
			 		rfac[k]=fac[i][j];
			 		rnum[k]=num[i][j];
			 		break;
		 		}else if(rfac[k]==fac[i][j]){
		 			if(rnum[k]<num[i][j]){
		 			rnum[k]=num[i][j];
		 			}
		 			break;
		 		}
		 	}
		}
	}
	//
	for(i=0;i<15;i++){
		if(rnum[i]!=0){
		 	resultado = resultado*pow(rfac[i],rnum[i]);
		}else{
	 		break;
		}
	}
	return resultado;
}

