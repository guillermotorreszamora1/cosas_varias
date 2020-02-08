/*

Solution for the problem 541 of aceptaelreto.com
    Copyright (C) 2020 Guillermo Torres Zamora

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
int mcd(int a,int b){
	int c;
	if(a<b){
		c = a;
		a = b;
		b = c;
	}
	if(a==0&b==0){
		return 0;
	}
	if(b==0){
		return a;
	}
	while(1){
		c = a%b;
		if(c==0){
			break;
		}
		a = b;
		b = c;
	}
	return b;
}
int main(){
	int mcd3;
	int a,b,c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			return 0;
		}
		mcd3 = mcd(a,mcd(b,c));
		printf("%d\n",(a+b+c)/mcd3);
	}
	return 0;
}
