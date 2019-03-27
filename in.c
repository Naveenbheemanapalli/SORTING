#include<stdio.h>
void insertionsort(int []);
int main(){
	int arr[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	insertionsort(arr);
	
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
}

void insertionsort(int a[]){
	int i,j,temp;
	
	for(i=1;i<10;i++){
		j=i-1;
		temp=a[i];
		while(j>=0 && a[j] <= temp){
			a[j+1] = a[i];
			j=j-1;
		}
		a[j+1]=temp;
	}	
}
