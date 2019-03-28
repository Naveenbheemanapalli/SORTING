# include <stdio.h>
# include <conio.h>
int main(int argc , char *argv[]) {
	int n,i,g;
	printf("Enter the value of n  :--");
	n=atoi(argv[1]);
	int  a[n+1];
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++) {
		a[i]=a[i-1]+a[i-2];
		printf("%d \n", a[i]);
	}
	printf("enter the g value :--");
	scanf("%d",&g);
	printf("%d",a[g]);
	
	
}
