#include<stdio.h>
void mergesort(int [], int , int);
void merg(int [], int, int, int);
void main(){
	int a[10],i;
	for (i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	mergesort(a,0,9);
	
	for (i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	
	
}

void mergesort(int a[], int beg, int end){
	int mid;
	if(beg < end){
		mid=(beg+end)/2;
		mergesort(a,beg,mid);
		mergesort(a,mid+1,end);
		merg(a,beg,mid,end);
	}
}

void merg(int a[], int beg, int mid, int end){
	int i=beg,j=mid+1,index=beg;
	int temp[10];
	
	while(i<=mid && j<=end){
		if(a[i] < a[j]){
			temp[index] = a[i++];
		}
		else{
			temp[index] = a[j++];
		}
		index++;
	}
	
	if(i > mid){
		while(j<=end){
			temp[index++] = a[j++];
		}
	}
	else{
		while(i<=mid){
			temp[index++]=a[i++];
		}
	}
	
	int k=beg;
	while(k < index){
		a[k] = temp[k];
		k++;
	}
}
