/*

Solution for the problem 426 of aceptaelreto.com
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
	int num_ninos;
	int act;
	int acum;
	while(1){
		num_ninos=0;
		act=0;
		acum=0;
		while(1){
			scanf("%d",&act);
			acum += act;
			if(acum==0){
				return 0;
			}
			if(act==0){
				if(acum%num_ninos==0){
					printf("REPARTO JUSTO\n");
				}else{
					printf("IMPOSIBLE\n");
				}
				break;
			}
			num_ninos++;
		}
	}
}
