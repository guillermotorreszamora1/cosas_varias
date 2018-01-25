/*

Solution for the problem 168 of aceptaelreto.com
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
int main(){
	int tabla[10001];
	int tamano;
	int numero;
	int i;
	while(1){
		scanf("%d",&tamano);
		if(tamano==0){
			break;
		}
		for(i=1;i<=tamano;i++){
			tabla[i]=0;
		}
		for(i=1;i<tamano;i++){
			scanf("%d",&numero);
			tabla[numero]=1;
		}
		for(i=1;i<=tamano;i++){
			if(tabla[i]==0){
				printf("%d\n",i);
				break;
			}	
		}
	}
	return 0;
}
