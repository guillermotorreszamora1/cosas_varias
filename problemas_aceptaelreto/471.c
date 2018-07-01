/*
Solution for the problem 471 of aceptaelreto.com
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
	int i,n_casos;
	int coste_as;
	int coste_de;
	int pos_ini;
	int pos_pin;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d",&pos_ini);
		scanf("%d",&pos_pin);
		if(pos_ini<pos_pin){
			coste_as = pos_pin - pos_ini;
			coste_de = (pos_ini+360) - pos_pin;
		}
		if(pos_ini>pos_pin){
			coste_as = (pos_pin+360) -pos_ini;
			coste_de = pos_ini - pos_pin;
		}
		if(pos_ini==pos_pin){
			coste_as = 0;
			coste_de = 0;
		}
		if(coste_de<coste_as){
			printf("DESCENDENTE\n");
		}
		if(coste_as<coste_de){
			printf("ASCENDENTE\n");
		}
		if(coste_as==coste_de){
			printf("DA IGUAL\n");
		}
	}
	return 0;
}