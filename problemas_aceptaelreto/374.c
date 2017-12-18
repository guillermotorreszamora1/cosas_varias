/*

Solution for the problem 374 of aceptaelreto.com
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
#include<limits.h>
#include<stdio.h>

int main(){
	int i;
	int n_casos;
	long long int max;
	long long int min;
	int n_max;
	int n_min;
	long long int numero;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		max = LLONG_MIN;
		min = LLONG_MAX;
		n_max=0;
		n_min=0;
		while(1){
			scanf("%llu",&numero);
			if(numero==0){
				break;
			}
			if(numero>max){
				max = numero;
				n_max = 0;	
			}
			if(numero==max){
				n_max++;
			}
			if(numero<min){
				min = numero;
				n_min = 0;
			}
			if(numero==min){
				n_min++;
			}
		}
		printf("%llu %d %llu %d\n",min,n_min,max,n_max);
	}
	return 0;
}

