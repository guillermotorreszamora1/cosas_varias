/*

Solution for the problem 527 of aceptaelreto.com
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
#include<string.h>
int main(){
	int n_casos;
	int i,longitud;
	int n_ceros;
	int suma_digitos;
	char cadena[128];
	scanf("%d",&n_casos);
	while(n_casos--){
		n_ceros=0;
		suma_digitos=0;
		scanf("%s",cadena);
		longitud = strlen(cadena);
		for(i=0;i<longitud;i++){
			suma_digitos += cadena[i]-'0';
			if(cadena[i]=='0'){
				n_ceros++;
			}
		}
		if((n_ceros>=2&&(suma_digitos%9)==0)||n_ceros==1&&suma_digitos==0){
			printf("COMPLETO\n");
		}else{
			if(n_ceros<2){
				if(n_ceros==0){
					printf("00");
				}else{
					printf("0");
				}
			}
			if(suma_digitos%9){
				printf("%d",9-suma_digitos%9);
			}
			printf("\n");
		}
	}
	return 0;
}
