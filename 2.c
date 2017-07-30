#include <stdio.h>
#include <stdlib.h>

void stampa(int A[],int DIM);

int main(){
int *A;
printf("Inserire dimensione matrice\n");
int DIM;
scanf("%d",&DIM);
A=malloc(DIM*sizeof(int));
if(A==NULL){
    return 0;
}
int i;
for(i=0;i<DIM;i++){
  printf("Inserire valore di A[%d] ",i);
  scanf("%d",&A[i]);
}
stampa(A,DIM);
}

void stampa(int A[],int DIM){
int i;
for(i=0;i<DIM;i++){
    printf("%d ",A[i]);
}
}
