#include <stdio.h>
#include <stdlib.h>
//Universidade Anhanguera - Unidade 3
//Cidade de Campinas - SP
//Orientador da ATPS: Professor Michel Fontana
//@utor: Luis Henrique Chagas Leite
//@utor: Michel Gomes de Souza
//@utor: Marcelo Augusto Galante Rodrigues

main(){
    /*declaracao das variaveis*/
       float v1, v2,vfinal;
       char opm, a;

       a='c';/*atribui um valor para setar o while sempre ativo (1) ate que o usuario queira sair*/
       /*Inicio do laço while*/
       while (a=='c'||a=='C') {
            /*Menu da calculadora*/
            printf("\n------------------------------------");
            printf("\n\t    CALCULADORA");
            printf("\n------------------------------------");
            printf("\n---------MENU DE OPERACOES----------");
            printf("\n\t+ - adicao");
            printf("\n\t- - subtracao");
            printf("\n\t* - multiplicacao");
            printf("\n\t/ - divisao");
            printf("\n\t%% - MOD");
            printf("\n------------------------------------\n\n");
            /*Fim do menu*/
            printf("\nEscolha a operacao desejada: ");
            scanf(" %c",&opm);/*faz a leitura do caracter digitado pelo usuario coforme menu da calculadora*/

                            /*Inicio do switch*/
                             switch (opm){
                                    case '+':
                                        printf("\n\tOpcao escolhida = %c  ADICAO\n", opm);
                                        printf("\nDigite o primeiro numero: ");
                                        scanf("%f",&v1);
                                        printf("\nDigite o segundo numero: ");
                                        scanf("%f",&v2);
                                        vfinal=v1+v2;
                                        printf("\n\t%.1f + %.1f = %.1f\n",v1,v2,vfinal);/*valores definidos para ser apresentado com 1 casa decimal*/
                                        break;
                                    case '-':
                                        printf("\n\tOpcao escolhida = %c  SUBTRACAO\n", opm);
                                        printf("\nDigite o primeiro numero: ");
                                        scanf("%f",&v1);
                                        printf("\nDigite o segundo numero: ");
                                        scanf("%f",&v2);
                                        vfinal=v1-v2;
                                        printf("\n\t%.1f - %.1f = %.1f\n",v1,v2,vfinal);
                                        break;
                                    case '*':
                                        printf("\n\tOpcao escolhida = %c  MULTIPLICACAO\n", opm);
                                        printf("\nDigite o primeiro numero: ");
                                        scanf("%f",&v1);
                                        printf("\nDigite o segundo numero: ");
                                        scanf("%f",&v2);
                                        vfinal=v1*v2;
                                        printf("\n\t%.1f * %.1f = %.1f\n",v1,v2,vfinal);
                                        break;
                                    case '/':
                                        printf("\n\tOpcao escolhida = %c  DIVISAO\n", opm);
                                        printf("\nDigite o primeiro numero: ");
                                        scanf("%f",&v1);
                                        printf("\nDigite o segundo numero: ");
                                        scanf("%f",&v2);
                                        /*validacao para evitar que aconteca divisão por 0 zero*/
                                            if (v2==0){
                                                printf("\n\tErro!!! Divisor igual a zero!!!\n");
                                            }
                                            else{
                                                vfinal=v1/v2;
                                                printf("\n\t%.0f / %.0f = %.0f\n",v1,v2,vfinal);
                                            }
                                        break;/*fim da validaçao*/

                                    case '%':
                                        printf("\n\tOpcao escolhida = %c  MOD - Resto da Divisao\n", opm);
                                        printf("\nDigite o primeiro numero: ");
                                        scanf("%f",&v1);
                                        printf("\nDigite o segundo numero: ");
                                        scanf("%f",&v2);
                                        vfinal=(int)v1 % (int)v2; /*como estamos trabalhando com variaveis float,
                                        devemos transformar elas em inteiros para calcular MOD.
                                        O MOD (resto da divisaão) funciona apenas para valores int*/
                                        printf("\n\tO Resto da divisao entre %.1f e %.1f = %.1f\n",v1,v2,vfinal);
                                        break;


                                    /*bloco para identificar entrada de operacao errada pelo usuario*/

                                    default: system("cls"); printf("\n\n\tOperador invalido\n\n");
                                    break;

                                    }/*fim do switch*/
                         /*Interagem com o usuario para continuar ou sair*/
                         printf("\nDeseja uma nova operacao? \nC(continuar) S(sair): ");
                         scanf(" %c",&a);
                         /*Bloco de saida do sistema*/
                         if(a=='S'||a=='s'){
                            system("cls");
                            printf("\n\n\tObrigado por utilizar nossa Calculadora\n\n\tVolte Sempre!!!\n");
                            printf("\n\tPROJETO ATPS - CALCULADORA\n");
                            printf("\n\tFACULDADE ANHANGUERA 3 - CIENCIA DA COMPUTACAO\n");
                            printf("\n\tAutores: Luis Henrique, Michel Gomes, Marcelo Galante\n");
                            printf("\n\tProfessor Michel Fontana\n");
                            printf("\n\tCampinas - 2013\n");
                            system("pause>>null");
                         }/*fim do if*/
                         else{
                            printf("\n\nOpcao invalida!\n\nFavor escolha uma opcao correta!\n\n\nDigite qualquer tecla para retornar ao menu\n\n");
                            system("cls");
                            a='c';
                         }/*fim do else*/
             }/*fim do while*/

       }/*fim do main*/
