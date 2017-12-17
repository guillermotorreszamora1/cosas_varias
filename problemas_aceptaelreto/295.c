/*

Solution for the problem 295 of aceptaelreto.com
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
	unsigned long x,n;
	unsigned long r[40];
	unsigned long exp[40];
	unsigned long r_n=0;
	unsigned long sum=0;
	unsigned long dif,i;
	unsigned long pot=1;
	unsigned long resultado=1;
	exp[0]=1;
	exp[1]=2;
	for(i=2;i<=32;i++){
		exp[i] = exp[i-1]*2;
	}
	while(1){
		scanf("%ld",&x);
		scanf("%ld",&n);
		r_n=0;
		sum=0;
		pot=1;
		resultado=1;
		sum=0;
		if(x==0&&n==0){
			break;
		}
		x = x%31543;
		for(;pot<=n;){
			if(r_n>0){
				r[r_n] = (r[r_n-1]*r[r_n-1])%31543;
			}else{
				r[0] = x;
			}
			pot = pot*2;
			r_n++;
		}
		r_n--;
		for(i=0;i<r_n;i++){
		}
		dif = n-sum;
		for(;dif>0;){
			if(dif>=exp[r_n]){
				resultado = resultado*r[r_n];
				resultado = resultado % 31543;
				sum += exp[r_n];
				dif = n - sum;
			}else{
				r_n--;
			}
		}
		printf("%ld\n",resultado);
	}
}
