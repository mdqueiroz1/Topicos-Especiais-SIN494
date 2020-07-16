#include <stdio.h>
int main(){

    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    int dia3, mes3, ano3;
    int dataEmDias1, dataEmDias2, diferenca;
    char barra1, barra2;
    /*
    foi utilizado uma variavel char como uma maneira de retirar as barras 
    presentes na entrada de dados. recebendo assim apenas os numeros.
    foi considerado todos os meses com 30 dias para fazer o calculo.
    */
    printf("Informe a data 1, no formato DD/MM/AAAA:\n");
    do{
        
        scanf("%d %c %d %c %d", &dia1, &barra1, &mes1, &barra2, &ano1);
        
        if(dia1 > 30 || mes1 > 12 || dia1 < 1 || mes1 < 1 || ano1 < 1){
            printf("Data invalida, insira novamente!\n");
        }
    
    }while(dia1 > 30 || mes1 > 12 || dia1 < 1 || mes1 < 1 || ano1 < 1);
    
    
    printf("Informe a data 2, no formato DD/MM/AAAA:\n");
    do{
        
        fflush(stdin);
        
        scanf("%d %c %d %c %d", &dia2, &barra2, &mes2, &barra2, &ano2);
        
        if(dia2 > 30 || mes2 > 12 || dia2 < 1 || mes2 < 1 || ano2 < 1){
            printf("Data invalida, insira novamente!\n");
        }
    
    }while(dia2 > 30 || mes2 > 12 || dia2 < 1 || mes2 < 1 || ano2 < 1);
    
    //conversão de data pra dias
    dataEmDias1 = dia1;
    dataEmDias1 += mes1 * 30;
    dataEmDias1 += ano1 * 365;

    dataEmDias2 = dia2;
    dataEmDias2 += mes2 * 30;
    dataEmDias2 += ano2 * 365;
    
    diferenca = dataEmDias2 - dataEmDias1;
    /*
    if utilizado para caso a data seja informada de outra maneira, 
    não informando dados negativos na saida.
    */
    if(diferenca < 0){
        diferenca = diferenca * -1;
    }
    
    ano3 = diferenca / 365;
	dia3 = diferenca % 365;
	
	mes3 = dia3 / 30;
	dia3 = dia3 % 30;

    printf("Dias:%d\nMeses:%d\nAnos:%d\n", dia3, mes3, ano3);

    return 0;
}
