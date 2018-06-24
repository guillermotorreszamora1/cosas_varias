/*
Solution for the problem 362 of uva.onlinejudge.org
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
	int size;
	int i;
	int counter;/*second counter*/
	int acumulator;
	int inmediate_speed;
	int time_left;
	int n_case;
	n_case=1;
	while(1){
		i=0;
		acumulator=0;
		counter=0;
		scanf("%d",&size);
		if(size==0){
			break;
		}
		printf("Output for data set %d, %d bytes:\n",n_case,size);
		while(size>0){
			scanf("%d",&inmediate_speed);
			i++;
			counter++;
			acumulator += inmediate_speed;
			size -= inmediate_speed;
			if(i==5){
				if(acumulator!=0){
					time_left = (size*5)/acumulator;
					if((size*5)%acumulator){
						time_left++;
					}
					printf("   Time remaining: %d seconds\n", time_left);
				}else{
					printf("   Time remaining: stalled\n");
				}
			i=0;
			acumulator = 0;
			}
		}
		printf("Total time: %d seconds\n\n",counter);
		n_case++;
	}
	return 0;
}