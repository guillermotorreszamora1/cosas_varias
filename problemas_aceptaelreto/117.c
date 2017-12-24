/*

Solution for the problem 117 of aceptaelreto.com
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
	int n_casos;
	char soy[4];
	char nombre[101];
	scanf("%d",&n_casos);
	for(;n_casos>0;n_casos--){
		scanf("%s",soy);
		scanf("%s",nombre);
		printf("Hola, %s.\n",nombre);
	}
	return 0;
}
