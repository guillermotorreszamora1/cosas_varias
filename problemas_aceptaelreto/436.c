/*

Solution for the problem 436 of aceptaelreto.com
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
#include<stdlib.h>
int main(){
	long long valores[64];
	int papel;
	int edificio;
	long long edificio_l;
	long long relacion;
	long long respuesta;
	int i;
	valores[0]=1;
	for(i=1;i<64;i++){
		valores[i]=valores[i-1]*2;
	}
	while(scanf("%d",&papel)!=EOF){
		scanf("%d",&edificio);
		edificio_l = edificio*1000000LL;
		relacion = edificio_l/papel;
		for(i=0;i<64;i++){
			if(valores[i]>relacion){
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
