/*
Solution for the problem 401 of uva.onlinejudge.org
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
int fmirror;
void reverse(char* cadena_original,char* cadena_modificada){
	int i;
	int tamano;
	tamano = strlen(cadena_original);
	for(i=0;i<tamano;i++){
		cadena_modificada[i] = cadena_original[tamano-i-1];
	}
	cadena_modificada[i]='\0';
}
void mirror(char* cadena_original,char* cadena_modificada){
	int i;
	int tamano;
	tamano = strlen(cadena_original);
	fmirror = 1;
	for(i=0;i<tamano;i++){
		if((cadena_original[i]=='A')
			|| (cadena_original[i]=='H')
			|| (cadena_original[i]=='I')
			|| (cadena_original[i]=='M')
			|| (cadena_original[i]=='O')
			|| (cadena_original[i]=='T')
			|| (cadena_original[i]=='U')
			|| (cadena_original[i]=='V')
			|| (cadena_original[i]=='W')
			|| (cadena_original[i]=='X')
			|| (cadena_original[i]=='Y')
			|| (cadena_original[i]=='1')
			|| (cadena_original[i]=='8')
			){
			cadena_modificada[i]=cadena_original[i];
		}else if(cadena_original[i]=='E'){
			cadena_modificada[i]='3';
		}else if(cadena_original[i]=='J'){
			cadena_modificada[i]='L';
		}else if(cadena_original[i]=='L'){
			cadena_modificada[i]='J';
		}else if(cadena_original[i]=='S'){
			cadena_modificada[i]='2';
		}else if(cadena_original[i]=='Z'){
			cadena_modificada[i]='5';
		}else if(cadena_original[i]=='2'){
			cadena_modificada[i]='S';
		}else if(cadena_original[i]=='3'){
			cadena_modificada[i]='E';
		}else if(cadena_original[i]=='5'){
			cadena_modificada[i]='Z';
		}else{
			cadena_modificada[i]=cadena_original[i];
			fmirror = 0;
		}
	}
	cadena_modificada[i]='\0';
}
int main(){
	char cadena1[32];
	char cadena2[32];
	char cadena3[32];
	int fpal;/*flag palindrome*/
	int fmir;/*flag mirror;*/
	while(scanf("%s",cadena1)!=EOF){
		reverse(cadena1,cadena2);
		mirror(cadena2,cadena3);
		if(strcmp(cadena1,cadena2)==0){
			fpal = 1;
		}else{
			fpal = 0;
		}
		if(strcmp(cadena1,cadena3)==0&&fmirror){
			fmir = 1;
		}else{
			fmir = 0;
		}
		printf("%s -- is",cadena1);
		if(fpal==0&&fmir==0){
			printf(" not a palindrome.\n");
		}
		if(fpal==1&&fmir==0){
			printf(" a regular palindrome.\n");
		}
		if(fpal==0&&fmir==1){
			printf(" a mirrored string.\n");
		}
		if(fpal==1&&fmir==1){
			printf(" a mirrored palindrome.\n");
		}
		printf("\n");
	}
}