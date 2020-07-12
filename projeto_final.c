#include <stdio.h>
#include <stdlib.h>

int main(){

    int menu1, menu2;

    printf("                           __ __ __________   ____  ______             \n");
    printf("                          / //_//  _/_  __/  / __ \\/ ____/             \n");
    printf("                         / ,<   / /  / /    / / / / __/                \n");
    printf("                        / /| |_/ /  / /    / /_/ / /___                \n");
    printf("    ________________  _/// |///__/ /// ___///////___///________   _____\n");
    printf("   / ____/ ____/ __ \\/ __ \\/   |  /  |/  / ____/ | / /_  __/   | / ___/\n");
    printf("  / /_  / __/ / /_/ / /_/ / /| | / /|_/ / __/ /  |/ / / / / /| | \\__ \\ \n");
    printf(" / __/ / /___/ _, _/ _, _/ ___ |/ /  / / /___/ /|  / / / / ___ |___/ / \n");
    printf("/_/   /_____/_/ |_/_/ |_/_/  |_/_/  /_/_____/_/ |_/ /_/ /_/  |_/____/  \n");
    printf("Opcoes:\n1- Menu principal\n2-Creditos\n");
    scanf("%d",&menu1);

    if(menu1 == 1){
        system("cls");  
        
        printf("  _ __ ___   ___ _ __  _   _ \n");
        printf(" | '_ ` _ \\ / _ \\ '_ \\| | | |\n");
        printf(" | | | | | |  __/ | | | |_| |\n");
        printf(" |_| |_| |_|\\___|_| |_|\\__,_|\n");
        printf("1- Verificar se um numero e primo\n");
        printf("2- Calcular area de uma figura\n");
        printf("3- Calcular o enesimo elemento da sequencia de Fibonacci\n");
        printf("4- Calcular o fatorial de um determinado numero\n");
        printf("5- Calcular o valor de x elevado a y\n");
        printf("6- Calcular a media de n numeros inseridos\n");
        printf("7- Calcular maximo divisor comum entre dois numeros\n");
        printf("8- Calculadora simples\n");
        printf("9- Calcular a diferenca entre duas datas\n");
        printf("10- Converter numero para numero romano\n");
        printf("11- insira uma ferramenta interessante aqui\n");

        scanf("%d", &menu2);
    }
        system("cls");
    switch (menu2){
            
        case 1:{
            int numero;
            
            printf("Informe o numero:\n");
            
            scanf("%d", &numero);
            
            if(numero == 2){
                printf("%d e numero primo\n", numero);
            }else{
                if( numero %2 == 0 || 
                    numero %3 == 0 || 
                    numero %5 == 0 ||
                    numero %7 == 0 ||
                    numero %11 == 0  ){
                    printf("%d nao e numero primo\n", numero);
                }else{
                    printf("%d e numero primo\n", numero);
                }
            }        
            break;
        }

        case 2:{
            break;
        }
        case 3:{
            break;
        }
        case 4:{
            int j,i,total=1;

            printf("Insira o numero:");
            scanf("%d", &i);

            for(j=0;j<i;j++){
                total *= (j+1);
            }
            printf("%d", total);
            break;
        }
        case 5:{
            break;
        }
        case 6:{
            break;
        }
        case 7:{
            break;
        }
        case 8:{
            break;
        }
        case 9:{
            break;
        }
        case 10:{
            break;
        }
        case 11:{
            break;
        }
    }
    
    return 0;
}