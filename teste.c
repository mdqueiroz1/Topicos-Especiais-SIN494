#include <stdio.h>
int main(){
    float num1, num2, aux, cont=0;
    char operador;
    printf("Caso queira sair, digite c0\nInforme a operacao:\n");
    do{
        if(cont==0){
            fflush(stdin);
            scanf("%f %c %f", &num1, &operador, &num2);
        }else{
            fflush(stdin);
            scanf("%c %f", &operador, &num2);
        }

        
        
        switch (operador){
        
            case '+':{
               
                if(cont == 0)
                    aux = num1 + num2;
                else
                    aux += num2;
               
                break;
            }
            
            case '-':{
                if(cont == 0)
                    aux = num1 - num2;
                else
                    aux -= num2;
                break;
            }
            
            case '/':{
                
                if(num2 == 0){
                    printf("Erro, nao e possivel fazer divisao com 0.\n");
                    break;
                }
                
                if(cont == 0)
                    aux = num1 / num2;
                else
                    aux = aux / num2;
                
                break;
            }

            case '*':{
                
                if(cont == 0)
                    aux = num1 * num2;
                else
                    aux *= num2;

                break;
            }
        }
        cont = 1;
        printf("%.2f", aux);
    }while(operador != 'c');
    return 0;
}
