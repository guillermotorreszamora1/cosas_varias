/*

Solution for the problem 196 of aceptaelreto.com
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
void rotate(char a[9][9] ,char b[9][9],char c[9][9]){
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			b[j][8-i] = a[i][j];
		}
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			c[j][8-i] = b[i][j];
		}
	}
}
char check(char a[9][9],char c[9][9]){
	char i,j,contador,bandera;
	bandera=1;
	contador=0;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(a[i][j]!=c[i][j]){
				bandera=0;
			}
			if(a[i][j]==1){
				contador++;
			}
		}
	}
	if(bandera==1&&contador<=32){
		return 1;
	}
	return 0;
}
char read_data(void){
	char data;
	while(1){
		scanf("%c",&data);
		/*
		switch(data){
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			return 1;
		case '-':
			return 0;
		}
		*/
		if(data!='\n'){
			break;
		}
	}
	if(data=='-'){
		return 0;
	}else{
		return 1;
	}
}
int main(){
	int i;
	int j;
	int k;
	int n_casos;
	char matriz_o[9][9];
	char matriz_a[9][9];
	char matriz_f[9][9];
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		for(j=0;j<9;j++){
			for(k=0;k<9;k++){
				matriz_o[j][k] = read_data();
			}
		}
		rotate(matriz_o,matriz_a,matriz_f);
		printf("%s\n",check(matriz_o,matriz_f)==1?"SI":"NO");
	}
	return 0;
}
