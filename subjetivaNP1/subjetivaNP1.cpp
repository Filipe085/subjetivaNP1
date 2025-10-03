#include <iostream>
using namespace std;

int main(){
        float vm, km_l, dist, vlr_comb, t, qtd_l, vlr_ab;

        printf("Digite a velocidade media (km/h): ");
        scanf("%f", &vm);
        printf("Digite a autonomia (km/l): ");
        scanf("%f", &km_l);
        printf("Digite a distancia (km): ");
        scanf("%f", &dist);
        printf("Digite o valor do combustivel (R$/l): ");
        scanf("%f", &vlr_comb);

        t = dist/vm;
        qtd_l = dist/km_l;
        vlr_ab = qtd_l * vlr_comb;

        if(vm > 20){
            for(int i = vm; i > 20; i = i - 20){
                km_l = km_l * 0.9;
                printf("\nAutonomia do veículo: %.2fKm/L", km_l);
            }
        }

        printf("Tempo gasto na viagem: %.2f h\n", t);
        printf("Quantidade de combustivel gasta: %.2fL\n", qtd_l);
        printf("Valor gasto com combustivel: R$ %.2f\n", vlr_ab);
        

        return 0;
}



