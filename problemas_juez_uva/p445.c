/*
Solution for the problem 445 of uva.onlinejudge.org
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
	int i=0,acc=0;
	char a;
	while(scanf("%c",&a)!=EOF){
		if(a=='!'||a=='\n'){
			printf("\n");
		}else if(a>='0'&&a<='9'){
			acc += a -'0';
		}else if(a=='b'){
			for(i=0;i<acc;i++){
				printf(" ");
			}
			acc =0;
		}else{
			for(i=0;i<acc;i++){
				printf("%c",a);
			}
			acc = 0;
		}
	}
	return 0;
}