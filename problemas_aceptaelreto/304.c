/*

Solution for the problem 304 of aceptaelreto.com
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
	int i,casos,a,b,c,d;
	scanf("%d",&casos);
	for(i=0;i<casos;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		if(b==0){
			printf("DIV0\n");
		}else{
			c = a/b;
			d = a%b;
			if(d<0&&b>0){
				d +=b;
				c--;
			}else if(d<0&&b<0){
				d -= b;
				c++;
			}
			printf("%d %d\n",c,d);
		}
	}
	return 0;
}
