/*

Solution for the problem 513 of aceptaelreto.com
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
int main(){
	int media;
	int acumulado;
	int n_datos;
	int i;
	int actual;
	while(scanf("%d",&n_datos)!=EOF){
		acumulado=0;
		for(i=1;i<=n_datos;i++){
			scanf("%d",&media);
			actual = media*i-acumulado;
			acumulado += actual;
			printf("%d",actual);
			if(i<n_datos){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}
