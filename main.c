#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef WIN32
#define CLEARTERM "cls"
#else //LINUX
#define CLEARTERM "clear"
#endif

typedef struct Casa{
    char titulo[100];
    char rua[100];
    char bairro[100];
    char cep[100];
    char cidade[100];
    char andares[100];
    char quartos[100];
    char valor[100];
    char disp[100];
    char areater[100];
    char areacon[100];
}tCasa;

typedef struct Apartamento{
    char titulo[100];
    char rua[100];
    char bairro[100];
    char cep[100];
    char cidade[100];
    char andares[100];
    char quartos[100];
    char valor[100];
    char disp[100];
    char area[100];
    char posicao[100];
    char valorcond[100];
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

int CadastraImovel(){

    fp = fopen("dadoscasa.txt", "a");
    fp1 = fopen("dadosapt.txt", "a");
    fp2 = fopen("dadoster.txt", "a");

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
                fgets(casa.rua,100,stdin);
                casa.rua[strcspn(casa.rua, "\n")] = 0;
                fgets(casa.bairro,100,stdin);
                casa.bairro[strcspn(casa.bairro, "\n")] = 0;
                fgets(casa.cep,100,stdin);
                casa.cep[strcspn(casa.cep, "\n")] = 0;
                fgets(casa.cidade,100,stdin);
                casa.cidade[strcspn(casa.cidade, "\n")] = 0;
                fgets(casa.andares,100,stdin);
                casa.andares[strcspn(casa.andares, "\n")] = 0;
                fgets(casa.quartos,100,stdin);
                casa.quartos[strcspn(casa.quartos, "\n")] = 0;
                fgets(casa.valor,100,stdin);
                casa.valor[strcspn(casa.valor, "\n")] = 0;
                fgets(casa.disp,100,stdin);
                casa.disp[strcspn(casa.disp, "\n")] = 0;
                fgets(casa.areater,100,stdin);
                casa.areater[strcspn(casa.areater, "\n")] = 0;
                fgets(casa.areacon,100,stdin);
                casa.areacon[strcspn(casa.areacon, "\n")] = 0;
                fprintf(fp, "%s\n", casa.titulo);
                fprintf(fp, "%s\n", casa.rua);
                fprintf(fp, "%s\n", casa.bairro);
                fprintf(fp, "%s\n", casa.cep);
                fprintf(fp, "%s\n", casa.cidade);
                fprintf(fp, "%s\n", casa.andares);
                fprintf(fp, "%s\n", casa.quartos);
                fprintf(fp, "%s\n", casa.valor);
                fprintf(fp, "%s\n", casa.disp);
                fprintf(fp, "%s\n", casa.areater);
                fprintf(fp, "%s\n", casa.areacon);
                break;
            case 50:
                fgets(apt.titulo,100,stdin);
                apt.titulo[strcspn(apt.titulo, "\n")] = 0;
                fgets(apt.rua,100,stdin);
                apt.rua[strcspn(apt.rua, "\n")] = 0;
                fgets(apt.bairro,100,stdin);
                apt.bairro[strcspn(apt.bairro, "\n")] = 0;
                fgets(apt.cep,100,stdin);
                apt.cep[strcspn(apt.cep, "\n")] = 0;
                fgets(apt.cidade,100,stdin);
                apt.cidade[strcspn(apt.cidade, "\n")] = 0;
                fgets(apt.andares,100,stdin);
                apt.andares[strcspn(apt.andares, "\n")] = 0;
                fgets(apt.quartos,100,stdin);
                apt.quartos[strcspn(apt.quartos, "\n")] = 0;
                fgets(apt.valor,100,stdin);
                apt.valor[strcspn(apt.valor, "\n")] = 0;
                fgets(apt.disp,100,stdin);
                apt.disp[strcspn(apt.disp, "\n")] = 0;
                fgets(apt.area,100,stdin);
                apt.area[strcspn(apt.area, "\n")] = 0;
                fgets(apt.posicao,100,stdin);
                apt.posicao[strcspn(apt.posicao, "\n")] = 0;
                fgets(apt.valorcond,100,stdin);
                apt.valorcond[strcspn(apt.valorcond, "\n")] = 0;
                fgets(apt.vagas,100,stdin);
                apt.vagas[strcspn(apt.vagas, "\n")] = 0;
                fprintf(fp1, "%s\n", apt.titulo);
                fprintf(fp1, "%s\n", apt.rua);
                fprintf(fp1, "%s\n", apt.bairro);
                fprintf(fp1, "%s\n", apt.cep);
                fprintf(fp1, "%s\n", apt.cidade);
                fprintf(fp1, "%s\n", apt.andares);
                fprintf(fp1, "%s\n", apt.quartos);
                fprintf(fp1, "%s\n", apt.valor);
                fprintf(fp1, "%s\n", apt.disp);
                fprintf(fp1, "%s\n", apt.area);
                fprintf(fp1, "%s\n", apt.posicao);
                fprintf(fp1, "%s\n", apt.valorcond);
                break;
            case 51:
                fgets(ter.titulo,100,stdin);
                ter.titulo[strcspn(ter.titulo, "\n")] = 0;
                fgets(ter.rua,100,stdin);
                ter.rua[strcspn(ter.rua, "\n")] = 0;
                fgets(ter.bairro,100,stdin);
                ter.bairro[strcspn(ter.bairro, "\n")] = 0;
                fgets(ter.cep,100,stdin);
                ter.cep[strcspn(ter.cep, "\n")] = 0;
                fgets(ter.cidade,100,stdin);
                ter.cidade[strcspn(ter.cidade, "\n")] = 0;
                fgets(ter.area,100,stdin);
                ter.area[strcspn(ter.area, "\n")] = 0;
                fgets(ter.valor,100,stdin);
                ter.valor[strcspn(ter.valor, "\n")] = 0;
                fgets(ter.disp,100,stdin);
                ter.disp[strcspn(ter.disp, "\n")] = 0;
                fprintf(fp2, "%s\n", ter.titulo);
                fprintf(fp2, "%s\n", ter.rua);
                fprintf(fp2, "%s\n", ter.bairro);
                fprintf(fp2, "%s\n", ter.cep);
                fprintf(fp2, "%s\n", ter.cidade);
                fprintf(fp2, "%s\n", ter.area);
                fprintf(fp2, "%s\n", ter.valor);
                fprintf(fp2, "%s\n", ter.disp);
                break;
            default:
                return 0;
                break;
        }
    }

}

int main(){

    system(CLEARTERM);

    int flag = 1;
    char option;

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
                CadastraImovel();
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
