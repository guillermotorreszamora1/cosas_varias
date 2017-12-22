/*

Solution for the problem 249 of aceptaelreto.com
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
int main(){
	char sacos[20001];/*puede resultar mas rapido un calloc, que resetear constantemente el array*/
	int i,j;
	int n_sacos;
	int n_burros;
	int n_burros_max;
	int n_casos;
	int peso;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		for(j=0;j<20001;j++){
			sacos[j]=0;
		}
		scanf("%d",&n_burros_max);
		scanf("%d",&n_sacos);
		n_burros=0;
		for(j=0;j<n_sacos;j++){
			scanf("%d",&peso);
			if(sacos[peso]==1){
				n_burros++;
				sacos[peso]=0;
			}else{
				sacos[peso]=1;
			}
		}
		if(n_burros<n_burros_max){
			printf("%d\n",n_burros);
		}else{
			printf("%d\n",n_burros_max);
		}
		
	}
	return 0;
}
