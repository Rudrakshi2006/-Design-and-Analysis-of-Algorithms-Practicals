#include<stdio.h>
int pass=0;
void printpass(int arr[],int start,int end){
	printf("Pass: ");
	for(int i=start;i<=end;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void merge(int arr[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n1;j++)
		R[j]=arr[m+1+j];
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k++]=L[i++];
		}
		else{
			arr[k++]=R[j++];
		}
	}
	while(i<n1)
		arr[k++]=L[i++];
	while(j<n2)
		arr[k++]=R[j++];
	printpass(arr,l,r);
}
void mergesort(int arr[],int l,int r){
}