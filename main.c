#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // usado para conseguir armazenar as reservas.
    int mesa1Hora1 = 0, mesa1Hora2 = 0, mesa1Hora3 = 0;
    int mesa2Hora1 = 0, mesa2Hora2 = 0, mesa2Hora3 = 0;
    int mesa3Hora1 = 0, mesa3Hora2 = 0, mesa3Hora3 = 0;

    //salvar a opção escolhida pelo usuário.
    int opcaoMenu;

    //utilizei para conseguir parar o looping
    int opcaoContinuar;

    do {
        // Início do menu do sistema com as opções
        printf("\n*** SISTEMA RESERVA DE MESAS ***\n");
        printf("\n1. Reservar Mesa\n");
        printf("2. Consultar Reservas\n");
        printf("3. Cancelar Reserva\n");
        printf("4. Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcaoMenu);

        switch(opcaoMenu) {
            case 1:
                // PARTE 1 - Reserva de Mesas
                {
                    int mesa, hora;

                    printf("\nSelecione a mesa que deseja reservar: \n 1. MESA 1 \n 2. MESA 2 \n 3. MESA 3 \n =");
                    scanf("%d", &mesa);

                    printf("\nEscolha o horário que deseja reservar: \n 1. 12:00 \n 2. 13:00 \n 3. 14:00 \n =");
                    scanf("%d", &hora);

                    //RESERVA MESA 1
                    if (mesa == 1) {
                        if (hora == 1 && mesa1Hora1 == 0) {
                            mesa1Hora1 = 1;
                            printf("\nMesa 1 reservada para 12:00 horas, feita com SUCESSO.\n");
                        } else if (hora == 2 && mesa1Hora2 == 0) {
                            mesa1Hora2 = 1;
                            printf("\nMesa 1 reservada para 13:00 horas, feita com SUCESSO.\n");
                        } else if (hora == 3 && mesa1Hora3 == 0) {
                            mesa1Hora3 = 1;
                            printf("\nMesa 1 reservada para 14:00 horas, feita com SUCESSO.\n");
                        } else {
                            printf("\nHora inválida ou mesa já reservada.\n");
                        }

                    //RESERVA MESA 2
                    } else if (mesa == 2) {
                        if (hora == 1 && mesa2Hora1 == 0) {
                            mesa2Hora1 = 1;
                            printf("\nMesa 2 reservada para 12:00 horas, feita com SUCESSO.\n");
                        } else if (hora == 2 && mesa2Hora2 == 0) {
                            mesa2Hora2 = 1;
                            printf("\nMesa 2 reservada para 13:00 horas, feita com SUCESSO.\n");
                        } else if (hora == 3 && mesa2Hora3 == 0) {
                            mesa2Hora3 = 1;
                            printf("\nMesa 2 reservada para 14:00 horas, feita com SUCESSO.\n");
                        } else {
                            printf("Hora inválida ou mesa já reservada.\n");
                        }

                    //RESERVA MESA 3
                    } else if (mesa == 3) {
                        if (hora == 1 && mesa3Hora1 == 0) {
                            mesa3Hora1 = 1;
                            printf("\nMesa 3 reservada para 12:00 horas, feita com SUCESSO.\n");
                        } else if (hora == 2 && mesa3Hora2 == 0) {
                            mesa3Hora2 = 1;
                            printf("\nMesa 3 reservada para 13:00 horas, feita com SUCESSO.\n");
                        } else if (hora == 3 && mesa3Hora3 == 0) {
                            mesa3Hora3 = 1;
                            printf("\nMesa 3 reservada para 14:00 horas, feita com SUCESSO.\n");
                        } else {
                            printf("\nHora inválida ou mesa já reservada.\n");
                        }
                    } else {
                        printf("Mesa inválida.\n");
                    }
                }
                break;

            case 2:
                // PARTE 2 - Consultar Reservas de Mesas
                {
                    int mesa, hora;

                    printf("\nSelecione a mesa que deseja consultar: \n 1. MESA 1 \n 2. MESA 2 \n 3. MESA 3 \n =");
                    scanf("%d", &mesa);

                    printf("\nEscolha o horário que deseja consultar: \n 1. 12:00 \n 2. 13:00 \n 3. 14:00 \n =");
                    scanf("%d", &hora);

                    // CONSULTA MESA 1 LIVRE/RESERVADA
                    if (mesa == 1) {
                        if (hora == 1) {
                            if (mesa1Hora1 == 1) {
                                printf("\nA Mesa 1, Hora 1 (12:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 1, Hora 1 (12:00) está livre.\n");
                            }
                        } else if (hora == 2) {
                            if (mesa1Hora2 == 1) {
                                printf("\nA Mesa 1, Hora 2 (13:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 1, Hora 2 (13:00) está livre.\n");
                            }
                        } else if (hora == 3) {
                            if (mesa1Hora3 == 1) {
                                printf("\nA Mesa 1, Hora 3 (14:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 1, Hora 3 (14:00) está livre.\n");
                            }
                        } else {
                            printf("\nHora inválida.\n");
                        }
                    // CONSULTA MESA 2 LIVRE/RESERVADA
                    } else if (mesa == 2) {
                        if (hora == 1) {
                            if (mesa2Hora1 == 1) {
                                printf("\nA Mesa 2, Hora 1 (12:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 2, Hora 1 (12:00) está livre.\n");
                            }
                        } else if (hora == 2) {
                            if (mesa2Hora2 == 1) {
                                printf("\nA Mesa 2, Hora 2 (13:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 2, Hora 2 (13:00) está livre.\n");
                            }
                        } else if (hora == 3) {
                            if (mesa2Hora3 == 1) {
                                printf("\nA Mesa 2, Hora 3 (14:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 2, Hora 3 (14:00) está livre.\n");
                            }
                        } else {
                            printf("\nHora inválida.\n");
                        }
                    // CONSULTA MESA 3 LIVRE/RESERVADA
                    } else if (mesa == 3) {
                        if (hora == 1) {
                            if (mesa3Hora1 == 1) {
                                printf("\nA Mesa 3, Hora 1 (12:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 3, Hora 1 (12:00) está livre.\n");
                            }
                        } else if (hora == 2) {
                            if (mesa3Hora2 == 1) {
                                printf("\nA Mesa 3, Hora 2 (13:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 3, Hora 2 (13:00) está livre.\n");
                            }
                        } else if (hora == 3) {
                            if (mesa3Hora3 == 1) {
                                printf("\nA Mesa 3, Hora 3 (14:00) está reservada.\n");
                            } else {
                                printf("\nA Mesa 3, Hora 3 (14:00) está livre.\n");
                            }
                        } else {
                            printf("\nHora inválida.\n");
                        }
                    } else {
                        printf("\nMesa inválida.\n");
                    }
                }
                break;

            case 3:
                // PARTE 3 - Cancelamento de Reservas
                {
                    int mesa, hora;

                    printf("\nSelecione a mesa que deseja CANCELAR: \n 1. MESA 1 \n 2. MESA 2 \n 3. MESA 3 \n =");
                    scanf("%d", &mesa);

                    printf("\nEscolha o horário que deseja CANCELAR: \n 1. 12:00 \n 2. 13:00 \n 3. 14:00 \n =");
                    scanf("%d", &hora);

                    // CANCELAMENTO MESA 1
                    if (mesa == 1) {
                        if (hora == 1 && mesa1Hora1 == 1) {
                            mesa1Hora1 = 0;
                            printf("\nReserva da Mesa 1 para 12:00 horas, foi CANCELADA.\n");
                        } else if (hora == 2 && mesa1Hora2 == 1) {
                            mesa1Hora2 = 0;
                            printf("\nReserva da Mesa 1 para 13:00 horas, foi CANCELADA.\n");
                        } else if (hora == 3 && mesa1Hora3 == 1) {
                            mesa1Hora3 = 0;
                            printf("\nReserva da Mesa 1 para 14:00 horas, foi CANCELADA.\n");
                        } else {
                            printf("\nHora inválida ou nenhuma reserva encontrada.\n");
                        }
                    // CANCELAMENTO MESA 2
                    } else if (mesa == 2) {
                        if (hora == 1 && mesa2Hora1 == 1) {
                            mesa2Hora1 = 0;
                            printf("\nReserva da Mesa 2 para 12:00 horas, foi CANCELADA.\n");
                        } else if (hora == 2 && mesa2Hora2 == 1) {
                            mesa2Hora2 = 0;
                            printf("\nReserva da Mesa 2 para 13:00 horas, foi CANCELADA.\n");
                        } else if (hora == 3 && mesa2Hora3 == 1) {
                            mesa2Hora3 = 0;
                            printf("\nReserva da Mesa 2 para 14:00 horas, foi CANCELADA.\n");
                        } else {
                            printf("\nHora inválida ou nenhuma reserva encontrada.\n");
                        }
                    // CANCELAMENTO MESA 3
                    } else if (mesa == 3) {
                        if (hora == 1 && mesa3Hora1 == 1) {
                            mesa3Hora1 = 0;
                            printf("\nReserva da Mesa 3 para 12:00 horas, foi CANCELADA.\n");
                        } else if (hora == 2 && mesa3Hora2 == 1) {
                            mesa3Hora2 = 0;
                            printf("\nReserva da Mesa 3 para 13:00 horas, foi CANCELADA.\n");
                        } else if (hora == 3 && mesa3Hora3 == 1) {
                            mesa3Hora3 = 0;
                            printf("\nReserva da Mesa 3 para 14:00 horas, foi CANCELADA.\n");
                        } else {
                            printf("\nHora inválida ou nenhuma reserva encontrada.\n");
                        }
                    } else {
                        printf("\nMesa inválida.\n");
                    }
                }
                break;

            case 4:
                printf("\n\n  Saindo do sistema.\n\n");
                break;

            default:
                printf("\n\n!!! Opção inválida. Tente novamente. !!!\n\n");
                break;
        }

        if (opcaoMenu != 4) {
            printf("\n\nDeseja realizar outra operação?\n\n 1. CONTINUAR \n 2. SAIR\n = ");
            scanf("%d", &opcaoContinuar);

       // SAIR DO LOOPING
        } else {
            opcaoContinuar = 2;
        }

    } while (opcaoContinuar == 1);


//FIM DO CÓDIGO...
}
