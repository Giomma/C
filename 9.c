/*Definire una funzione ricorsiva che prende in ingresso un array di char,
e un intero che indica la lunghezza dell'array. La funzione deve restituire
1 se la stringa e' palindroma 0 altrimenti. Una stringa si dice palindroma
se leggendo da destra a sinistra o viceversa la stringa rimane sempre uguale.
 (Creare la funzione in modo che sia tail recursive eventualmente anche
  aggiungendo parametri alla funzione se necessario)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindroma(char *s,int DIM,int size,int count);
char * cancellaspazi(char * s,int DIM);



int main(){
char *s;
s=NULL;
s=(char*)malloc(100*sizeof(char));
scanf("%[^\n]%*c",s);
char *stringa;
int lunghezza=strlen(s);
stringa=cancellaspazi(s,lunghezza);
int nuovalun=strlen(stringa);
palindroma(stringa,nuovalun,nuovalun-1,0);



}




int palindroma(char *s,int DIM,int size,int count){
    if(size==0 && count==DIM-1){
        return 1;
    }
    if(s[count]!=s[size]){
        return 0;
    }
palindroma(s,DIM,size-1,count+1);
}


char * cancellaspazi(char * s,int DIM){
int i,d;
char *temp;
temp=(char*)malloc(DIM*sizeof(char));
i=0;
d=0;
while( s[i] != '\0'){
    if(s[i]!=' '){
        temp[d]=s[i];
        d++;
        i++;
    }else{
    i++;
    }

}
temp[d]= '\0';
printf("\n%s",temp);
return temp;
}
