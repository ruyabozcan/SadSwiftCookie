#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  
  int *a2;
  int *reverse(int a[],int n);
  a2=reverse(a,10);
  for(int i=0;i<10;i++)
    printf("%d ",a2[i]);
  free(a2);  
  printf("\nAfter free the memory:");
  for(int i=0;i<10;i++)
    printf("%d ",a2[i]);

  return 0;
}

int *reverse(int a[],int n){
  int *a2=(int*)malloc(n*sizeof(int)); 
  for(int i=0,j=n-1;i<n;i++,j--)
        a2[i]=a[j];
  
  return a2;    
}