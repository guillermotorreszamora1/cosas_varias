/*

Solution for the problem 345 of aceptaelreto.com
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
int comprobar_linea(int y,int tabla[9][9]);
int comprobar_columna(int x,int tabla[9][9]);
int comprobar_region(int x,int y,int tabla[9][9]);
int comprobar_sudoku(int tabla[9][9]);
int comprobar_linea(int y,int tabla[9][9]){
	int apariciones[

10

];
	
	int i;
	for(i=1;i<10;i++){
		apariciones[i]=0;
	}
	for(i=0;i<9;i++){
		apariciones[tabla[y][i]]++;
	}
	for(i=1;i<10;i++){
		if(apariciones[i]!=1){
			/*printf("linea:%d\n",y);*/
			return 0;
		}
	}
	return 1;
}
int comprobar_columna(int x,int tabla[9][9]){
	int apariciones[10];
	int i;
	for(i=1;i<10;i++){
		apariciones[i]=0;
	}
	for(i=0;i<9;i++){
		apariciones[tabla[i][x]]++;
	}
	for(i=1;i<10;i++){
		if(apariciones[i]!=1){
			/*printf("columna:%d\n",x);*/
			return 0;
		}
	}
	return 1;
}
int comprobar_region(int x,int y,int tabla[9][9]){
	int apariciones[10];
	int i,j;
	for(i=1;i<10;i++){
		apariciones[i]=0;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			apariciones[tabla[i+y][j+x]]++;
		}
	}
	for(i=1;i<10;i++){
		if(apariciones[i]!=1){
			/*printf("region:%d:%d\n",x,y);*/
			return 0;
		}
	}
	return 1;
}
int comprobar_sudoku(int tabla[9][9]){
	int i,j;
	for(i=0;i<9;i++){
		if(comprobar_linea(i,tabla)==0){
			return 0;
		}
		if(comprobar_columna(i,tabla)==0){
			return 0;
		}
	}
	for(i=0;i<9;i=i+3){
		for(j=0;j<9;j=j+3){
			if(comprobar_region(i,j,tabla)==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int tabla[9][9];
	int i,j,k;
	int casos;
	scanf("%d",&casos);
	for(i=0;i<casos;i++){
		for(j=0;j<9;j++){
			for(k=0;k<9;k++){
				scanf("%d",&tabla[j][k]);
			}
		}
		/**/
		if(comprobar_sudoku(tabla)==1){
			printf("SI\n");
		}else{
			printf("NO\n");
		}
	}
}

