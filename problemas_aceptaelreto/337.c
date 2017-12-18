/*

Solution for the problem 337 of aceptaelreto.com
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
	int sup[6];
	int inf[6];
	int sum[6];
	int i,j,casos;
	int suma;
	int encaje;
	scanf("%d",&casos);
	for(i=0;i<casos;i++){
		for(j=0;j<6;j++){
			scanf("%d",&sup[j]);
		}
		for(j=0;j<6;j++){
			scanf("%d",&inf[j]);
			sum[j]=sup[j]+inf[j];
		}
		suma = sup[0]+inf[0];
		encaje=1;
		for(j=1;j<6;j++){

			if(sum[j]!=suma){


				encaje=0;
			}
		}
		if(encaje==1){
			printf("SI\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}

