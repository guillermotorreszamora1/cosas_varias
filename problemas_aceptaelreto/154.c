/*

Solution for the problem 154 of aceptaelreto.com
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
#include<string.h>
char siguiente[27]="BCDFFGHJJKLMNPQQRSTVVWXYZB";
int main(){
	int numero;
	char cadena[4];
	while(1){
		if(scanf("%d",&numero)==EOF){
			return 0;
		}
		if(scanf("%s",cadena)==EOF){
			return 0;
		}
		if(numero==9999){
			numero=0;
			if(cadena[2]=='Z'){
				cadena[2]='B';
				if(cadena[1]=='Z'){
					if(cadena[0]=='Z'){
						return 0;
					}
					cadena[1]= siguiente[cadena[1]-'A'];
					cadena[0]= siguiente[cadena[0]-'A'];
				}else{
					cadena[1]= siguiente[cadena[1]-'A'];
				}
			}else{
				cadena[2]= siguiente[cadena[2]-'A'];
			}
		}else{
			numero++;
		}
		if(numero<10){
			printf("000%d %s\n",numero,cadena);
		}else if(numero<100){
			printf("00%d %s\n",numero,cadena);
		}else if(numero<1000){
			printf("0%d %s\n",numero,cadena);
		}else{
			printf("%d %s\n",numero,cadena);
		}
	}
}
