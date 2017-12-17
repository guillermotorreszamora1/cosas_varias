/*

Solution for the problem 139 of aceptaelreto.com
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
int cubifinito(int numero){
	int a[8],i,sum=0;
	for(i=0;i<=7;i++){
		a[i] = numero%10;
		sum += a[i]*a[i]*a[i];
		numero = numero/10;
	}
	return sum;
}
int main(){
	int caso,numero[20],j,k,cubi/*0 no 1 si 2 no concluyente*/;
	while(1){
		scanf("%d",&caso);
		if(caso==0){
			break;
		}
		cubi = 2;
		for(j=0;j<20;j++){
			numero[j]=caso;
			caso = cubifinito(caso);
			for(k=0;k<j;k++){
				if(numero[k]==numero[j]){
					cubi=0;
					break;
				}
			}
			if(cubi==0){
				//printf("NO %d\n",i);
				for(k=0;k<=j;k++){
					if(k!=0){
						printf(" ");
					}
					printf("%d -",numero[k]);
				}
				printf("> no cubifinito.\n");
				break;
			}
			if(caso==1){
				//printf("SI %d\n",i);
				if(numero[0]!=1){
					j++;
					numero[j]=1;
				}
				for(k=0;k<=j;k++){
					if(k!=0){
						printf(" ");
					}
					printf("%d -",numero[k]);
				}
				printf("> cubifinito.\n");
				cubi=1;
				break;
			}
		}
	}
	return 0;
}
