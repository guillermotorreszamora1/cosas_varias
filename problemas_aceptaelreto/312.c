/*

Solution for the problem 312 of aceptaelreto.com
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
#include<stdlib.h>

long long mcd(long long a,long long b);
int main(){
	long long n_tramos;
	long long tramo;
	long long resultado;
	long long a=1;
	while(a){
		long long sumtramos=0;
		long long i=0;
		while(1){
			scanf("%lld",&tramo);
			if(tramo!=0){
				if(i==0){
					resultado = tramo;
				}else{
					resultado = mcd(resultado,tramo);
				}
				sumtramos += tramo;
				i++;
			}else{
				break;
			}
		}
		if(i==0)
			a=0;
		if(a){
			resultado = sumtramos / resultado;
			printf("%lld\n",resultado);
		}
	}
	return 0;
}
long long mcd(long long a,long long b){
/*a>b*/long long temp;
	if(a<b){
	temp = a;
	a = b;
	b= temp;
	}
	while(1){
	 	temp=b;
	 	if(b!=0){
	 		b=a%b;
	 	}else{
	 		return 1;
	 	}
	 	a=temp;
	 	if(b==0){
	 		return a;
	 	}
	}
}

