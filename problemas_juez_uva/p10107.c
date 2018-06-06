/*
Solution for the problem 10107 of uva.onlinejudge.org
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
#include<stdlib.h>
void isort(int* numeros,int size);
int compare(const void* va,const void* vb){
	int* ia;
	int* ib;
	ia = (int*) va;
	ib = (int*) vb;
	return ((*ia)-(*ib));
}
int main(){
	int size=0;
	int numeros[10000];
	while(scanf("%d",numeros+size)!=EOF){
		size++;
		isort(numeros,size);
		if(size%2)/*tamano impar*/{
			printf("%d\n",numeros[size/2]);
		}else{
			printf("%d\n",((numeros[size/2])+(numeros[(size/2)-1]))/2);
		}
	}
	return 0;
}
void isort(int* numeros,int size){
	int i;
	int numero;
	numero = numeros[size-1];
	for(i=size-2;i>=0;i--){
		if(numeros[i]<numero){
			break;
		}
		numeros[i+1]=numeros[i];
	}
	numeros[i+1]=numero;
}
