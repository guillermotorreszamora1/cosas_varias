/*

Solution for the problem 300 of aceptaelreto.com
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
int main(){
	int casos,j,k;
	char cadena[31];
	char a=0;

	char e=0;


	char i=0;
	char o=0;
	char u=0;
	int contador=0;
	int longitud;
	scanf("%d",&casos);
	for(j=0;j<casos;j++){
		scanf("%s",cadena);
		a=0;
		e=0;
		i=0;
		o=0;
		u=0;
		contador=0;
		for(k=0;cadena[k]!='\0';k++){
			if(cadena[k]=='e'){
				e=1;
			}else if(cadena[k]=='a'){
				a=1;
			}else if(cadena[k]=='o'){
				o=1;
			}else if(cadena[k]=='i'){
				i=1;
			}else if(cadena[k]=='u'){
				u=1;
			}
		}
		if(a==0||e==0||i==0||o==0||u==0){
			printf("NO\n");
		}else{
			printf("SI\n");
		}
	}
	return 0;
}

