#include <stdio.h>


int main(){
        float vm, km_l, dist, vlr_comb, t, qtd_l, vlr_ab, gas, tank, tank_qty, rest;
        int  tank_quest;
       

        printf("Digite a velocidade media (km/h): ");
        scanf("%f", &vm);
        printf("Digite a autonomia (km/l): ");
        scanf("%f", &km_l);
        printf("Digite a distancia (km): ");
        scanf("%f", &dist);
        printf("Digite o valor do combustivel (R$/l): ");
        scanf("%f", &vlr_comb);
        printf("Qual o tamanho disponivel no tanque? ");
        scanf("%f", &tank);
        printf("Seu tanque está cheio?\n Sim - 1\t Nao-2");
        scanf("%i", &tank_quest);
        
        
        t = dist/vm; 

        if(vm > 20){
            for(int i = vm; i > 20; i = i - 20){
                km_l = km_l * 0.9;
                
                }
            }
    
            qtd_l = dist/km_l;
            vlr_ab = qtd_l * vlr_comb;

        if(tank_quest == 2){ // caso não estiver cheio ira perguntar quanto tem no tanque
            printf("Quanto tem disponivel? (L)  ");
            scanf("%f", &tank_qty);
            gas = tank - tank_qty;
            printf("vc ira precisar de mais %.2f para encher o tanque \n", gas);// quanto precisa para encher o tanque
            
                float rest =  qtd_l - tank_qty; // ira resultar em quanto ira faltar de gasolina para viagem
                int stops = 0;// paradas
            
            if(tank_qty < qtd_l){
                stops =  (int)ceil(rest/tank);
                printf("vc ira para %d \n", stops);
            } 
                else{
                    printf("Não precisa de paradas\n");
                    }

     }
     else{
        printf("Tanque Cheio");
     }     
     
     
            printf("\nAutonomia do veículo: %.2fKm/L\n", km_l);          
            printf("\nTempo gasto na viagem: %.2f h\n", t);
            printf("Quantidade de combustivel gasta: %.2fL \n", qtd_l, );
            printf("Valor gasto com combustivel: R$ %.2f\n", vlr_ab);
            

        return 0;
   
}