/*Scrivere un programma che leggendo da tastiera il
numero di righe e il numero di colonne di una matrice 2D
la allochi e la inizializzi con il valore matrice[i][j]=(i+1)*(j+1)
Stampare a video la matrice ottenuta.*/

#include <stdio.h>
#include <stdlib.h>


int main(){
int righe,colonne;
printf("Inserire numero di righe e colonne");
scanf("%d%d",&righe,&colonne);
int A[righe][colonne];
int i,j;
for(i=0;i<righe;i++){
    for(j=0;j<colonne;j++){
        A[i][j]=(i+1)*(j+1);
    }
}
for(i=0;i<righe;i++){
    for(j=0;j<colonne;j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
}
}
