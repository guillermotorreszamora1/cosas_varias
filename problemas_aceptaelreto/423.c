/*

Solution for the problem 423 of aceptaelreto.com
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
short conteo_becarios;
int p_act;
int prof_max;
void recursivo();
int main(){
	short p_act;
	conteo_becarios=0;
	p_act=0;
	while(1){
		if(scanf("%d",&prof_max)==EOF){
			break;
		}
	
		p_act=0;
		conteo_becarios=0;
		recursivo();
		printf("%d\n",conteo_becarios);
	}
	return 0;
}
void recursivo(){
	int dato;
	scanf("%d",&dato);
	if(dato==0&&p_act>=prof_max){
		conteo_becarios++;
	}
	for(dato;dato>0;dato--){
		p_act++;
		recursivo();
		p_act--;
	}
}
