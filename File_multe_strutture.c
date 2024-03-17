#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
#define M 100
struct tabella {
	
	char numero_targa[50];
	char tipologia_veicolo[50];
	float velocita_registrata;
	
	
	
};
int main(){
	FILE *fp,*fp1;
	char riga_del_file[50];
  fp1=fopen("multe.txt","r");   
  if(fp1){
  	while(!feof(fp1)){
	  
	  fgets(riga_del_file,50,fp1);
	printf("%s\n",riga_del_file);
}
}
if((fp=fopen("multa.txt","w"))==NULL) {
	printf("Il file non e' stato aperto correttamente!!");
}
	
	
	
	struct tabella tabella[M];
int i;
char cerca_veicolo[20];
for(i=0;i<N;i++){
	printf("\nInserisce il numero di targa del veicolo n� %d = ",i+1);
	scanf("%s",tabella[i].numero_targa);
	
	printf("\nInserisce la tipologia del veicolo n� %d = ",i+1);
	scanf("%s",tabella[i].tipologia_veicolo);
	
	printf("\nInserisce la velocita del veicolo n� %d = ",i+1);
	scanf("%f",&tabella[i].velocita_registrata);	
	
	fprintf(fp,"numero targa veicolo=%s - tipologia veicolo=%s - velocita' registrata=%.2f k/h \n",tabella[i].numero_targa,tabella[i].tipologia_veicolo,tabella[i].velocita_registrata );
}

 	printf("\nInserisce il veicolo da cercare nella tabella = ");
  	scanf("%s",cerca_veicolo);
  	
  for(i=0;i<N;i++){

  	if(strcmp(cerca_veicolo,tabella[i].tipologia_veicolo)==0){
  		fprintf(fp,"\nIl veicolo esiste ed il numero(targa) = %s",tabella[i].numero_targa);
	  }
	  
  }	

	for(i=0;i<N;i++){
		
	if(tabella[i].velocita_registrata > 10){
		
		fprintf(fp,"\nMulta di 25$ al proprietario del veicolo = %s e numero di targa= %s",tabella[i].tipologia_veicolo,tabella[i].numero_targa);
	}	
}
		for(i=0;i<N;i++){
		
	if(tabella[i].velocita_registrata > 10 && tabella[i].velocita_registrata > 20){
		
		fprintf(fp,"\nMulta di 50$ al proprietario del veicolo = %s e numero di targa= %s",tabella[i].tipologia_veicolo,tabella[i].numero_targa);
	}
}
	for(i=0;i<N;i++){
		
	if(tabella[i].velocita_registrata > 20){
		
		fprintf(fp,"\nMulta di 150$ al proprietario del veicolo = %s e numero di targa= %s",tabella[i].tipologia_veicolo,tabella[i].numero_targa);
	}		
		
		
	}
//ATTENZIONE IL RISULTATO DI QUESTO PROGRAMMA � STATO STAMPATO  DENTRO IL FILE(multe.txt).
	fclose(fp);
	fclose(fp1);
}

