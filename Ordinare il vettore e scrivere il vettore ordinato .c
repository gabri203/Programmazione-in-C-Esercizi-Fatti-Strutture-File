#include <stdio.h>
#include <stdlib.h>
#define N 10
/*Leggere da un file input.txt una serie di numeri, 
inserirli in un vettore,
 ordinare il vettore e scrivere il vettore ordinato su di un file di output.*/
int main(){
	
	
	FILE *fp,*fp1;
	int numero,num;
	int i,v[N],j,tmp;
	
	if((fp=fopen("numeri.txt","w"))==NULL) {
	printf("Il file non e' stato aperto correttamente!!");
	exit(1);
}
	


for(i=0;i<N;i++){
	fscanf(fp,"%d",&v[i]);
}

for(i=0;i<N;i++){
	printf("I numeri del vettore sono =%d\n",v[i]);
}
i=0;
while(i<N-1){
	j=i+1;
	while(j<N){
		if(v[i]>v[j]){
			tmp=v[i];
			v[i]=v[j];
			v[j]=tmp;
		}
		j++;
	}
	i++;
}
for(i=0;i<N;i++){
	printf("I numeri ordinati sono=%d\n",v[i]);
	
	
}







if((fp1=fopen("output.txt","w"))==NULL){
	printf("Errore nell'appertura del file");
		exit(1);

}
for(i=0;i<N;i++){
	fprintf(fp1,"%d\n",v[i]);
}

	fclose(fp1);
	
	if((fp1=fopen("output.txt","r"))==NULL){
		printf("Errore nell'apertura del file'");
			exit(1);

	}
	while(!feof(fp1)){
		fscanf(fp1,"%d",&num);
		printf("%d\n",num);
	}
	fclose(fp);
	fclose(fp1);
	
	
}

