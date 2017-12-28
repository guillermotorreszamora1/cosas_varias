/*

Solution for the problem 357 of aceptaelreto.com
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
int mascaras[32];/*Supone enteros de por lo menos 32bits*/
int main(){
	unsigned int i;
	int dato;
	int temporal;
	mascaras[0]=0x1;
	for(i=1;i<32;i++){
		mascaras[i] = mascaras[i-1]*2;
	}
	while(scanf("%d",&dato)!=EOF){
		for(i=31;i>=0;i--){
			temporal = dato & mascaras[i];
			if(temporal){
				break;
			}
		}
		printf("%d\n",i+1);
	}
	return 0;
}

