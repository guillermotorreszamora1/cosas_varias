/*

Solution for the problem 503 of aceptaelreto.com
    Copyright (C) 2019 Guillermo Torres Zamora

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
	int probabilidad[41];
	int probabilidad_maxima;
	int n_jugadas;
	int i,j;
	int dado1,dado2;
	int ya_hay_uno;
	scanf("%d",&n_jugadas);
	while(n_jugadas--){
		for(i=0;i<=40;i++){
			probabilidad[i]=0;
		}
		scanf("%d %d",&dado1,&dado2);
		for(i=1;i<=dado1;i++){
			for(j=1;j<=dado2;j++){
				probabilidad[i+j]++;
			}
		}
		probabilidad_maxima = 0;
		for(i=2;i<=40;i++){
			if(probabilidad[i]>probabilidad_maxima){
				probabilidad_maxima = probabilidad[i];
			}
		}
		ya_hay_uno = 0;
		for(i=2;i<=40;i++){
			if(probabilidad[i]==probabilidad_maxima){
				if(ya_hay_uno){
					printf(" %d",i);
				}else{
					printf("%d",i);
					ya_hay_uno=1;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
