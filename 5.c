/*Scrivere un programma che legga da tastiera il numero di righe
e il numero di colonne di una matrice 2D, e attraverso
l’implementazione di funzioni specifiche provveda a:
• allocare la matrice nel segmento heap
• inizializzarla con il valore matrice[i][j]=rand();
• Stampare a video la matrice ottenuta.
• Produrre il vettore dei massimi di riga stampandolo a video
• eliminare tutte le strutture dinamiche definite */

#include <stdio.h>
#include <stdlib.h>
int ** allocazz(int righe,int colonne);
void inizializza(int **A,int righe,int colonne);
void stampa(int **A,int righe,int colonne);



int main(){
printf("inserire righe e colonne");
int righe,colonne;
scanf("%d%d",&righe,&colonne);
int **A;
A=allocazz(righe,colonne);
inizializza(A,righe,colonne);
stampa(A,righe,colonne);

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
        A[i][j]=rand();

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
