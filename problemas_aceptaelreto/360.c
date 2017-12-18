/*

Solution for the problem 360 of aceptaelreto.com
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
	int i,contador,n_i,n_l,n,casos,bajon;
	scanf("%d",&casos);
	for(i=0;i<casos;i++){
		scanf("%d",&n_i);
		scanf("%d",&n_l);
		n = n_i;
		contador=0;
		while(1){
			scanf("%d",&bajon);
			if(bajon==-1){
				break;
			}else{
				n -= bajon;
			}
			if(n<n_l){
				contador++;
				n = n_i;
			}
		}
		printf("%d\n",contador);
	}
	return 0;
}

