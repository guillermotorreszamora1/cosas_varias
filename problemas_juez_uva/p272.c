/*
Solution for the problem 272 of uva.onlinejudge.org
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
#include <stdio.h>
int main(){
	char c;
	int estado=0;
	while(scanf("%c",&c)!=EOF){
		if(c=='"'){
			if(estado==0){
				printf("``");
			}else{
				printf("''");
			}
			estado = !estado;
		}else{
			printf("%c",c);
		}
	}
	return 0;
}