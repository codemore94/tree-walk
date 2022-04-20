#include "stdlib.h"

#define M 8

typedef struct node{
	struct node* left;
	struct node* right;

	int arr[M];
}node;


void alloc();

int main(){
	node* root=(node*)malloc(sizeof(node));
	int size=0;
	
	int i=0;

	size=M;
	i=0;
	while(i<size){
		(*root).arr[i];
		i++;
	}
	(*root).left=(node*)malloc(sizeof(node));		
	(*root).right=(node*)malloc(sizeof(node));		
	size=M;
	
	i=0;
	while(i<size/2){
		(*(*root).left).arr[i];
		i++;
	}
	while(i<size){
		(*(*root).right).arr[i];
		i++;
	}
}
