# include <stdio.h>
void selectionsort(int [],int ,int );
int minindex(int [],int ,int );
void swap(int [],int ,int );

 int main(){
 	int arr[10],i;
 	for(i=0;i<10;i++){
 		scanf("%d",&arr[i]);
	 }
	 selectionsort(arr,0,10);
	 
	 for(i=0;i<10;i++){
	 	printf("%d\t",arr[i]);	
	 }
 }
 
void selectionsort(int a[],int beg,int end){
	int index,i;
	for(i=0;i<end;i++){
		index=minindex(a,i,end);
		swap(a,i,index);
	}
}

int minindex(int a[],int i,int end){
	int min,value,j;
	min=i;
	value=a[i];
	for(j=i+1;j<end;j++){
		if(a[j] < value){
			min=j;
		}
	}
	return min;
} 

void swap(int a[],int i,int index){
	int temp;
	temp=a[i];
	a[i]=a[index];
	a[index]=temp;
}


