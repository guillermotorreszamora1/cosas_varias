/*

Solution for the problem 206 of aceptaelreto.com
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
#include<math.h>
int main(){
	double casos,i,j,low,distancia,longitud_a,longitud_b;
	scanf("%lf",&casos);
	for(i=0;i<casos;i++){
		scanf("%lf",&distancia);
		low = 2*distancia;
		for(longitud_a=0;longitud_a<distancia;longitud_a++){
			longitud_b = sqrt(distancia*distancia-longitud_a*longitud_a);
			if(modf(longitud_b,&j)==0){
				low = longitud_b+longitud_a;
			}
		}
		printf("%d\n",(int)low);
	}
	return 0;
}
