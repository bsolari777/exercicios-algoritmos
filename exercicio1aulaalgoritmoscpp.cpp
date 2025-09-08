
#include <stdio.h>

int main()
{
    int selecione,maiorvalor=0,valortotal=0,valor, nv, cw=0,vendas, ccarro = 0, cmoto = 0, ccaminhao = 0;
   
   
    while(cw<10){
       
       
        printf("---menu---\n");
        printf("1.vender\n");
        printf("2.total de vendas\n");
        printf("3.sair\n");
        printf("selecione : \n");
        scanf("%d",&selecione);
           
           
    switch(selecione){
       
        case 1:
       
       
        printf("---menu---\n");
        printf("carro : R$ 100 mil\n");
        printf("moto : R$ 40 mil\n");
        printf("caminhão : R$ 150 mil\n");
        printf("Qual foi o valor da transacao ?");
        scanf("%d",&valor);
       
       
        printf("Quantos carros foram vendidos?");
        scanf("%d",&vendas);
       
        ccarro= vendas + ccarro;
       
        printf("Quantos motos foram vendidos?");
        scanf("%d",&vendas);
       
        cmoto= vendas + cmoto;

        printf("Quantos caminhões foram vendidos?");
        scanf("%d",&vendas);
       
        ccaminhao= vendas + ccaminhao;
       
       
        if(valor>maiorvalor){
           
            maiorvalor = valor;
           
        }
       
        valortotal = valor + valortotal;
       
        break;
       
        case 2:
       
        nv = ccarro + cmoto + ccaminhao;
       
        printf("a maior transação foi %d \n",maiorvalor);
        printf("o numero de vendas foi %d \n",nv);
        printf("o valor total de dinheiros do dia foi %d \n",valortotal);        
       
        break;
       
        case 3:
       
        printf("terminando o programa.....");
        cw = 10;
       
        break;
       
    }
           
       
       
    }
   
   

    return 0;
}