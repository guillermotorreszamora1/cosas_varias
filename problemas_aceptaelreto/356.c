/*

Solution for the problem 356 of aceptaelreto.com
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

int 

main

(){
	long long int a,b,c,n,i,temp;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a);
		scanf("%lld",&b);
		scanf("%lld",&c);
		if(a>b){
			temp =a ;
			a =b ;
			b= temp;
		}
		if(b>c){
			temp = b;
			b = c;
			c = temp;
		}
		if(a>b){
			temp = a;
			a = b;
			b = temp;
		}
		printf("%lld %lld %lld\n",a,b,c);
	}
	return 0;
}

