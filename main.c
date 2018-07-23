#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CLEARTERM "clear"

typedef struct Casa{
    char titulo[100];
    char rua[100];
    char bairro[100];
    char cep[100];
    char cidade[100];
    char andares[100];
    char quartos[100];
    char areater[100];
    char areacon[100];
    char valor[100];
    char disp[100];
}tCasa;

typedef struct Apartamento{
    char titulo[100];
    char rua[100];
    char bairro[100];
    char cep[100];
    char cidade[100];
    char area[100];
    char quartos[100];
    char posicao[100];
    char andares[100];
    char valorcond[100];
    char valor[100];
    char disp[100];
    char vagas[100];
}tApt;

typedef struct Terreno{
    char titulo[100];
    char rua[100];
    char bairro[100];
    char cep[100];
    char cidade[100];
    char area[100];
    char valor[100];
    char disp[100];
}tTer;

tCasa casa;
tApt apt;
tTer ter;

FILE *fp, *fp1, *fp2;
fp = fopen("dadoscasa.txt", "a");
fp1 = fopen("dadosapt.txt", "a");
fp2 = fopen("dadoster.txt", "a");

int CadastraImovel(){

    char option;

    while(1){

        printf("1.Casa\n"
                "2.Apartamento\n"
                "3.Terreno\n"
                "0.Sair\n"
                "Opcao: ");
        option = getchar();
        getchar();

        switch(option){
            case 49:
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                fgets(casa.titulo,100,stdin);
                casa.titulo[strcspn(casa.titulo, "\n")] = 0;
                break;
            case 50:
                break;
            case 51:
                break;
            default:
        }
    }

}

int main(){

    system(CLEARTERM);

    int flag = 1;
    char option;

    if(fp<0){
        printf("Erro ao abrir arquivo\n");
        return 2;
    }

    while(1){

        printf("1.Cadastrar imovel\n"
                "2.Imoveis disponiveis\n"
                "3.Descricao dos imoveis\n"
                "4.Imoveis para vender\n"
                "5.Imoveis para alugar\n"
                "6.Imoveis para alugar por bairro\n"
                "7.Imoveis para vender por bairro\n"
                "8.Descricacao imoveis por cidade\n"
                "0.Sair\n"
                "Opcao: ");

        option = getchar();
        getchar();

        switch(option){
            case 48:
                return 1;
                break;
            case 49:
                system(CLEARTERM);
                break;
            case 50:
                system(CLEARTERM);
                break;
            case 51:
                system(CLEARTERM);
                break;
            case 52:
                system(CLEARTERM);
                break;
            case 53:
                system(CLEARTERM);
                break;
            case 54:
                system(CLEARTERM);
                break;
            case 55:
                system(CLEARTERM);
                break;  
            case 56:
                system(CLEARTERM);
                break;
            default:
                system(CLEARTERM);
                printf("Erro insira novamente\n");
                break;
        }

    }

    return 0;
}
