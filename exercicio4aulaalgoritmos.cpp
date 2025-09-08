#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	
int dado1,dado2,contador,sair=1,pontos,cpontos=0,maiorpt=-5;
	
srand(time(NULL));
	
while(sair!=0 ) {
	printf ("para sair do jogo aperte 0 para jogar aperte 1:\n" );
	scanf ("%d", &sair);
	printf("RESULTADO POS FIM DO JOGO \n"); 
	printf("\n");
	
	if(sair==0){
	printf("saindo do jogo...\n ");
	break;
	

}

dado1=rand() %6 +1;
dado2=rand() %6 +1;	

contador= dado1 + dado2;

	
if(contador== 7 || contador== 11)	{
pontos=5;
cpontos=pontos+cpontos;	
}	
	
else if(contador== 2 || contador== 3 ||contador== 12) {
pontos= -2;	
cpontos= pontos + cpontos;	
}
	
else{
pontos=contador;
cpontos += pontos; 
}	

if(maiorpt<pontos){
maiorpt=pontos;
}	
	
}
printf("ultima jogada dos dados: dado 1= %d, dado 2= %d, soma= %d \n", dado1,dado2,contador);
	
printf("maior pontuacao em um unico lancamento %d \n", maiorpt);	
printf("pontos acumulados: %d\n", cpontos);	
	
	
	return 0;
}