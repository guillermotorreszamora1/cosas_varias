/*
Solution for the problem 392 of uva.onlinejudge.org
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
	int i;
	int numero;
	int numero2;
	while(1){
		numero2 = 0;
		for(i=0;i<9;i++){
			if(scanf("%d",&numero)==EOF){
				return 0;
			}
			if(numero!=0){
				numero2++;
				if(numero2==1){
					if(i!=8){
						if((numero<-1)||(numero>1)){
							printf("%d",numero);
						}
						if(numero==-1){
							printf("-");
						}
					}else{
						printf("%d",numero);
					}
				}else{
					if(numero>1){
						printf(" + %d",numero);
					}else if(numero<-1){
						printf(" - %d",-numero);
					}else if(numero==-1){
						printf(" - ");
						if(i==8){
							printf("1");
						}
					}else{
						printf(" + ");
						if(i==8){
							printf("1");
						}
					}
				}
				if(i<8){
					printf("x");
				}
				if(i<7){
					printf("^%d",9-i-1);
				}
			}
		}
		if(numero2==0){
			printf("0");
		}
		printf("\n");
	}
}