#include<stdio.h>
int main(){
	int i,j,n,temp;
	int arr[100];
	printf("enter the temp of array\n");
	scanf("%d,&n");
	printf("enter the%d no.of element",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	return 0;
}
