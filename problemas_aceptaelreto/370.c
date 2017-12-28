/*

Solution for the problem 370 of aceptaelreto.com
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
	int l1,l2;
	int i,casos,temp;
	scanf("%d",&casos);
	for(i=0;i<casos;i++){
		scanf("%d-%d",&l1,&l2);
		if(l1>l2){
			temp =l1;
			l1=l2;
			l2=temp;
		}
		if((!(l1%2))&&(l1==(l2-1))){
			printf("SI\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}

