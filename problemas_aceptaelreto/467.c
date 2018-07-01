/*
Solution for the problem 467 of aceptaelreto.com
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
#include<ctype.h>
int main(){
	char palabra1[32];
	char palabra2[32];
	int n_casos;
	int len;
	scanf("%d",&n_casos);
	for(;n_casos>0;n_casos--){
		scanf("%s",palabra1);
		scanf("%s",palabra2);
		scanf("%s",palabra2);
		len = strlen(palabra1);
		for(len--;len>=0;len--){
			palabra1[len] = tolower(palabra1[len]);
		}
		len = strlen(palabra2);
		for(len--;len>=0;len--){
			palabra2[len] = tolower(palabra2[len]);
		}
		if(strcmp(palabra1,palabra2)){
			printf("NO TAUTOLOGIA\n");
		}else{
			printf("TAUTOLOGIA\n");
		}
	}
	return 0;
}