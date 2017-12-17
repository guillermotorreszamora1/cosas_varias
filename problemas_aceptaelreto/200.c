/*

Solution for the problem 200 of aceptaelreto.com
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
#include<stdlib.h>
typedef struct _Node{
	struct _Node* right;
	struct _Node* left;
	long int value;
}Node;
void print_node(Node* node,int position,int deep);
int main(){
	/*Node node[47];*/
	Node* node;
	int numero;
	int i;
	node = malloc(47*sizeof(Node));
	node[0].value = 0;
	node[1].value = 1;
	node[0].left = NULL;
	node[0].right = NULL;
	node[1].left = NULL;
	node[1].right = NULL;
	for(i=2;i<47;i++){
		node[i].value = node[i-1].value + node[i-2].value;
		node[i].left = &node[i-1];
		node[i].right = &node[i-2];
	}
	while(1){
		scanf("%d",&numero);
		if(numero<0){
			break;
		}
		print_node(node,numero,0);
		printf("====\n");
	}
	free(node);
	return 0;
}
void print_node(Node* node,int position,int deep){
	int i;
	for(i=0;i<deep;i++){
		printf("   ");
	}
	printf("%ld\n",node[position].value);
	if(node[position].left!=NULL){
		print_node(node,position-2,deep+1);
		print_node(node,position-1,deep+1);
	}
}
