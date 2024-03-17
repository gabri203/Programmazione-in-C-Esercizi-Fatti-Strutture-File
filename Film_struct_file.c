#include <stdio.h>
#include <stdlib.h>
#define N 3
/*Esercizio n.1
Su di un file di testo, per ogni riga sono registrate i voti di n(4) alunni in m(5) materie.
Caricare i dati su di una matrice, Per ogni alunno calcolare la media dei voti e riscrivere il tutto su di vettore di n elementi.
 Ordinare il vettore e riscriverlo su di un file di output.

Esercizio n.2
I dati relativi a 5 film sono memorizzati su di un file di input. Per ogni film si hanno le seguenti informazioni:
titolo
autore
incasso
nazionalità
Scrivere un algoritmo che dopo aver caricato i dati su di una tabella calcoli:
stampa dell’incasso medio dei film di un determinato autore ==>> media incasso dei film dell'autore(inserisco la media di solo will smith)
(nel programma inserisco varie volte i films di will smith e prendo solo i suoi)

stampa dei dati relativi a un determinato film il cui titolo è fornito in input ==>> Inserisce il film da stampare 
stampa dei dati relativi al film straniero che ha ottenuto il maggior incasso ==>> film strniero con maggiore incasso
scrivere su di un file di output i dati relativi al film con incasso maggiore ==>> film con incasso maggiore in tutta la tabella
*/

struct film {
	
char titolo[50];
char autore[50];
float incasso;
char nazionalita[50];	
	
};
int main (){
FILE *fp,*fp1;

if((fp=fopen("input.txt","r"))==NULL){
	printf("Errore");
	
}

if((fp1=fopen("output.txt","w"))==NULL) {
	printf("Il file non e' stato aperto correttamente!!");
}
	struct film film[N];
	int i;
    int k;
	int massimo=0;
	char cerca[50];
	float somma=0,media;
	char cerca_autore[50];
	for(i=0;i<N;i++){
	printf("\nInserisce il titolo del film = ");
	scanf("%s",film[i].titolo);
	printf("\nInserisce la nazionalita del film = ");
	scanf("%s",film[i].nazionalita);
	printf("\nInserisce l'incasso del film = ");
	scanf("%f",&film[i].incasso);
	printf("\nInserisce l'autore del film = ");
	scanf("%s",film[i].autore);
	
}
printf("Inserisce il titolo del film da stampare nella tabella =");
scanf("%s",cerca);
for(i=0;i<N;i++){
	if(strcmp(cerca,film[i].titolo)==0){
		
		fprintf(fp1,"\nIl Titolo del film e'%s",film[i].titolo);
		fprintf(fp1,"\nLa nazionalita' del film e'%s",film[i].nazionalita);
		fprintf(fp1,"\nl'incasso del film e'%f",film[i].incasso);
		fprintf(fp1,"\nL'autore del film e' %s",film[i].autore);
	}
	
	
	
	
	
}
/*for(i=0;i<N;i++){
	if(film[massimo].incasso < film[i].incasso)
	massimo=i;
}
fprintf(fp1,"\nIl film straniero con maggiore incasso e' %d  di nazionalita' %s ",film[massimo].incasso, film[massimo].nazionalita);
*/
printf("Inserisce l'autore per trovare il suo incasso medio =");
scanf("%s",cerca_autore);
k=0;
for(i=0;i<N;i++){
if(strcmp(cerca_autore,film[i].autore)==0){

somma=somma+film[i].incasso;
media=somma/N;
k++;
}
}
		fprintf(fp1,"\nLa media degli incassi totali e'= %f",media);
		
		
		fclose(fp);
		fclose(fp1);
	}
	

	
	
	
	
	
	
	
	

