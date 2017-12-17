/*

Solution for the problem 266 of aceptaelreto.com
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
char read_data(){
	char c;
	while(1){
		scanf("%c",&c);
		if(c!='\n'&&c!=' '){
			return c;
		}
	}
}
void init_array(char array[26]){
	int i;
	for(i=0;i<26;i++){
		array[i] = i+'A';
	}
}
void process_change(char array[26],char original,char cambio){
	int i;
	for(i=0;i<26;i++){
		if(array[i]==original){
			array[i]=cambio;
		}
	}
}
void write_change(char matriz[500][500],int dim_x,int dim_y,char array[26]){
	int i,j;
	int letra_a_cambiar;
	for(i=0;i<dim_y;i++){
		for(j=0;j<dim_x;j++){
			letra_a_cambiar = matriz[i][j];
			matriz[i][j] = array[letra_a_cambiar-'A'];
			printf("%c",matriz[i][j]);
		}
		printf("\n");
	}
}
int main(){
	char matriz[500][500];
	int dim_x;
	int dim_y;
	int i,j;
	int n_copistas;
	char original;
	char copia;
	char array[26];
	while(1){
	scanf("%d",&dim_y);
	scanf("%d",&dim_x);
	init_array(array);
	if(dim_y==0||dim_x==0){
		return 0;
	}
	for(i=0;i<dim_y;i++){
		for(j=0;j<dim_x;j++){
			matriz[i][j] = read_data();
		}
	}
	scanf("%d",&n_copistas);
	for(i=0;i<n_copistas;i++){
		original = read_data();
		copia = read_data();
		process_change(array,original,copia);
	}
	write_change(matriz,dim_x,dim_y,array);
	}
	return 0;
}
