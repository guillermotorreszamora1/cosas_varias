/*

Solution for the problem 284 of aceptaelreto.com
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
	int coste;
	int pagado;
	int cambio;
	scanf("%d",&n_casos);
	scanf("%d",&coste);
	scanf("%d",&pagado);
	for(i=0;i<n_casos;i++){
		if(coste>pagado){
			printf("DEBE %d\n",coste-pagado);
		}else{
			cambio = pagado - coste;
			printf("%d ",cambio/200);
			cambio = cambio%200;
			printf("%d ",cambio/100);
			cambio = cambio%100;
			printf("%d ",cambio/50);
			cambio = cambio%50;
			printf("%d ",cambio/20);
			cambio = cambio%20;
			printf("%d ",cambio/10);
			cambio = cambio%10;
			printf("%d ",cambio/5);
			cambio = cambio%5;
			printf("%d ",cambio/2);
			cambio = cambio%2;
			printf("%d\n",cambio);
		}
	}
	return 0;
}
