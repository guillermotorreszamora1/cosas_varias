/*

Solution for the problem 439 of aceptaelreto.com
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
	int i;
	int n_casos;
	char caracter1;
	char caracter2;
	int dato1;
	int dato2;
	char char_aux;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%c",&char_aux);
		scanf("%c",&caracter1);
		scanf("%c",&char_aux);
		scanf("%d",&dato1);
		scanf("%c",&char_aux);
		scanf("%c",&caracter2);
		scanf("%c",&char_aux);
		scanf("%d",&dato2);
		if(caracter1=='D'&&caracter2=='T'){
			printf("V=%d\n",dato1/dato2);
		}else if(caracter1=='D'&&caracter2=='V'){
			printf("T=%d\n",dato1/dato2);
		}else if(caracter1=='T'&&caracter2=='D'){
			printf("V=%d\n",dato2/dato1);
		}else if(caracter1=='T'&&caracter2=='V'){
			printf("D=%d\n",dato1*dato2);
		}else if(caracter1=='V'&&caracter2=='D'){
			printf("T=%d\n",dato2/dato1);
		}else if(caracter1=='V'&&caracter2=='T'){
			printf("D=%d\n",dato1*dato2);
		}
	}
	return 0;
}
