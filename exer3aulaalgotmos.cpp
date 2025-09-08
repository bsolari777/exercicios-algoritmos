#include <stdio.h>

int main()
{
    int mediadia,diamaior=1,diamenor=1,maiort=0,menort=0,mes,medicao,contadormedicao = 0;
   
   

       
        printf("Diga o mes em valor numerico, de 1 a 12:\n");
        scanf("%d",&mes);
       
       
    for(int j = 1; j<31 ; j++){
       
       
        for(int i = 1; i<13;i++){
           
            printf("diga a %d medicao do dia %d : \n",i,j);
            scanf("%d",&medicao);
           
            contadormedicao = medicao + contadormedicao;
           
            if(medicao>maiort){
               
                maiort = medicao;
                diamaior = j;
               
            }
           
            if(medicao<menort){
               
                menort = medicao;
                diamenor = j;
               
            }
           
           
        }
       
        mediadia = contadormedicao/12;
       
        printf("a media do dia foi: %d\n",mediadia);
    }    
       
        printf("o dia com maior temp foi %d e o dia com menor temp foi %d\n",diamaior,diamenor);
       

    return 0;
}
