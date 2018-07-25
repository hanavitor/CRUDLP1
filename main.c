#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef WIN32 //WINDOWS
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

tCasa casawrite;
tApt aptwrite;
tTer terwrite;

FILE *fp, *fp1, *fp2;

void AppendCasa(){

    fp = fopen("dadoscasa.txt", "a");

    printf("Insira titulo: ");
    fgets(casawrite.titulo,100,stdin);
    casawrite.titulo[strcspn(casawrite.titulo, "\n")] = 0;
    printf("Insira rua: ");
    fgets(casawrite.rua,100,stdin);
    casawrite.rua[strcspn(casawrite.rua, "\n")] = 0;
    printf("Insira bairro: ");
    fgets(casawrite.bairro,100,stdin);
    casawrite.bairro[strcspn(casawrite.bairro, "\n")] = 0;
    printf("Insira cep: ");
    fgets(casawrite.cep,100,stdin);
    casawrite.cep[strcspn(casawrite.cep, "\n")] = 0;
    printf("Insira cidade: ");
    fgets(casawrite.cidade,100,stdin);
    casawrite.cidade[strcspn(casawrite.cidade, "\n")] = 0;
    printf("Insira andares: ");
    fgets(casawrite.andares,100,stdin);
    casawrite.andares[strcspn(casawrite.andares, "\n")] = 0;
    printf("Insira quartos: ");
    fgets(casawrite.quartos,100,stdin);
    casawrite.quartos[strcspn(casawrite.quartos, "\n")] = 0;
    printf("Insira valor: ");
    fgets(casawrite.valor,100,stdin);
    casawrite.valor[strcspn(casawrite.valor, "\n")] = 0;
    printf("Insira disponibilidade: ");
    fgets(casawrite.disp,100,stdin);
    casawrite.disp[strcspn(casawrite.disp, "\n")] = 0;
    printf("Insira area do terreno: ");
    fgets(casawrite.areater,100,stdin);
    casawrite.areater[strcspn(casawrite.areater, "\n")] = 0;
    printf("Insira area construida: ");
    fgets(casawrite.areacon,100,stdin);
    casawrite.areacon[strcspn(casawrite.areacon, "\n")] = 0;
    fprintf(fp, "%s\n", casawrite.titulo);
    fprintf(fp, "%s\n", casawrite.rua);
    fprintf(fp, "%s\n", casawrite.bairro);
    fprintf(fp, "%s\n", casawrite.cep);
    fprintf(fp, "%s\n", casawrite.cidade);
    fprintf(fp, "%s\n", casawrite.andares);
    fprintf(fp, "%s\n", casawrite.quartos);
    fprintf(fp, "%s\n", casawrite.valor);
    fprintf(fp, "%s\n", casawrite.disp);
    fprintf(fp, "%s\n", casawrite.areater);
    fprintf(fp, "%s\n", casawrite.areacon);

}

void AppendApt(){

    fp1 = fopen("dadosapt.txt", "a");

    printf("Insira titulo: ");
    fgets(aptwrite.titulo,100,stdin);
    aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
    printf("Insira rua: ");
    fgets(aptwrite.rua,100,stdin);
    aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
    printf("Insira bairro: ");
    fgets(aptwrite.bairro,100,stdin);
    aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
    printf("Insira cep: ");
    fgets(aptwrite.cep,100,stdin);
    aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
    printf("Insira cidade: ");
    fgets(aptwrite.cidade,100,stdin);
    aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
    printf("Insira andar: ");
    fgets(aptwrite.andares,100,stdin);
    aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
    printf("Insira quartos: ");
    fgets(aptwrite.quartos,100,stdin);
    aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
    printf("Insira valor: ");
    fgets(aptwrite.valor,100,stdin);
    aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
    printf("Insira disponibilidade: ");
    fgets(aptwrite.disp,100,stdin);
    aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
    printf("Insira area: ");
    fgets(aptwrite.area,100,stdin);
    aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
    printf("Insira posicao(N,S,L,O): ");
    fgets(aptwrite.posicao,100,stdin);
    aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
    printf("Insira valor do condominio: ");
    fgets(aptwrite.valorcond,100,stdin);
    aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
    printf("Insira vagas de garagem: ");
    fgets(aptwrite.vagas,100,stdin);
    aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;
    fprintf(fp1, "%s\n", aptwrite.titulo);
    fprintf(fp1, "%s\n", aptwrite.rua);
    fprintf(fp1, "%s\n", aptwrite.bairro);
    fprintf(fp1, "%s\n", aptwrite.cep);
    fprintf(fp1, "%s\n", aptwrite.cidade);
    fprintf(fp1, "%s\n", aptwrite.andares);
    fprintf(fp1, "%s\n", aptwrite.quartos);
    fprintf(fp1, "%s\n", aptwrite.valor);
    fprintf(fp1, "%s\n", aptwrite.disp);
    fprintf(fp1, "%s\n", aptwrite.area);
    fprintf(fp1, "%s\n", aptwrite.posicao);
    fprintf(fp1, "%s\n", aptwrite.valorcond);
    fprintf(fp1, "%s\n", aptwrite.vagas);

}

void AppendTer(){

    fp2 = fopen("dadoster.txt", "a");

    printf("Insira titulo: ");
    fgets(terwrite.titulo,100,stdin);
    terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
    printf("Insira rua: ");
    fgets(terwrite.rua,100,stdin);
    terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
    printf("Insira bairro: ");
    fgets(terwrite.bairro,100,stdin);
    terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
    printf("Insira cep: ");
    fgets(terwrite.cep,100,stdin);
    terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
    printf("Insira cidade: ");
    fgets(terwrite.cidade,100,stdin);
    terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
    printf("Insira area: ");
    fgets(terwrite.area,100,stdin);
    terwrite.area[strcspn(terwrite.area, "\n")] = 0;
    printf("Insira valor: ");
    fgets(terwrite.valor,100,stdin);
    terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
    printf("Insira disponibilidade: ");
    fgets(terwrite.disp,100,stdin);
    terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;
    fprintf(fp2, "%s\n", terwrite.titulo);
    fprintf(fp2, "%s\n", terwrite.rua);
    fprintf(fp2, "%s\n", terwrite.bairro);
    fprintf(fp2, "%s\n", terwrite.cep);
    fprintf(fp2, "%s\n", terwrite.cidade);
    fprintf(fp2, "%s\n", terwrite.area);
    fprintf(fp2, "%s\n", terwrite.valor);
    fprintf(fp2, "%s\n", terwrite.disp);

}

void LerTodoCasa(){

    fp = fopen("dadoscasa.txt", "r");
    char buffer[100];

    printf("Lista de Casas:\n");
    while(!feof(fp)){

        //for(int i = 0;i<11;i++){
            fgets(casawrite.titulo,100,fp);
            casawrite.titulo[strcspn(casawrite.titulo, "\n")] = 0;
            fgets(casawrite.rua,100,fp);
            casawrite.rua[strcspn(casawrite.rua, "\n")] = 0;
            fgets(casawrite.bairro,100,fp);
            casawrite.bairro[strcspn(casawrite.bairro, "\n")] = 0;
            fgets(casawrite.cep,100,fp);
            casawrite.cep[strcspn(casawrite.cep, "\n")] = 0;
            fgets(casawrite.cidade,100,fp);
            casawrite.cidade[strcspn(casawrite.cidade, "\n")] = 0;
            fgets(casawrite.andares,100,fp);
            casawrite.andares[strcspn(casawrite.andares, "\n")] = 0;
            fgets(casawrite.quartos,100,fp);
            casawrite.quartos[strcspn(casawrite.quartos, "\n")] = 0;
            fgets(casawrite.valor,100,fp);
            casawrite.valor[strcspn(casawrite.valor, "\n")] = 0;
            fgets(casawrite.disp,100,fp);
            casawrite.disp[strcspn(casawrite.disp, "\n")] = 0;
            fgets(casawrite.areater,100,fp);
            casawrite.areater[strcspn(casawrite.areater, "\n")] = 0;
            fgets(casawrite.areacon,100,fp);
            casawrite.areacon[strcspn(casawrite.areacon, "\n")] = 0;
        //}

        printf("Titulo: %s\n", casawrite.titulo);
        printf("Rua: %s\n", casawrite.rua);
        printf("Bairro: %s\n", casawrite.bairro);
        printf("Cep: %s\n", casawrite.cep);
        printf("Cidade: %s\n", casawrite.cidade);
        printf("Andares: %s\n", casawrite.andares);
        printf("Quartos: %s\n", casawrite.quartos);
        printf("Valor: %s\n", casawrite.valor);
        printf("Disponibilidade: %s\n", casawrite.disp);
        printf("Area do terreno: %s\n", casawrite.areater);
        printf("Area construida: %s\n", casawrite.areacon);

    }

}

void LerTodoApt(){

}

void LerTodoTer(){

}

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
            case 48:
                system(CLEARTERM);
                return 0;
                break;
            case 49:
                system(CLEARTERM);
                AppendCasa();
                break;
            case 50:
                system(CLEARTERM);
                AppendApt();
                break;
            case 51:
                system(CLEARTERM);
                AppendTer();
                break;
            default:
                system(CLEARTERM);
                printf("Erro\n");
                break;
        }
    }

}

void ConsultaTodosImoveis(){

    LerTodoCasa();

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
                ConsultaTodosImoveis();
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
