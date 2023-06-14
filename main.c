#include <stdio.h>
#include <stdlib.h>

main(){
    for(;;){
        int vet[10],x,y,aux;
        for(x=0;x<10;x++){
            printf("Digite um numero na posicao %d\n",x);
            scanf("%d",&vet[x]);
        }
        for(x=0;x<10;x++){
            for(y=x+1;y<10;y++){
                if(vet[x]>vet[y]){
                    aux = vet[x];
                    vet[x] = vet[y];
                    vet[y] = aux;
                }
            }
        }
        for(x=0;x<10;x++){
            printf("posicao %d = %d\n",x,vet[x]);
        }
        printf("Deseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
        break;
        }
    }
}
