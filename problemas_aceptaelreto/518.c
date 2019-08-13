/*

Solution for the problem 518 of aceptaelreto.com
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
int month_length[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int month;
	int day;
	while(1){
		scanf("%d.%d",&month,&day);
		if(month>0&&month<=12&&day>0&&day<=month_length[month-1]){
			printf("SI\n");
		}else if(month==0&&day==0){
			return 0;
		}else{
			printf("NO\n");
		}
	}
}
