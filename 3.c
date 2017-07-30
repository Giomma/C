#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
printf("Inserire un numero");
int num;
scanf("%d",&num);
double *A;
A=malloc(num*sizeof(double));
if(A==NULL){
    return 0;
}
int i;
for(i=0;i<num;i++){
    *(A+i)=pow(2,i);
}
for(i=0;i<num;i++){
    printf("%f ",*(A+i));
}
}

