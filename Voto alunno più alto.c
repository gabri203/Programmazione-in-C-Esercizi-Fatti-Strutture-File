#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct {
  char cognome[20];     
  char nome[20];        
  int  anno_nascita;    
  int  italiano;       
  int  matematica;         
  int  informatica;     
} studente;


int votiAlti(studente classe[], float mediaVoti[],int n){
        int i,maxM;
  
  	for (i=0; i<n; i++){
	 	mediaVoti[0]+=classe[i].italiano;
		mediaVoti[1]+=classe[i].matematica;
	 	mediaVoti[2]+=classe[i].informatica;
  	}
    
  	for (i=0; i<3; i++)
		mediaVoti[i]/=n;

  	maxM=0;
  	for (i=1; i<3; i++)
    	        if(mediaVoti[i]>mediaVoti[maxM])
			maxM=i;
			 
  	return maxM;
}

int main(){
	int i,n,materia;
 	studente classe[20];
 	char materie[3][15]={"Italiano","Matematica","Informatica"};
 	float mediaVoti[3]={0.0};

	printf("Quanti studenti?:");
	scanf("%d", &n);

 	for (i=0; i<n; i++){
		printf("\nStudente:%d", i+1);
		printf("\nCognome:");
		scanf("%s", classe[i].cognome);
		printf("Nome:");
		scanf("%s", classe[i].nome);	
		printf("Voto di Italiano:");
		scanf("%d", &classe[i].italiano);
		printf("Voto di Matematica:");
		scanf("%d", &classe[i].matematica);
		printf("Voto di Informatica:");
		scanf("%d", &classe[i].informatica);	
 	}
 	
	materia=votiAlti(classe,mediaVoti,n);
	printf("\nMateria con media piu alta:%s",  materie[materia]);
	printf("\nMedia voti:%3.2f", mediaVoti[materia]);
	
	return 0;
}
