/*
Solution for the problem 333 of uva.onlinejudge.org
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
char cadena[20];
char cadena_interna[100];
/*0 cadena correcta 1 error 2 fin*/
int input(){
	int i,j;
	int tamano;
	char dato;
	int flag=0;
	for(i=0;i<100;i++){
		if(scanf("%c",&dato)==EOF){
			return 2;
		}
		if(dato=='\n'){
			cadena_interna[i]='\0';
			break;
		}
		cadena_interna[i] = dato;
	}
	tamano = i;
	j=0;
	for(i=0;i<tamano;i++){
		if((cadena_interna[i]>='0'&&cadena_interna[i]<='9')
			||(cadena_interna[i]=='\0')){
			cadena[j]=cadena_interna[i];
			j++;
		}else if((cadena_interna[i]=='X')&&j==9){
			cadena[j]= cadena_interna[i];
			j++;
		}else if(cadena_interna[i]=='-'||cadena_interna[i]==' '){
		}else{
			flag = 1;
		}
	}
	if(j==10){
		return flag;
	}else{
		return 1;
	}
}
int checksum(){/*0 correcto >0 incorrecto*/
	int acumuladores[10];
	int acumulador,i;
	if(cadena[0]=='X'){
		acumuladores[0]=10;
	}else{
		acumuladores[0]= cadena[0]-'0';
	}
	for(i=1;i<10;i++){
		if(cadena[i]=='X'){
			acumuladores[i]=10 + acumuladores[i-1];
		}else{
			acumuladores[i] = cadena[i] - '0' + acumuladores[i-1];
		}
	}
	acumulador = 0;
	for(i=0;i<10;i++){
		acumulador += acumuladores[i];
	}
	return acumulador%11;
}
int clean(){
	int i,tamano;
	tamano = strlen(cadena_interna);
	for(i=tamano-1;i>=0;i--){
		if(cadena_interna[i]==' '){
			cadena_interna[i]='\0';
		}else{
			break;
		}
	}
}
int main(){
	int status;
	int i;
	while((status=input())!=2){
			i=0;
			while(cadena_interna[i]==' '){
				i++;
			}
			clean();
			printf("%s",cadena_interna+i);
		if(status==1){
			printf(" is incorrect.\n");
		}else{
			status = checksum();
			if(status==0){
				printf(" is correct.\n");
			}else{
				printf(" is incorrect.\n");
			}
		}
	}
	return 0;
}