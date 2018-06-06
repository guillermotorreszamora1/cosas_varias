/*
Solution for the problem 100 of uva.onlinejudge.org
    Copyright (C) 2018 Guillermo Torres Zamora
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
long longitud_serie(long a){
	long contador=0;
	while(1){
		contador++;
		if(a==1){
			return contador;
		}
		if(a%2){
			a = 3*a+1;
		}else{
			a = a/2;
		}
	}
}
int main(){
	long a,b,max,i,longitud;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		max=0;
		if(a<b){
			for(i=a;i<=b;i++){
				longitud = longitud_serie(i);
				if(longitud>max){
					max = longitud;
				}
			}
		}else{
			for(i=b;i<=a;i++){
				longitud = longitud_serie(i);
				if(longitud>max){
					max = longitud;
				}
			}
		}
		printf("%ld %ld %ld\n",a,b,max);
	}
	return 0;
}
