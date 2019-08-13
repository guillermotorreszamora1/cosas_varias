/*

Solution for the problem 521 of aceptaelreto.com
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
int viviendas[32][32];
int main(){
	int n_pisos;
	int n_letras;
	int n_viviendas;
	int n_asistentes;
	int i,j;
	int piso,letra;
	int n_votos;
	int mayoria;
	while(1){
		scanf("%d %d %d",&n_pisos,&n_letras,&n_asistentes);
		if(n_pisos==0&&n_letras==0&&n_asistentes==0){
			break;
		}
		for(i=1;i<=n_pisos;i++){
			for(j=0;j<n_letras;j++){
				viviendas[i][j]=0;
			}
		}
		n_votos=0;
		for(i=0;i<n_asistentes;i++){
			scanf("%d %c",&piso,&letra);
			if(viviendas[piso][letra-'A']==0){
				viviendas[piso][letra-'A']=1;
				n_votos++;
			}
		}
		n_viviendas = n_pisos*n_letras;
		mayoria = n_viviendas/2 +n_viviendas%2;
		if(n_votos>=mayoria){
			printf("EMPEZAMOS\n");
		}else{
			printf("ESPERAMOS\n");
		}
	}
	return 0;
}
