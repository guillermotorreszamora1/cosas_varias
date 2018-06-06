/*
Solution for the problem 10038 of uva.onlinejudge.org
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
	int array_check[3000];
	int tamano;
	int i;
	int act;
	int ant;
	int diff;
	int sol;
	while(scanf("%d",&tamano)!=EOF){
		for(i=1;i<tamano;i++){
			array_check[i]=0;
		}
		scanf("%d",&ant);
		for(i=1;i<tamano;i++){
			scanf("%d",&act);
			if(act>ant){
				diff = act-ant;
			}else{
				diff = ant- act;
			}
			if(diff<tamano){
				array_check[diff]++;
			}
			ant = act;
		}
		sol=1;
		for(i=1;i<tamano;i++){
			if(array_check[i]!=1){
				sol=0;
				break;
			}
		}
		if(sol==1){
			printf("Jolly\n");
		}else{
			printf("Not jolly\n");
		}
	}
}
