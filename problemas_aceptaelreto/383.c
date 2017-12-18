/*

Solution for the problem 383 of aceptaelreto.com
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
	long *paginas;
	long casos;
	long n_pag;
	long i

,

j,k,l;
	long max;
	long smax;
	long jmax=0;
	paginas = (long *)malloc(300000*sizeof(long));
	scanf("%ld",&casos);
	for(i=0;i<casos;i++){
		scanf("%ld",&n_pag);
		for(j=0;j<n_pag;j++){
			scanf("%ld",&paginas[j]);
		}
		max = paginas[0]-paginas[1];
		for(j=0;j<(n_pag-1);j++){
			if(paginas[j]>paginas[jmax]||j==0){
				for(k=j+1;k<n_pag;k++){
					smax = paginas[j] -paginas[k];
					jmax = j;
					if(smax>max){
						max = smax;
					}
				}
			}
		}
		printf("%ld\n",max);
	}
	free(paginas);
}

