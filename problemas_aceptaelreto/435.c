/*

Solution for the problem 435 of aceptaelreto.com
    Copyright (C) 2017,2018 Guillermo Torres Zamora

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
int main(){
	int i;
	int len_cadena;
	int digitos[10];
	char cadena[1001];
	int flag;
	int frecuencia;
	while(scanf("%s",cadena)!=EOF){
		len_cadena = strlen(cadena);
		for(i=0;i<10;i++){
			digitos[i]=0;
		}
		for(i=0;i<len_cadena;i++){
			digitos[cadena[i]-'0']++;
		}
		flag=1;
		frecuencia = digitos[0];
		for(i=0;i<10;i++){
			if(digitos[i]!=frecuencia){
				flag=0;
			}
		}
		if(flag==0){
			printf("no subnormal\n");
		}else{
			printf("subnormal\n");
		}
	}
	return 0;
}
