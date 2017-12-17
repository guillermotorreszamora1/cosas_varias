/*

Solution for the problem 242 of aceptaelreto.com
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
#include<stdlib.h>
#include<string.h>
int main(){
	long long paises;
	long long i;
	long estudiantes[2];
	long long sumatorio_estudiantes;
	long long sumatorio_combinaciones;
	while(1){
		scanf("%lld",&paises);
		if(paises==0){
			return 0;
		}
		//estudiantes = (long int*)malloc(paises*sizeof(long int));
		sumatorio_estudiantes=0;
		sumatorio_combinaciones=0;
		for(i=0;i<paises;i++){
			scanf("%ld",estudiantes+1);
			if(i>0){
				sumatorio_estudiantes += estudiantes[0];
				sumatorio_combinaciones += estudiantes[1]*sumatorio_estudiantes;
			}
			estudiantes[0] = estudiantes[1];
		}
		printf("%lld\n",sumatorio_combinaciones);
		//free(estudiantes);
	}
	return 0;
}
