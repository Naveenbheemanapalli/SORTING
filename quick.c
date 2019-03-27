#include<stdio.h>
void quicksort(int [],int ,int );
int parition(int a[],int beg,int end);

int main(){
	int arr[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	quicksort(arr,0,10);
	
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	
}

void quicksort(int a[],int beg,int end){
	int loc;
	if(beg < end){
		loc=parition(a,beg,end);
		quicksort(a,beg,loc-1);
		quicksort(a,loc+1,end);
	}
}

int parition(int a[],int beg,int end){
	int left,right,temp,loc,flag;
	loc=left=beg;
	right=end;
	flag=0;
	while(flag!=1){
		while((a[loc]<=a[right]) && (loc!=right)){
		
			right--;
		}
			if(loc==right){
				flag=1;
			}
			else{
				if(a[loc]>a[right]){
					temp=a[loc];
					a[loc]=a[right];
					a[right]=temp;
					loc=right;
				}
			}
			
		if(flag!=1){
			while((a[loc]>=a[left]) && (loc!=left)){
				left++;
			}
			if(loc==left){
				flag=1;
			}
			else{
				if(a[loc] < a[left]){
					temp=a[loc];
					a[loc]=a[left];
					a[left]=temp;
					loc=left;
				}
			}
		}
		
	
	}
return loc;		
}



