/*

Solution for the problem 263 of aceptaelreto.com
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
	char matriz[50][50];
	int tamano;
	char intercambio;
	int i,j;
	char modo;
	int desplazamiento;
	while(1){
	scanf("%d",&tamano);
	if(tamano==0){
		break;
	}
	for(i=0;i<tamano;i++){
		for(j=0;j<tamano;j++){
			scanf("%c",&matriz[i][j]);
			if(matriz[i][j]=='\n'){
				scanf("%c",&matriz[i][j]);
			}
		}
	}
	while(1){
		while(1){
			scanf("%c",&modo);
			if(modo=='c'||modo=='f'||modo=='x'){
				break;
			}
		}
		if(modo=='x'){
			break;
		}
		scanf("%d",&desplazamiento);
		if(modo=='f'){
			if(desplazamiento<0){
				desplazamiento = -desplazamiento;
				desplazamiento--;
				intercambio = matriz[desplazamiento][0];
				for(i=1;i<tamano;i++){
					matriz[desplazamiento][i-1] = matriz[desplazamiento][i];
				}
				matriz[desplazamiento][tamano-1] = intercambio;
			}else{
				desplazamiento--;
				intercambio = matriz[desplazamiento][tamano-1];
				for(i=tamano-2;i>=0;i--){/*0-1*/
					matriz[desplazamiento][i+1] = matriz[desplazamiento][i];
					
					/**/
				}
				matriz[desplazamiento][0] = intercambio;
			}
		}else{
			if(desplazamiento<0){
				desplazamiento = -desplazamiento;
				desplazamiento--;
				intercambio = matriz[0][desplazamiento];
				for(i=1;i<tamano;i++){
					matriz[i-1][desplazamiento] = matriz[i][desplazamiento];
				}
				matriz[tamano-1][desplazamiento] = intercambio;
			}else{
				desplazamiento--;
				intercambio = matriz[tamano-1][desplazamiento];
				for(i=tamano-2;i>=0;i--){
					matriz[i+1][desplazamiento] = matriz[i][desplazamiento];
				}
				matriz[0][desplazamiento] = intercambio;
			}
		}
	}
	for(i=0;i<tamano;i++){
		for(j=0;j<tamano;j++){
			printf("%c",matriz[i][j]);
		}
		printf("\n");
	}
	printf("---\n");
	}
	return 0;
}
