/*

Solution for the problem 171 of aceptaelreto.com
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
	int n_montanas;
	int maxima_altura;
	int n_abadias;
	int i;
	int montanas[100000];
	while(1){
		scanf("%d",&n_montanas);
		if(n_montanas==0){
			return 0;
		}
		for(i=0;i<n_montanas;i++){
			scanf("%d",&montanas[i]);
		}
		maxima_altura=0;
		n_abadias=0;
		for(i=n_montanas-1;i>=0;i--){
			if(montanas[i]>maxima_altura){
				n_abadias++;
				maxima_altura = montanas[i];
			}
		}
		printf("%d\n",n_abadias);
	}
}
