/*
Solution for the problem 422 of uva.onlinejudge.org
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
#include<string.h>
int main(){
	char matriz[100][100];
	char palabra[100];
	int size;
	int wsize;
	char dato;
	int i,j,k,l;
	int s1,s2,s3,s4;
	int check;
	scanf("%d",&size);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			do{
				scanf("%c",&dato);
			}while(dato=='\n');
			matriz[i][j]=dato;
		}
	}
	scanf("%s",palabra);
	while(palabra[0]!='0'&&palabra[1]!='\0'){
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				if(palabra[0]==matriz[i][j]){
					s1 = i+1;
					s2 = j+1;
					wsize = strlen(palabra);
												/*Horizontal +*/
					s3 = s1;
					s4 = s2 +wsize -1;
					check = 1;
					for(k=0;k<wsize;k++){
						if((j+k)==size){
							check = 0;
							break;
						}
						if(palabra[k]!=matriz[i][j+k]){
							check = 0;
							break;
						}
					}
					if(check==1){
						printf("%d,%d %d,%d\n",s1,s2,s3,s4);
						goto end;
					}
												/*Horizontal -*/
					s3 = s1;
					s4 = s2 -wsize +1;
					check = 1;
					for(k=0;k<wsize;k++){
						if((j-k)==-1){
							check = 0;
							break;
						}
						if(palabra[k]!=matriz[i][j-k]){
							check = 0;
							break;
						}
					}
					if(check==1){
						printf("%d,%d %d,%d\n",s1,s2,s3,s4);
						goto end;
					}
												/*VERTICAL*/
					s3 = s1 + wsize -1;
					s4 = s2;
					check = 1;
					for(k=0;k<wsize;k++){
						if((i+k)==size){
							check = 0;
							break;
						}
						if(palabra[k]!=matriz[i+k][j]){
							check=0;
							break;
						}
					}
					if(check==1){
						printf("%d,%d %d,%d\n",s1,s2,s3,s4);
						goto end;
					}
												/*Diagonal + +*/
					s3 = s1 + wsize -1;
					s4 = s2 + wsize -1;
					check = 1;
					for(k=0;k<wsize;k++){
						if((i+k)==size){
							check = 0;
							break;
						}
						if((j+k)==size){
							check = 0;
							break;
						}
						if(palabra[k]!=matriz[i+k][j+k]){
							check=0;
							break;
						}
					}
					if(check==1){
						printf("%d,%d %d,%d\n",s1,s2,s3,s4);
						goto end;
					}
												/*Diagonal + -*/
					s3 = s1 + wsize -1;
					s4 = s2 - wsize +1;
					check = 1;
					for(k=0;k<wsize;k++){
						if((i+k)==size){
							check = 0;
							break;
						}
						if((j-k)==-1){
							check = 0;
							break;
						}
						if(palabra[k]!=matriz[i+k][j-k]){
							check=0;
							break;
						}
					}
					if(check==1){
						printf("%d,%d %d,%d\n",s1,s2,s3,s4);
						goto end;
					}
												/*Diagonal - +*/
					s3 = s1 - wsize +1;
					s4 = s2 + wsize -1;
					check = 1;
					for(k=0;k<wsize;k++){
						if((i-k)==-1){
							check = 0;
							break;
						}
						if((j+k)==size){
							check = 0;
							break;
						}
						if(palabra[k]!=matriz[i-k][j+k]){
							check=0;
							break;
						}
					}
					if(check==1){
						printf("%d,%d %d,%d\n",s1,s2,s3,s4);
						goto end;
					}
												/*Diagonal - -*/
					s3 = s1 - wsize +1;
					s4 = s2 - wsize +1;
					check = 1;
					for(k=0;k<wsize;k++){
						if((i-k)==-1){
							check = 0;
							break;
						}
						if((j-k)==-1){
							check = 0;
							break;
						}
						if(palabra[k]!=matriz[i-k][j-k]){
							check=0;
							break;
						}
					}
					if(check==1){
						printf("%d,%d %d,%d\n",s1,s2,s3,s4);
						goto end;
					}
				}
			}
		}
		printf("Not found\n");
		end:
		scanf("%s",palabra);
	}
	return 0;
}