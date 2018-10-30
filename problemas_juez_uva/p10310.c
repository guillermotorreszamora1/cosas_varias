/*
Solution for the problem 10310 of uva.onlinejudge.org
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
	int n_hoyos,i;
	float x_perro,y_perro,x_topo,y_topo,x_hoyo,y_hoyo;
	float distancia_perro;
	float distancia_topo;
	float x_hoyo_libre,y_hoyo_libre;
	int flag;
	while(scanf("%d %f %f %f %f",&n_hoyos,&x_topo,&y_topo,&x_perro,&y_perro)!=EOF){
		flag = 0;
		for(i=0;i<n_hoyos;i++){
			scanf("%f %f",&x_hoyo,&y_hoyo);
			if(flag==0){
				distancia_perro = (x_perro-x_hoyo)*(x_perro-x_hoyo)+(y_perro-y_hoyo)*(y_perro-y_hoyo);
				distancia_topo = (x_topo-x_hoyo)*(x_topo-x_hoyo)+(y_topo-y_hoyo)*(y_topo-y_hoyo);
				distancia_topo *= 4;
				if(distancia_topo<=distancia_perro){
					y_hoyo_libre= y_hoyo;
					x_hoyo_libre = x_hoyo;
					flag = 1;
				}
			}
		}
		if(flag==0){
			printf("The gopher cannot escape.\n");
		}else{
			printf("The gopher can escape through the hole at (%.3f,%.3f).\n",x_hoyo_libre,y_hoyo_libre);
		}
	}
	return 0;
}
