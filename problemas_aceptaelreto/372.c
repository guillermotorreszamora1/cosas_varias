/*

Solution for the problem 372 of aceptaelreto.com
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
#include<ctype.h>
int main(){
	char original[50];

	char copia[50];


	int tamano;
	int mayus;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",original);
		mayus = isupper(original[0]);
		original[0] = tolower(original[0]);
		tamano = strlen(original);
		for(j=0;j<tamano;j++){
			copia[j]=original[tamano-j-1];
		}
		copia[j]='\0';
		if(mayus){
			copia[0] = toupper(copia[0]);
		}
		printf("%s\n",copia);
	}
	return 0;
}

