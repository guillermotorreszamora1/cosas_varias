/*

Solution for the problem 156 of aceptaelreto.com
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
	int ant;
	int act;
	int total;
	while(1){
		scanf("%d",&ant);
		if(ant<0){
			return 0;
		}
		total = 0;
		while(1){
			scanf("%d",&act);
			if(act==-1){
				printf("%d\n",total);
				break;
			}
			if(act<ant){
				total = total + ant - act;
			}else{
				total = total - ant + act;
			}
			ant = act;
		}
	}
}
