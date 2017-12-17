/*

Solution for the problem 216 of aceptaelreto.com
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
	long int i,casos,tiempo,horas,minutos,segundos;
	scanf("%ld",&casos);
	for(i=0;i<casos;i++){
		scanf("%ld",&tiempo);
		horas = tiempo/3600;
		minutos = (tiempo%3600)/60;
		segundos = tiempo%60;
		printf("%.2ld:%.2ld:%.2ld\n",horas,minutos,segundos);
	}
	return 0;
}
