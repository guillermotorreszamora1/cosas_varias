/*

Solution for the problem 434 of aceptaelreto.com
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
	int i;
	int n_casos;
	int palomas;
	int sitios;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d",&palomas);
		scanf("%d",&sitios);
		if(palomas>sitios){
			printf("PRINCIPIO\n");
		}else{
			printf("ROMANCE\n");
		}
	}
	return 0;
}
