/*

Solution for the problem 390 of aceptaelreto.com
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


	int i,n_casos;
	int magenta,amarillo,cian;
	char entrada;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d",&magenta);
		scanf("%d",&amarillo);
		scanf("%d",&cian);
		while(1){
			scanf("%c",&entrada);
			if(entrada==' '){
				continue;
			}
			if(entrada=='\n'){
				break;
			}
			if(entrada=='M'||entrada=='m'){
				magenta--;
			}
			if(entrada=='A'||entrada=='a'){
				amarillo--;
			}
			if(entrada=='C'||entrada=='c'){
				cian--;
			}
			if(entrada=='R'||entrada=='r'){
				amarillo--;
				magenta--;
			}
			if(entrada=='N'||entrada=='n'){
				magenta--;
				amarillo--;
				cian--;
			}
			if(entrada=='V'||entrada=='v'){
				amarillo--;
				cian--;
			}
			if(entrada=='L'||entrada=='l'){
				magenta--;
				cian--;
			}
		}
		if(magenta<0||amarillo<0||cian<0){
			printf("NO\n");
		}else{
			printf("SI %d %d %d\n",magenta,amarillo,cian);
		}
	}
	return 0;
}


