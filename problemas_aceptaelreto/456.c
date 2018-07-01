/*
Solution for the problem 456 of aceptaelreto.com
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
int main(){
	int x,y,tamano,cuadritos_necesitas,tabletas,i,n_casos;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d %d %d",&x,&y,&cuadritos_necesitas);
		tamano = x*y;
		tabletas = cuadritos_necesitas/tamano;
		if(cuadritos_necesitas%tamano!=0){
			tabletas++;
		}
		printf("%d\n",tabletas);
	}
	return 0;
}