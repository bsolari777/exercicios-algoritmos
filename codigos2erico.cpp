#include <stdio.h>

int main () {
 	
 	
int voltas=15,atletas;
float tempo=0,freqcard=0,tempoprova=0,vmedia,cmedia,freq,maiorfreqcard;

printf("quantos atletas vao correr: \n");
scanf("%d",&atletas);
for(int j=1;j<=atletas;j++)


	for(int i= 1;i<=voltas;i++ ){
		printf(".. volta %d .. \n", i);
	
		printf ("digite o tempo da volta (segundos):\n ");
		scanf("%f", &tempo);
		tempoprova =tempo+tempoprova;
		
	printf("digite a frequencia cardiaca desta volta: \n");
	scanf("%f",&freq);
	freq+=freqcard;
    if(freq>maiorfreqcard){
	
	 maiorfreqcard=freq;
	}
    
    printf("digite a velocidade desta volta km/h: \n");
    scanf("%f",&vmedia);

    cmedia+=vmedia;
   

	}
	cmedia=cmedia/15;
	
	printf("tempo total da prova:%.2fS \n ",tempoprova);
 	printf("maior frequencia cardiaca foi: %.2fRBPM\n",maiorfreqcard);
 	printf("velocidade media foi: %.2fKM/H \n",cmedia);

 	
 	
 	
 	
 	
 	
 		
return 0; 	
 }

