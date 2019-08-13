/*

Solution for the problem 520 of aceptaelreto.com
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
	int n_cubiletes;
	int cubilete_actual;
	int cubilete_a;
	int cubilete_b;
	while(1){
		scanf("%d %d",&n_cubiletes,&cubilete_actual);
		if(n_cubiletes==0&&cubilete_actual==0){
			break;
		}
		while(1){
			scanf("%d %d",&cubilete_a,&cubilete_b);
			if(cubilete_a==0&&cubilete_b==0){
				break;
			}
			if(cubilete_a==cubilete_actual){
				cubilete_actual=cubilete_b;
			}else if(cubilete_b==cubilete_actual){
				cubilete_actual=cubilete_a;
			}
		}
		printf("%d\n",cubilete_actual);
	}
	return 0;
}
