#include <stdio.h>
int main(int argc, char const *argv[])
{
	int f, c, n, I, A, B, M, i, j, t,valor;
	while(1){
		scanf("%d %d %d", &f, &c, &n); if(f==0 && c==0 && n==0) return 0;
		int tabla[f+1][c];
		int tabla2[f][c];
		for(i=0; i<f; i++){
			for(j=0; j<c; j++){
				tabla[i][j] = 0;
				tabla2[i][j]= 0;
			}
		}
		for(t=0; t<n; t++){
			scanf("%d %d %d %d", &I, &A, &B, &M);
			tabla[A][I] += M;
			tabla[B+1][I] -= M;
		}
		for(i=0;i<c;i++){
			valor = 0;
			for(j=0;j<f;j++){
				valor += tabla[j][i];
				tabla2[j][i]= valor;
			}
		}
		for(i=0; i<f; i++){
			for(j=0; j<c; j++){
				if(j == c-1) printf("%d\n", tabla2[i][j]);
				else printf("%d ", tabla2[i][j]);
			}
		}
	}
	return 0;
}