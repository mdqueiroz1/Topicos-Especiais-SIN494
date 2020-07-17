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
    do{
        scanf("%d",&menu1);
        if(menu1>2 || menu1<1){
            printf("Numero invalido!Insira novamente.\n");
        }
    }while (menu1>2 || menu1<1);
    //laço de repetição criado para que o usuário não coloque valores inválidos
    
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
        printf("12- Sair do programa\n");
        printf("Informe a opcao desejada:\n");
        do{
            scanf("%d", &menu2);
            if(menu2>12 || menu2<1){
                printf("Numero invalido! Insira novamente.\n");
            }
        }while(menu2>12 || menu2<1);
        //laço de repetição criado para que o usuário não coloque valores inválidos
        system("cls");
        
    }else{
        system("cls");
        printf("Feito por:\nAna Carolina Almeida Azevedo 6711\nJanaine de Fatima Ribeiro 6721\nMatheus Dias de Queiroz 5213\n");
    }

    switch (menu2){
//Switch criado para facilitar a escolha de cada parte do programa.
    
        case 1:{
       
            break;
        }

        case 2:{
            break;
        }
        case 3:{
            break;
        }
        case 4:{

        }
        case 5:{
            break;
        }
        case 6:{
            break;
        }
        case 7:{
            
            int x,y,parada,divisor,i;

            scanf("%d %d", &x, &y);

            if(x>=y){
                parada = y;
            }else{
                parada = x;
            }

            for(i=1; i<=parada; i++){
                if(x%i == 0 && y%i== 0){
                    divisor = i;
                }
            }
            printf("%d", divisor);
            
            break;
        }
        
        case 8:{
           
            float num1, num2, aux, cont=0;
            char operador;
            printf("Caso queira sair, digite c0\nInforme a operacao:(exemplo: 1+1)\n");
            do{
                if(cont==0){                        fflush(stdin);
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
    
            break;
        }
    
        case 9:{
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
            break;
        }
        case 10:{
            	int decimal;
                printf("Informe o numero a ser convertido:\n");
                scanf("%d", &decimal);
                do{
                    if(decimal-1000 >= 0){
                    printf("M");
                    decimal = decimal - 1000;
                    
                    }else{
                        if(decimal-900 >= 0){
                        printf("CM");
                        decimal = decimal - 900;
                            
                        }else{
                            if(decimal-500 >= 0){
                            printf("D");
                            decimal = decimal - 500;
                            
                            }else{
                                if(decimal-400 >= 0){
                                printf("CD");
                                decimal = decimal - 400;
                                    
                                    }else{
                                        if(decimal-100 >= 0){
                                        printf("C");
                                        decimal = decimal - 100;
                                        
                                        }else{
                                            if(decimal-90 >= 0){
                                            printf("XC");
                                            decimal = decimal - 90;
                                            
                                            }else{
                                                if(decimal-50 >= 0){
                                                printf("L");
                                                decimal = decimal - 50;
                                            
                                                }else{
                                                    if(decimal-40 >= 0){
                                                    printf("XL");                                                    
                                                    decimal = decimal - 40;
                                                
                                                    }else{
                                                        if(decimal-10 >= 0){
                                                        printf("X");
                                                        decimal = decimal - 10;
                                                    
                                                        }else{
                                                            if(decimal-9 >= 0){
                                                            printf("IX");
                                                            decimal = decimal - 9;
                                                        
                                                        }else{
                                                            if(decimal-5 >= 0){
                                                            printf("V");
                                                            decimal = decimal - 5;
                                                            
                                                            }else{
                                                                if(decimal-4 >= 0){
                                                                printf("IV");
                                                                decimal = decimal - 4;
                                                                    
                                                                }else{
                                                                    if(decimal-1 >= 0){
                                                                    printf("I");
                                                                    decimal = decimal - 1;
                                                                    
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }while(decimal != 0);
            break;
        }
        case 11:{
            break;
        }
        case 12:{
            printf("Programa finalizado com sucesso!\n");
            return 0;
        }
    }

    printf("1- Voltar ao menu principal\n2-")
    
    return 0;
}
