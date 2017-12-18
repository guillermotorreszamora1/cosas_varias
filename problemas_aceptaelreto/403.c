/*

Solution for the problem 403 of aceptaelreto.com
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
int main

(){


	double i,n_casos;
	double max_area;
	double area;
	double area_c;
	double n_campos;
	double min_area;
	max_area=10800;
	min_area=4050;
	scanf("%lf",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%lf",&area);
		scanf("%lf",&n_campos);
		area_c = area/n_campos;
		if(min_area<=area_c&&max_area>=area_c){
			printf("SI\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}

