#include<stdio.h>
#define M 4
#define N 5
#define n 4
/*Esercizio n.1
Su di un file di testo, per ogni riga sono registrate i voti di n(4) alunni in m(5) materie.
Caricare i dati su di una matrice, Per ogni alunno calcolare la media dei voti e riscrivere il tutto su di vettore di n elementi.
 Ordinare il vettore e riscriverlo su di un file di output.

*/
int main(){
	FILE *fp;
	if((fp=fopen("output.txt","r")==NULL)){
		printf("errore");
	}
	float matrice[N][M];
	int i,j;
		float vettore[N];
	printf("\nInseriamo i voti nella matrice \n");
	
	for(i=0;i<N-1;i++)
	
	    for(j=0;j<M-1;j++) {
	    	
		printf("Studente %d \tmateria %d: ",i,j);
		scanf("%f", &matrice[i][j]);
	
	    }
				
//calcolo media 
	for(j=0;j<M;j++) {
		
	    matrice[N-1][j]=0;
	    
	    for(i=0;i<N-1;i++)
	    
	       matrice[N-1][j]=matrice[N-1][j]+matrice[i][j];
	       
	    matrice[N-1][j]=matrice[N-1][j]/(N-1);
	}
		
	//calcolo media studente
	for(i=0;i<N-1;i++){
		
	     matrice[i][M-1]=0;
	     
	     for(j=0;j<M-1;j++)
		  
		matrice[i][M-1]=matrice[i][M-1]+matrice[i][j];
		
	     matrice[i][M-1]=matrice[i][M-1]/(M-1);
	     
	  
	}
		
		
//stampiamo
fp=fopen("output.txt","w");
	for (i=0;i<N;i++) {	
	
	    fprintf(fp,"\n");
	    
	    for(j=0;j<M;j++) 
	    
	      fprintf(fp,"\t'%.2f", matrice[i][j]);				
	}	
}			
	
