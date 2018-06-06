/*
Solution for the problem 10189 of uva.onlinejudge.org
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
	char dato;
	char datos[102][102];
	int i,j,k,l,m,n,o,x,y;
	for(o=1;;o++){
		scanf("%d",&y);
		scanf("%d",&x);
		if(x==0&&y==0){
			break;
		}
		if(o>1){
			printf("\n");
		}
		x = x+1;
		y = y+1;
		for(i=0;i<=y;i++){
			for(j=0;j<=x;j++){
				datos[i][j]='.';
			}
		}
		for(i=1;i<y;i++){
			for(j=1;j<x;j++){
				dato='\n';
				while(dato=='\n'){
					scanf("%c",&dato);
				}
				datos[i][j]=dato;
			}
		}
		for(i=1;i<y;i++){
			for(j=1;j<x;j++){
				if(datos[i][j]=='.'){
					datos[i][j]='0';
				}
			}
		}
		
		for(i=1;i<y;i++){
			for(j=1;j<x;j++){
				if(datos[i][j]=='*'){
					continue;
				}
				for(k=-1;k<=1;k++){
					for(l=-1;l<=1;l++){
						m = i+k;
						n = j+l;
						if(datos[m][n]=='*'){
							datos[i][j]++;
						}
					}
				}
			}
		}
		printf("Field #%d:\n",o);
		for(i=1;i<y;i++){
			for(j=1;j<x;j++){
				printf("%c",datos[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}