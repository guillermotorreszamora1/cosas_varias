#include<stdio.h>
int main(){
	int dentro=0;
	int area;
	int a,b;
	int i,j;
	char caracter;
	while(scanf("%d %d",&a,&b)!=EOF){
		dentro=0;
		area=0;
		for(i=0;i<b;i++){
			for(j=0;j<a;j++){
				scanf("%c",&caracter);
				if(caracter=='/' || caracter=='\\'){
					area++;
					dentro = !dentro;
				}
				if(caracter=='.'){
					if(dentro){
						area += 2;
					}
				}
				if(caracter=='\n'){
					j--;
				}
			}
		}
		printf("%d\n",area/2);
	}
	return 0;
}
