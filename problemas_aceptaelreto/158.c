/*

Solution for the problem 158 of aceptaelreto.com
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
	int n_muros;
	int ant;
	int act;
	int n_saltos_arriba;
	int n_saltos_abajo;
	scanf("%d",&n_casos);
	for(;n_casos>0;n_casos--){
		n_saltos_arriba=0;
		n_saltos_abajo=0;
		scanf("%d",&n_muros);
		scanf("%d",&ant);
		for(n_muros--;n_muros>0;n_muros--){
			scanf("%d",&act);
			if(act>ant){
				n_saltos_arriba++;
			}
			if(act<ant){
				n_saltos_abajo++;
			}
			ant = act;
		}
		printf("%d %d\n",n_saltos_arriba,n_saltos_abajo);
	}
	return 0;
}
