/*
Solution for the problem 488 of uva.onlinejudge.org
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
	int i,j,k,l;
	int n_casos;
	int amplitud;
	int frecuencia;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d",&amplitud);
		scanf("%d",&frecuencia);
		for(j=0;j<frecuencia;j++){
			for(k=1;k<=amplitud;k++){
				for(l=0;l<k;l++){
					printf("%d",k);
				}
				printf("\n");
			}
			for(k=amplitud-1;k>0;k--){
				for(l=0;l<k;l++){
					printf("%d",k);
				}
				printf("\n");
			}
			if(j<(frecuencia-1)){
				printf("\n");
			}
		}
		if(i<(n_casos-1)){
			printf("\n");
		}
	}
	return 0;
}