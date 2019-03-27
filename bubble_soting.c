# include<stdio.h>
#include<conio.h>

int main(){
int arr[10],temp;

for(int k=0;k<10;k++){
scanf("%d",&arr[k]);
}

for(int i=0;i<10;i++){
    key=arr[i];
    for(int j=i+1;j<10;j++){
        if(arr[j] > key){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
    }
}

for(int k=0;k<10;k++){
printf("%d",arr[k]);
}
}
