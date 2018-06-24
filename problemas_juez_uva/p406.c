/*
Solution for the problem 406 of uva.onlinejudge.org
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
#include<math.h>
int isprime(long long int n){
	long long int i;
	long long int raiz;
	raiz = sqrt(n);
	for(i=2;i<=raiz;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	long long int i;
	int limite;
	int longitud_lista;
	int C;
	int inicio;
	int fin;
	int tabla[200];
	long long int n_primos=0;
	for(i=1;i<1100;i++){
		if(isprime(i)){
			tabla[n_primos]=i;
			n_primos++;
		}
	}
	while(scanf("%d %d",&limite,&C)!=EOF){
		for(longitud_lista=0;tabla[longitud_lista]<=limite;longitud_lista++);
		if(longitud_lista%2==0){
			inicio = longitud_lista/2 -C;
			fin = longitud_lista/2 +C;
		}else{
			inicio = longitud_lista/2 -C +1;
			fin = longitud_lista/2 +C;
		}
		if(inicio<0){
			inicio = 0;
			fin = longitud_lista;
		}
		printf("%d %d:",limite,C);
		for(i=inicio;i<fin;i++){
			printf(" %d",tabla[i]);
		}
		printf("\n\n");
	}
	return 0;
}