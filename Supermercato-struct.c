#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  N 100
#define dim 5


/*Definire una struttura con le seguenti informazioni
Cod_Art intero
Descriz  char(20)
prezzo float
qta intero

 Caricare una tabella di N elementi di tale struttura (N<100)

 Visualizzare tutte le righe della tabella

Trovare l'articolo con il prezzo maggiore

Data in input la descrizione di un articolo, verificare che esso esista nella tabella.

Per tutti gli articoli con quantità > 100 aumentare  del 10% il prezzo

Calcolare il valore del magazzino

*/

//cose da fare ==> (calcolare il totale monetario di tutti prodotti in vendita)

struct tabella {
	
	int cod_art;
	char descrizione[20];
	float prezzo;
	int quantita;
 	//float valore_magazzino;
 	float totale_prezzo;
};
int main(){
	
	struct tabella tabella[N];
	
	int i;

	char cerca[20];
	int massimo=0;
	int aumento_percentuale;
    //float percentuale;
//	float totale_aumento_percentuale=0;
	float valore_magazzino;

	i=0;
  printf("inserire il - codice articolo - la quantita - il prezzo - la descrizione'\n");  
  for(i=0;i<dim;i++){
  		printf("Magazzino n. %d = ",i+1);
  		printf("\nInserisce codice dell'articolo  = ");
		scanf("%d",&tabella[i].cod_art);
		printf("\nInserisce la quantita dell'articolo  = ");
		scanf("%d",&tabella[i].quantita);
		printf("\nInserisce il prezzo  = ");
		scanf("%f",&tabella[i].prezzo);
		printf("\nInserisce la descrizione dell'articolo   = ");
		scanf("%s",tabella[i].descrizione);
		
  	
  }

	for(i=0;i<dim;i++){
		if(tabella[massimo].prezzo < tabella[i].prezzo)
			massimo=i;	
		}
			printf("L'articolo con il prezzo maggiore e'= %.2f $\n",tabella[massimo].prezzo);
			
			
			
		printf("\nInserisce la descrizione per verificare se esiste = ");
		scanf("%s",cerca);
		
		for(i=0;i<N;i++){
			if(strcmp(cerca,tabella[i].descrizione)==0){
				printf("La descrizione inserita esiste!! ==> %s (il codice_articolo)==> %d \n",tabella[i].descrizione,tabella[i].cod_art);
				
			}
		}
	
	for(i=0;i<dim;i++){
		
		if(tabella[i].quantita > 100 ){
		
		
		tabella[i].prezzo=tabella[i].prezzo+(tabella[i].prezzo*10/100);    // (10/100)*quantitaX = risultato ----> risultato percentuale + quantitaX 
		
		
		printf("\nIl risultato degli'articoli che sono stati aumentati del 10 percento sono %.2f \n",tabella[i].prezzo);
		
	}
//	printf("\nIl risultato degli'articoli che sono stati aumentati del 10 percento sono %.2f \n",tabella[i].totale_aumento_percentuale);
	}
	
		for(i=0;i<dim;i++){
		
		printf("\ncodice = %d - quantita = %d - descrizione'= %s - prezzo + 10 percento = %.2f \n", tabella[i].cod_art,tabella[i].quantita, tabella[i].descrizione, tabella[i].prezzo);


	}
		for(i=0;i<N;i++){
			valore_magazzino=valore_magazzino+(tabella[i].prezzo*tabella[i].quantita);

			
	
		}
			printf("Il valore totale del magazzino e' %.2f ",valore_magazzino);


			return 0;
	}

	
	
	
	
	

