/*

Solution for the problem 114 of aceptaelreto.com
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
	int a;
	int b;
	int i;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b);
		if(b==0||b==1){
			printf("1\n");
		}else if(b==2){
			printf("2\n");
		}
		else if(b==3){
			printf("6\n");
		}
		else if(b==4){
			printf("4\n");
		}else{
			printf("0\n");
		}
	}
	return 0;
}

