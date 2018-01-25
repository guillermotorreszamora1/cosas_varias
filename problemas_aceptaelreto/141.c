/*

Solution for the problem 141 of aceptaelreto.com
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
#include<string.h>
char pila[10000];
int main(){
	char caracter;
	int pila_size;
	int stack_error;
	while(1){
		pila_size=0;
		stack_error=0;
		while(1){
			if(scanf("%c",&caracter)==EOF){
				return 0;
			}
			if(caracter=='('||caracter=='{'||caracter=='['){
				pila[pila_size]= caracter;
				pila_size++;
			}
			if(caracter==')'){
				if(pila_size==0){
					stack_error=1;
				}else if(pila[pila_size-1]=='('){
					pila_size--;
				}else{
					stack_error=1;
				}
			}
			if(caracter=='}'){
				if(pila_size==0){
					stack_error=1;
				}else if(pila[pila_size-1]=='{'){
					pila_size--;
				}else{
					stack_error=1;
				}
			}
			if(caracter==']'){
				if(pila_size==0){
					stack_error=1;
				}else if(pila[pila_size-1]=='['){
					pila_size--;
				}else{
					stack_error=1;
				}
			}
			if(caracter=='\n'){
				break;
			}
		}	
		if(pila_size==0&&stack_error==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
