/*

Solution for the problem 262 of aceptaelreto.com
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
int n,p,i,j,resultado;
long long potencia;
	while(1){
		resultado=1;
		scanf("%d",&n);
		scanf("%d",&p);
		if(n==0&&p==0){
			break;
		}
		for(i=2;i<=n;i++){
			potencia=1;
			for(j=0;j<p;j++){
				if((p-j)>7){
					potencia = potencia*i*i*i*i*i*i*i;
					j = j+6;
				}else{
					potencia = potencia*i;
				}
				if(potencia>=46337){
					potencia = potencia%46337;
				}
			}
			resultado += potencia;
			if(resultado>=46337){
				resultado = resultado%46337;
			}
		}
		printf("%d\n",resultado);
	}
	return 0;
}
