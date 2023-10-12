#include<stdio.h>
#include<iostream>
using namespace std;
struct array{
	int A[20];
	int size;
	int length;
};
void Display(struct array arr){
	int i;
	cout<<"Elemnts are: "<<endl;
	for(i=0;i<arr.length;i++)
		cout<<arr.A[i];
}
void reverse(struct array *arr){
	
	int i,j;
	int *B;
	B=(int *)malloc(arr->length*sizeof(int));
	for(i=arr->length-1,j=0;i>=0;i--,j++){
		B[j]=arr->A[i];
	}
	for(i=0;i<arr->length;i++){
		arr->A[i]=B[i];
	}
}

int main(){
	
	struct array arr={{2,3,4,5,6},10,5};
	reverse(&arr);
	Display(arr);
}
