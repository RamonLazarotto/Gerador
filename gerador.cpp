#include <stdio.h>
#include <stdlib.h>	// necess?rio p/ as fun??es rand() e srand()
#include<time.h>	//necess?rio p/ fun??o time()

int main(void) {
  
  int i;
  
  printf("Gerando 6 valores aleatorios:\n\n");
  
  srand(time(NULL));	/* A fun??o srand (x) define a semente do algoritmo do gerador de n?meros
						   aleat?rios usado pela fun??o rand ().
						   
						   srand(time(NULL)) inicializa	 o gerador de n?meros aleat?rios
    				       com o valor da fun??o time(NULL). Este por sua vez, ? calculado
  	  	  	  	  	  	   como sendo o total de segundos passados desde 1 de janeiro de 1970
    					   at? a data atual.
  	  	  	  	  	  	   Desta forma, a cada execu??o o valor da "semente" ser? diferente. 
  	  	  	  	  	    */
  	  	  	  	  	     
  for (i=0; i < 06; i++) {
    
	// gerando valores aleat?rios na faixa de 0 a 60
    printf("%d ", rand() % 60);
  
  }
  printf("\n");
  return 0;
}
