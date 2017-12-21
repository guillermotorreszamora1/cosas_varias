/*

Solution for the problem 363 of aceptaelreto.com
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
	int c_e;
	int n_e;
	int c_c;
	int c_c_acum;
	int n_c;
	int i;
	while(1){
		scanf("%d",&c_e);
		if(c_e==0){
			return 0;
		}
		scanf("%d",&n_c);
		if(n_c!=0){
			c_c_acum=0;
			for(i=0;i<n_c;i++){
				scanf("%d",&c_c);
				c_c_acum  += c_c;
			}
			n_e = c_c_acum/c_e;
			if(c_c_acum%c_e!=0){
				n_e++;
			}
			printf("%d\n",n_e);
		}else{
			printf("0\n");
		}
	}
}
