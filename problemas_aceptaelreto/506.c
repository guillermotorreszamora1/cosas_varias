/*

Solution for the problem 506 of aceptaelreto.com
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
	int n_casos;
	int tension_minima;
	int tension_maxima;
	scanf("%d",&n_casos);
	while(n_casos--){
		scanf("%d / %d",&tension_maxima,&tension_minima);
		if(tension_maxima>=tension_minima){
			printf("BIEN\n");
		}else{
			printf("MAL\n");
		}
	}
	return 0;
}
