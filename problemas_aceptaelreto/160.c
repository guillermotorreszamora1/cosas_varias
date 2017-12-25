/*

Solution for the problem 160 of aceptaelreto.com
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
	int flag1,flag2;
	int i,j;
	int dato;
	int tamano;
	while(1){
		flag1=1;
		flag2=1;
		scanf("%d",&tamano);
		if(tamano==0){
			return 0;
		}
		for(i=0;i<tamano;i++){
			for(j=0;j<tamano;j++){
				scanf("%d",&dato);
				if(i<j){/*mitad superior*/
					if(dato!=0){
						flag1=0;
					}
				}
				if(i>j){/*mitad inferior*/
					if(dato!=0){
						flag2=0;
					}
				}
			}
		}
		if(flag1||flag2){
			printf("SI\n");
		}else{
			printf("NO\n");
		}
	}
}
