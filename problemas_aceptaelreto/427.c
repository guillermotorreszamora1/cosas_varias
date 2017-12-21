/*

Solution for the problem 427 of aceptaelreto.com
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
#include<string.h>
#include<stdio.h>
int main(){
	int i;
	int numero;
	char personaje[101];
	char relacion[101];
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		scanf("%s",personaje);
		scanf("%s",relacion);
		if(strcmp(personaje,"Luke")==0&&strcmp(relacion,"padre")==0){
			printf("TOP SECRET\n");
		}else{
			printf("%s, yo soy tu %s\n",personaje,relacion);
		}
	}
	return 0;
}
