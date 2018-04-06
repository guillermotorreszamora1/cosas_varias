#include <stdio.h>
/*unsigned int cache[42949672950][8];*/

unsigned int f(unsigned int p, int num, unsigned int n){
	if (p >= n){
		return 0;
	}
	
/*	
	if(cache[p][num] != -1){
		return cache[p][num];
	}
*/	
	return !f(p*2, 2, n) || !f(p*3, 3,  n) || !f(p*4,4,  n) || !f(p*5, 5, n) || !f(p*6, 6, n) || !f(p*7, 7, n) || !f(p*8, 8, n) ||!f(p*9, 9, n);
	
	;
}

int main(int argc, char const *argv[])
{ 	int i, j;
	unsigned int n;
	while(scanf("%u", &n) != EOF){
		/*for(i=0; i<n; i++){
			for(j=0; j<8; j++){
				cache[i][j] = -1;
			}
		}*/
		printf("%d\n", f(n/9, 2, n) || f(n/8, 3, n) || f(n/7, 4, n) || f(n/6, 5, n) || f(n/5, 6, n) || f(n/4, 7, n) || f(n/3, 8, n) || f(n/2, 9, n));
	}
	return 0;
}