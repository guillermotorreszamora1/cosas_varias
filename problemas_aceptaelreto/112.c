/*

Solution for the problem 112 of aceptaelreto.com
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
	int velocidad_maxima;
	float velocidad;
	int tiempo;
	int distancia;
	while(1){
		scanf("%d",&distancia);
		scanf("%d",&velocidad_maxima);
		scanf("%d",&tiempo);
		if(velocidad_maxima==0&&tiempo==0&&distancia==0){
			break;
		}
		if(velocidad_maxima<=0||tiempo<=0||distancia<=0){
			printf("ERROR\n");
		}else{
			velocidad = (distancia*3600.0)/(tiempo*1000);
			if(velocidad<velocidad_maxima){
				printf("OK\n");
			}else if(velocidad<(velocidad_maxima*1.20)){
				printf("MULTA\n");
			}else{
				printf("PUNTOS\n");
			}
		}
	}
	return 0;
}
