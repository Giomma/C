#include <stdio.h>
#include <stdlib.h>

int ** allocazz(int righe,int colonne);
void inizializza(int **A,int righe,int colonne);
int somma_diag1(int **m,int rows,int columns);
int somma_diag2(int **m,int rows,int columns);
void stampa(int **A,int righe,int colonne);

int main(){
int **m;
int rows,columns;
scanf("%d",&rows);
scanf("%d",&columns);
m=allocazz(rows,columns);
inizializza(m,rows,columns);
int sum=somma_diag1(m,rows,columns);
int sum_2=somma_diag2(m,rows,columns);
stampa(m,rows,columns);
if(sum==sum_2){
    printf("MAGICA");
}else{
printf("NON MAGICA");
}
free(m);
}



int somma_diag1(int **m,int rows,int columns){
int sum=0;
int i,j;
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        if(i==j){
            sum=sum+*(*(m+i)+j);
        }
    }
}
return sum;
}

int somma_diag2(int **m,int rows,int columns){
int sum=0;
int i,j;
for(i=0;i<rows;i++){
    if(columns>=0){
    sum=sum+m[i][columns-1];
    columns--;
    }
    }

return sum;
}


int ** allocazz(int righe,int colonne){
int **m;
m=(int **)malloc(righe*sizeof(int *));
int i;
for(i=0;i<righe;i++){
    *(m+i)=(int*)malloc(colonne*sizeof(int));
}
return m;
}

void inizializza(int **A,int righe,int colonne){
int i,j;
for(i=0;i<righe;i++){
    for(j=0;j<colonne;j++){
        A[i][j]=i+j;

    }
}
}

void stampa(int **A,int righe,int colonne){
    int i,j;
for(i=0;i<righe;i++){
    for(j=0;j<colonne;j++){
        printf("%d ",*(*(A+i)+j));
    }
    printf("\n");
}
}

