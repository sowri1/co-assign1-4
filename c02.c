#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i=0,j=0;

void creatematrix(int m,int n,int arr[][n]){
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{arr[i][j]=rand()%100+1;
		}
	}
}

void printmatrix(int m,int n,int arr[][n]){
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{printf("%d\t",arr[i][j]);}
	printf("\n");
	}
}
void multiplymatrices(int m1,int n1,int m2,int n2,int arr1[][n1],int arr2[][n2]){
if(n1==m2){
int brr[m1][n2],sum=0,a,b,c;
for(i=0;i<m1;i++)
	{for(j=0;j<n2;j++)
		{for(c=0;c<m2;c++)
		 	{sum+=(arr1[i][c]*arr2[c][j]);}
		 brr[i][j]=sum;
		 sum=0;
		}	
	}
printf("The multiplied matrix is \n");	
printmatrix(m1,n2,brr);
}
else
{printf("Matrix multiplication is not possible");}
}
int main(){
srand(time(NULL));
int r1,r2,c1,c2;
r1=rand()%10+1;
c1=rand()%10+1;
r2=rand()%10+1;
c2=rand()%10+1;
int arr1[r1][c1];
int arr2[r2][c2];
creatematrix(r1,c1,arr1);
creatematrix(r2,c2,arr2);
printmatrix(r1,c1,arr1);
printf("\n");
printmatrix(r2,c2,arr2);
printf("\n");
multiplymatrices(r1,c1,r2,c2,arr1,arr2);
printf("\n");
system("getconf -a | grep LEVEL1_ICACHE_SIZE");
system("getconf -a | grep LEVEL2_CACHE_SIZE");
system("getconf -a | grep LEVEL3_CACHE_SIZE");
}
