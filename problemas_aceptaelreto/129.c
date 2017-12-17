/*

Solution for the problem 129 of aceptaelreto.com
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
int main(){
	char simbolos[11][7]={{1,1,1,1,1,1,0}/*0*/,{0,1,1,0,0,0,0}/*1*/,{1,0,1,1,0,1,1}/*2*/,{1,1,1,1,0,0,1}/*3*/,{0,1,1,0,1,0,1}/*4*/
	,{1,1,0,1,1,0,1}/*5*/,{1,1,0,1,1,1,1}/*6*/,{0,1,1,1,0,0,0}/*7*/,{1,1,1,1,1,1,1}/*8*/,{1,1,1,1,1,0,1}/*9*/,{0,0,0,0,0,0,0}};
	char cambios[11][11];
	int acumulado;
	int datos[2];
	int i,j,k;
	int a;
	for(i=0;i<11;i++){
		for(j=0;j<11;j++){
			cambios[i][j]=0;
			for(k=0;k<7;k++){
				if(simbolos[i][k]!=simbolos[j][k]){
					cambios[i][j]++;
				}
			}
		}
	}
	while(1){
		datos[0]=10;
		datos[1]=10;
		a=1;
		for(i=0,acumulado=0;a;i++){
			scanf("%d",&datos[0]);
			if(datos[0]==-1&&i!=0){
				datos[0]=10;
				a=0;
			}
			if(datos[0]==-1&&i==0){
				return 0;
			}
			//printf("cambio:%d , %d , %d\n",cambios[datos[1]][datos[0]],datos[1],datos[0]);
			acumulado += cambios[datos[1]][datos[0]];
			datos[1] = datos[0];
		}
		i--;
		printf("%d\n",acumulado*i);
		
	}
	return 0;
}
