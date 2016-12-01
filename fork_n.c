/* Testo: Dato un numero compreso tra 1 e 4 generare n processi figlio
   con un ciclo for.
   Stampare per ogni processo il suo pid e quello del padre.( Una stampa
   per ogni processo).

   Alunno: Cotichini Michele;
   Classe: 4° Inb;
   Data: 01/12/16             */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

main(){
       int n;
       int i;
        pid_t p;
       do{
          printf("Inserire un numero tra 1 e 4 : ");
          scanf("%d",&n);
       }while((n<1)||(n>4));
       printf("Sono il padre: %d\n", getpid());
       for(i=0;i<n;i++){
          p=fork();
          if(p==0){
          sleep(1);
          printf("Sono il figlio: %d e mio padre e': %d\n",getpid(),getppid());
          }
       }
}
~
