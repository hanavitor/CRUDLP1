#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef WIN32 //WINDOWS
#define CLEARTERM "cls"
#else //*NIX
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

char bairro[100];
char cidade[100];

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
    fprintf(fp, "*");
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
    fclose(fp);

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
    fprintf(fp1, "*");
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
    fclose(fp1);

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
    fprintf(fp2, "*");
    fprintf(fp2, "%s\n", terwrite.titulo);
    fprintf(fp2, "%s\n", terwrite.rua);
    fprintf(fp2, "%s\n", terwrite.bairro);
    fprintf(fp2, "%s\n", terwrite.cep);
    fprintf(fp2, "%s\n", terwrite.cidade);
    fprintf(fp2, "%s\n", terwrite.area);
    fprintf(fp2, "%s\n", terwrite.valor);
    fprintf(fp2, "%s\n", terwrite.disp);
    fclose(fp2);

}

void LerTodoCasa(){

    int c;

    fp = fopen("dadoscasa.txt", "r");

    while((c = fgetc(fp) != EOF)){

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
        puts(" ");
    }
    fclose(fp);

}

void LerTodoApt(){

    int c;

    fp1 = fopen("dadosapt.txt", "r");

    while((c = fgetc(fp1) != EOF)){

        fgets(aptwrite.titulo,100,fp1);
        aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
        fgets(aptwrite.rua,100,fp1);
        aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
        fgets(aptwrite.bairro,100,fp1);
        aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
        fgets(aptwrite.cep,100,fp1);
        aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
        fgets(aptwrite.cidade,100,fp1);
        aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
        fgets(aptwrite.andares,100,fp1);
        aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
        fgets(aptwrite.quartos,100,fp1);
        aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
        fgets(aptwrite.valor,100,fp1);
        aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
        fgets(aptwrite.disp,100,fp1);
        aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
        fgets(aptwrite.area,100,fp1);
        aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
        fgets(aptwrite.posicao,100,fp1);
        aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
        fgets(aptwrite.valorcond,100,fp1);
        aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
        fgets(aptwrite.vagas,100,fp1);
        aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;
        printf("Titulo: %s\n", aptwrite.titulo);
        printf("Rua: %s\n", aptwrite.rua);
        printf("Bairro: %s\n", aptwrite.bairro);
        printf("Cep: %s\n", aptwrite.cep);
        printf("Cidade: %s\n", aptwrite.cidade);
        printf("Andares: %s\n", aptwrite.andares);
        printf("Quartos: %s\n", aptwrite.quartos);
        printf("Valor: %s\n", aptwrite.valor);
        printf("Disponibilidade: %s\n", aptwrite.disp);
        printf("Area: %s\n", aptwrite.area);
        printf("Posicao: %s\n", aptwrite.posicao);
        printf("Valor do condominio: %s\n", aptwrite.valorcond);
        printf("Vagas: %s\n", aptwrite.vagas);
        puts(" ");
    }
    fclose(fp1);

}

void LerTodoTer(){

    int c;

    fp2 = fopen("dadoster.txt", "r");

    while((c = fgetc(fp2) != EOF)){

        fgets(terwrite.titulo,100,fp2);
        terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
        fgets(terwrite.rua,100,fp2);
        terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
        fgets(terwrite.bairro,100,fp2);
        terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
        fgets(terwrite.cep,100,fp2);
        terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
        fgets(terwrite.cidade,100,fp2);
        terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
        fgets(terwrite.area,100,fp2);
        terwrite.area[strcspn(terwrite.area, "\n")] = 0;
        fgets(terwrite.valor,100,fp2);
        terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
        fgets(terwrite.disp,100,fp2);
        terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;

        printf("Titulo: %s\n", terwrite.titulo);
        printf("Rua: %s\n", terwrite.rua);
        printf("Bairro: %s\n", terwrite.bairro);
        printf("Cep: %s\n", terwrite.cep);
        printf("Cidade: %s\n", terwrite.cidade);
        printf("Area: %s\n", terwrite.area);
        printf("Valor: %s\n", terwrite.valor);
        printf("Disponibilidade: %s\n", terwrite.disp);
        puts(" ");
    }
    fclose(fp2);

}

void LerTituloCasa(){

    int c;

    fp = fopen("dadoscasa.txt", "r");

    while((c = fgetc(fp) != EOF)){

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
        printf("Titulo: %s\n", casawrite.titulo);
        puts(" ");
    }
    fclose(fp);

}

void LerTituloApt(){

    int c;

    fp1 = fopen("dadosapt.txt", "r");

    while((c = fgetc(fp1) != EOF)){

        fgets(aptwrite.titulo,100,fp1);
        aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
        fgets(aptwrite.rua,100,fp1);
        aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
        fgets(aptwrite.bairro,100,fp1);
        aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
        fgets(aptwrite.cep,100,fp1);
        aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
        fgets(aptwrite.cidade,100,fp1);
        aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
        fgets(aptwrite.andares,100,fp1);
        aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
        fgets(aptwrite.quartos,100,fp1);
        aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
        fgets(aptwrite.valor,100,fp1);
        aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
        fgets(aptwrite.disp,100,fp1);
        aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
        fgets(aptwrite.area,100,fp1);
        aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
        fgets(aptwrite.posicao,100,fp1);
        aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
        fgets(aptwrite.valorcond,100,fp1);
        aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
        fgets(aptwrite.vagas,100,fp1);
        aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;
        printf("Titulo: %s\n", aptwrite.titulo);
        puts(" ");
    }
    fclose(fp1);

}

void LerTituloTer(){

    int c;

    fp2 = fopen("dadoster.txt", "r");

    while((c = fgetc(fp2) != EOF)){

        fgets(terwrite.titulo,100,fp2);
        terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
        fgets(terwrite.rua,100,fp2);
        terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
        fgets(terwrite.bairro,100,fp2);
        terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
        fgets(terwrite.cep,100,fp2);
        terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
        fgets(terwrite.cidade,100,fp2);
        terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
        fgets(terwrite.area,100,fp2);
        terwrite.area[strcspn(terwrite.area, "\n")] = 0;
        fgets(terwrite.valor,100,fp2);
        terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
        fgets(terwrite.disp,100,fp2);
        terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;
        printf("Titulo: %s\n", terwrite.titulo);
        puts(" ");
    }
    fclose(fp2);

}

void CheckVenderCasa(){

    int c;

    fp = fopen("dadoscasa.txt", "r");

    while((c = fgetc(fp) != EOF)){

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

        if(strcmp(casawrite.disp,"vender") == 0){
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
            puts(" ");
        }
    }
    fclose(fp);

}

void CheckVenderApt(){

    int c;

    fp1 = fopen("dadosapt.txt", "r");

    while((c = fgetc(fp1) != EOF)){

        fgets(aptwrite.titulo,100,fp1);
        aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
        fgets(aptwrite.rua,100,fp1);
        aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
        fgets(aptwrite.bairro,100,fp1);
        aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
        fgets(aptwrite.cep,100,fp1);
        aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
        fgets(aptwrite.cidade,100,fp1);
        aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
        fgets(aptwrite.andares,100,fp1);
        aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
        fgets(aptwrite.quartos,100,fp1);
        aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
        fgets(aptwrite.valor,100,fp1);
        aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
        fgets(aptwrite.disp,100,fp1);
        aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
        fgets(aptwrite.area,100,fp1);
        aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
        fgets(aptwrite.posicao,100,fp1);
        aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
        fgets(aptwrite.valorcond,100,fp1);
        aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
        fgets(aptwrite.vagas,100,fp1);
        aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;

        if(strcmp(aptwrite.disp,"vender") == 0){
            printf("Titulo: %s\n", aptwrite.titulo);
            printf("Rua: %s\n", aptwrite.rua);
            printf("Bairro: %s\n", aptwrite.bairro);
            printf("Cep: %s\n", aptwrite.cep);
            printf("Cidade: %s\n", aptwrite.cidade);
            printf("Andares: %s\n", aptwrite.andares);
            printf("Quartos: %s\n", aptwrite.quartos);
            printf("Valor: %s\n", aptwrite.valor);
            printf("Disponibilidade: %s\n", aptwrite.disp);
            printf("Area: %s\n", aptwrite.area);
            printf("Posicao: %s\n", aptwrite.posicao);
            printf("Valor do condominio: %s\n", aptwrite.valorcond);
            printf("Vagas: %s\n", aptwrite.vagas);
            puts(" ");
        }
    }
    fclose(fp1);

}

void CheckVenderTer(){

    int c;

    fp2 = fopen("dadoster.txt", "r");

    while((c = fgetc(fp2) != EOF)){

        fgets(terwrite.titulo,100,fp2);
        terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
        fgets(terwrite.rua,100,fp2);
        terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
        fgets(terwrite.bairro,100,fp2);
        terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
        fgets(terwrite.cep,100,fp2);
        terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
        fgets(terwrite.cidade,100,fp2);
        terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
        fgets(terwrite.area,100,fp2);
        terwrite.area[strcspn(terwrite.area, "\n")] = 0;
        fgets(terwrite.valor,100,fp2);
        terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
        fgets(terwrite.disp,100,fp2);
        terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;

        if(strcmp(terwrite.disp,"vender") == 0){
            printf("Titulo: %s\n", terwrite.titulo);
            printf("Rua: %s\n", terwrite.rua);
            printf("Bairro: %s\n", terwrite.bairro);
            printf("Cep: %s\n", terwrite.cep);
            printf("Cidade: %s\n", terwrite.cidade);
            printf("Area: %s\n", terwrite.area);
            printf("Valor: %s\n", terwrite.valor);
            printf("Disponibilidade: %s\n", terwrite.disp);
            puts(" ");
        }
    }
    fclose(fp2);

}

void CheckBairroVenderCasa(){

    int c;

    fp = fopen("dadoscasa.txt", "r");

    while((c = fgetc(fp) != EOF)){

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

        if(strcmp(casawrite.bairro,bairro) == 0){
            if(strcmp(casawrite.disp,"vender") == 0){
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
                puts(" ");
            }
        }
    }
    fclose(fp);

}

void CheckBairroVenderApt(){

    int c;

    fp1 = fopen("dadosapt.txt", "r");

    while((c = fgetc(fp1) != EOF)){

        fgets(aptwrite.titulo,100,fp1);
        aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
        fgets(aptwrite.rua,100,fp1);
        aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
        fgets(aptwrite.bairro,100,fp1);
        aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
        fgets(aptwrite.cep,100,fp1);
        aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
        fgets(aptwrite.cidade,100,fp1);
        aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
        fgets(aptwrite.andares,100,fp1);
        aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
        fgets(aptwrite.quartos,100,fp1);
        aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
        fgets(aptwrite.valor,100,fp1);
        aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
        fgets(aptwrite.disp,100,fp1);
        aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
        fgets(aptwrite.area,100,fp1);
        aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
        fgets(aptwrite.posicao,100,fp1);
        aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
        fgets(aptwrite.valorcond,100,fp1);
        aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
        fgets(aptwrite.vagas,100,fp1);
        aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;

        if(strcmp(aptwrite.bairro,bairro) == 0){
            if(strcmp(aptwrite.disp,"vender") == 0){
                printf("Titulo: %s\n", aptwrite.titulo);
                printf("Rua: %s\n", aptwrite.rua);
                printf("Bairro: %s\n", aptwrite.bairro);
                printf("Cep: %s\n", aptwrite.cep);
                printf("Cidade: %s\n", aptwrite.cidade);
                printf("Andares: %s\n", aptwrite.andares);
                printf("Quartos: %s\n", aptwrite.quartos);
                printf("Valor: %s\n", aptwrite.valor);
                printf("Disponibilidade: %s\n", aptwrite.disp);
                printf("Area: %s\n", aptwrite.area);
                printf("Posicao: %s\n", aptwrite.posicao);
                printf("Valor do condominio: %s\n", aptwrite.valorcond);
                printf("Vagas: %s\n", aptwrite.vagas);
                puts(" ");
            }
        }
    }
    fclose(fp1);

}

void CheckBairroVenderTer(){

    int c;

    fp2 = fopen("dadoster.txt", "r");

    while((c = fgetc(fp2) != EOF)){

        fgets(terwrite.titulo,100,fp2);
        terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
        fgets(terwrite.rua,100,fp2);
        terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
        fgets(terwrite.bairro,100,fp2);
        terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
        fgets(terwrite.cep,100,fp2);
        terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
        fgets(terwrite.cidade,100,fp2);
        terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
        fgets(terwrite.area,100,fp2);
        terwrite.area[strcspn(terwrite.area, "\n")] = 0;
        fgets(terwrite.valor,100,fp2);
        terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
        fgets(terwrite.disp,100,fp2);
        terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;

        if(strcmp(terwrite.bairro,bairro) == 0){
            if(strcmp(terwrite.disp,"vender") == 0){
                printf("Titulo: %s\n", terwrite.titulo);
                printf("Rua: %s\n", terwrite.rua);
                printf("Bairro: %s\n", terwrite.bairro);
                printf("Cep: %s\n", terwrite.cep);
                printf("Cidade: %s\n", terwrite.cidade);
                printf("Area: %s\n", terwrite.area);
                printf("Valor: %s\n", terwrite.valor);
                printf("Disponibilidade: %s\n", terwrite.disp);
                puts(" ");
            }
        }
    }
    fclose(fp2);

}

void CheckCidadeCasa(){

    int c;

    fp = fopen("dadoscasa.txt", "r");

    while((c = fgetc(fp) != EOF)){

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

        if(strcmp(casawrite.cidade,cidade) == 0){
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
            puts(" ");
        }
    }
    fclose(fp);

}

void CheckCidadeApt(){

    int c;

    fp1 = fopen("dadosapt.txt", "r");

    while((c = fgetc(fp1) != EOF)){

        fgets(aptwrite.titulo,100,fp1);
        aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
        fgets(aptwrite.rua,100,fp1);
        aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
        fgets(aptwrite.bairro,100,fp1);
        aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
        fgets(aptwrite.cep,100,fp1);
        aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
        fgets(aptwrite.cidade,100,fp1);
        aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
        fgets(aptwrite.andares,100,fp1);
        aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
        fgets(aptwrite.quartos,100,fp1);
        aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
        fgets(aptwrite.valor,100,fp1);
        aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
        fgets(aptwrite.disp,100,fp1);
        aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
        fgets(aptwrite.area,100,fp1);
        aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
        fgets(aptwrite.posicao,100,fp1);
        aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
        fgets(aptwrite.valorcond,100,fp1);
        aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
        fgets(aptwrite.vagas,100,fp1);
        aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;

        if(strcmp(aptwrite.cidade,cidade) == 0){
            printf("Titulo: %s\n", aptwrite.titulo);
            printf("Rua: %s\n", aptwrite.rua);
            printf("Bairro: %s\n", aptwrite.bairro);
            printf("Cep: %s\n", aptwrite.cep);
            printf("Cidade: %s\n", aptwrite.cidade);
            printf("Andares: %s\n", aptwrite.andares);
            printf("Quartos: %s\n", aptwrite.quartos);
            printf("Valor: %s\n", aptwrite.valor);
            printf("Disponibilidade: %s\n", aptwrite.disp);
            printf("Area: %s\n", aptwrite.area);
            printf("Posicao: %s\n", aptwrite.posicao);
            printf("Valor do condominio: %s\n", aptwrite.valorcond);
            printf("Vagas: %s\n", aptwrite.vagas);
            puts(" ");
        }
    }
    fclose(fp1);

}

void CheckCidadeTer(){

    int c;

    fp2 = fopen("dadoster.txt", "r");

    while((c = fgetc(fp2) != EOF)){

        fgets(terwrite.titulo,100,fp2);
        terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
        fgets(terwrite.rua,100,fp2);
        terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
        fgets(terwrite.bairro,100,fp2);
        terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
        fgets(terwrite.cep,100,fp2);
        terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
        fgets(terwrite.cidade,100,fp2);
        terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
        fgets(terwrite.area,100,fp2);
        terwrite.area[strcspn(terwrite.area, "\n")] = 0;
        fgets(terwrite.valor,100,fp2);
        terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
        fgets(terwrite.disp,100,fp2);
        terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;

        if(strcmp(terwrite.cidade,cidade) == 0){
            printf("Titulo: %s\n", terwrite.titulo);
            printf("Rua: %s\n", terwrite.rua);
            printf("Bairro: %s\n", terwrite.bairro);
            printf("Cep: %s\n", terwrite.cep);
            printf("Cidade: %s\n", terwrite.cidade);
            printf("Area: %s\n", terwrite.area);
            printf("Valor: %s\n", terwrite.valor);
            printf("Disponibilidade: %s\n", terwrite.disp);
            puts(" ");
        }
    }
    fclose(fp2);

}

void CheckBairroAlugarCasa(){

    int c;

    fp = fopen("dadoscasa.txt", "r");

    while((c = fgetc(fp) != EOF)){

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

        if(strcmp(casawrite.bairro,bairro) == 0){
            if(strcmp(casawrite.disp,"alugar") == 0){
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
                puts(" ");
            }
        }
    }
    fclose(fp);

}

void CheckBairroAlugarApt(){

    int c;

    fp1 = fopen("dadosapt.txt", "r");

    while((c = fgetc(fp1) != EOF)){

        fgets(aptwrite.titulo,100,fp1);
        aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
        fgets(aptwrite.rua,100,fp1);
        aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
        fgets(aptwrite.bairro,100,fp1);
        aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
        fgets(aptwrite.cep,100,fp1);
        aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
        fgets(aptwrite.cidade,100,fp1);
        aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
        fgets(aptwrite.andares,100,fp1);
        aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
        fgets(aptwrite.quartos,100,fp1);
        aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
        fgets(aptwrite.valor,100,fp1);
        aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
        fgets(aptwrite.disp,100,fp1);
        aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
        fgets(aptwrite.area,100,fp1);
        aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
        fgets(aptwrite.posicao,100,fp1);
        aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
        fgets(aptwrite.valorcond,100,fp1);
        aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
        fgets(aptwrite.vagas,100,fp1);
        aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;

        if(strcmp(aptwrite.bairro,bairro) == 0){
            if(strcmp(aptwrite.disp,"alugar") == 0){
                printf("Titulo: %s\n", aptwrite.titulo);
                printf("Rua: %s\n", aptwrite.rua);
                printf("Bairro: %s\n", aptwrite.bairro);
                printf("Cep: %s\n", aptwrite.cep);
                printf("Cidade: %s\n", aptwrite.cidade);
                printf("Andares: %s\n", aptwrite.andares);
                printf("Quartos: %s\n", aptwrite.quartos);
                printf("Valor: %s\n", aptwrite.valor);
                printf("Disponibilidade: %s\n", aptwrite.disp);
                printf("Area: %s\n", aptwrite.area);
                printf("Posicao: %s\n", aptwrite.posicao);
                printf("Valor do condominio: %s\n", aptwrite.valorcond);
                printf("Vagas: %s\n", aptwrite.vagas);
                puts(" ");
            }
        }
    }
    fclose(fp1);

}

void CheckBairroAlugarTer(){

    int c;

    fp2 = fopen("dadoster.txt", "r");

    while((c = fgetc(fp2) != EOF)){

        fgets(terwrite.titulo,100,fp2);
        terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
        fgets(terwrite.rua,100,fp2);
        terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
        fgets(terwrite.bairro,100,fp2);
        terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
        fgets(terwrite.cep,100,fp2);
        terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
        fgets(terwrite.cidade,100,fp2);
        terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
        fgets(terwrite.area,100,fp2);
        terwrite.area[strcspn(terwrite.area, "\n")] = 0;
        fgets(terwrite.valor,100,fp2);
        terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
        fgets(terwrite.disp,100,fp2);
        terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;

        if(strcmp(terwrite.bairro,bairro) == 0){
            if(strcmp(terwrite.disp,"alugar") == 0){
                printf("Titulo: %s\n", terwrite.titulo);
                printf("Rua: %s\n", terwrite.rua);
                printf("Bairro: %s\n", terwrite.bairro);
                printf("Cep: %s\n", terwrite.cep);
                printf("Cidade: %s\n", terwrite.cidade);
                printf("Area: %s\n", terwrite.area);
                printf("Valor: %s\n", terwrite.valor);
                printf("Disponibilidade: %s\n", terwrite.disp);
                puts(" ");
            }
        }
    }
    fclose(fp2);

}

void CheckAlugarCasa(){

    int c;

    fp = fopen("dadoscasa.txt", "r");

    while((c = fgetc(fp) != EOF)){

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

        if(strcmp(casawrite.disp,"alugar") == 0){
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
            puts(" ");
        }
    }
    fclose(fp);

}

void CheckAlugarApt(){

    int c;

    fp1 = fopen("dadosapt.txt", "r");

    while((c = fgetc(fp1) != EOF)){

        fgets(aptwrite.titulo,100,fp1);
        aptwrite.titulo[strcspn(aptwrite.titulo, "\n")] = 0;
        fgets(aptwrite.rua,100,fp1);
        aptwrite.rua[strcspn(aptwrite.rua, "\n")] = 0;
        fgets(aptwrite.bairro,100,fp1);
        aptwrite.bairro[strcspn(aptwrite.bairro, "\n")] = 0;
        fgets(aptwrite.cep,100,fp1);
        aptwrite.cep[strcspn(aptwrite.cep, "\n")] = 0;
        fgets(aptwrite.cidade,100,fp1);
        aptwrite.cidade[strcspn(aptwrite.cidade, "\n")] = 0;
        fgets(aptwrite.andares,100,fp1);
        aptwrite.andares[strcspn(aptwrite.andares, "\n")] = 0;
        fgets(aptwrite.quartos,100,fp1);
        aptwrite.quartos[strcspn(aptwrite.quartos, "\n")] = 0;
        fgets(aptwrite.valor,100,fp1);
        aptwrite.valor[strcspn(aptwrite.valor, "\n")] = 0;
        fgets(aptwrite.disp,100,fp1);
        aptwrite.disp[strcspn(aptwrite.disp, "\n")] = 0;
        fgets(aptwrite.area,100,fp1);
        aptwrite.area[strcspn(aptwrite.area, "\n")] = 0;
        fgets(aptwrite.posicao,100,fp1);
        aptwrite.posicao[strcspn(aptwrite.posicao, "\n")] = 0;
        fgets(aptwrite.valorcond,100,fp1);
        aptwrite.valorcond[strcspn(aptwrite.valorcond, "\n")] = 0;
        fgets(aptwrite.vagas,100,fp1);
        aptwrite.vagas[strcspn(aptwrite.vagas, "\n")] = 0;

        if(strcmp(aptwrite.disp,"alugar") == 0){
            printf("Titulo: %s\n", aptwrite.titulo);
            printf("Rua: %s\n", aptwrite.rua);
            printf("Bairro: %s\n", aptwrite.bairro);
            printf("Cep: %s\n", aptwrite.cep);
            printf("Cidade: %s\n", aptwrite.cidade);
            printf("Andares: %s\n", aptwrite.andares);
            printf("Quartos: %s\n", aptwrite.quartos);
            printf("Valor: %s\n", aptwrite.valor);
            printf("Disponibilidade: %s\n", aptwrite.disp);
            printf("Area: %s\n", aptwrite.area);
            printf("Posicao: %s\n", aptwrite.posicao);
            printf("Valor do condominio: %s\n", aptwrite.valorcond);
            printf("Vagas: %s\n", aptwrite.vagas);
            puts(" ");
        }
    }
    fclose(fp1);

}

void CheckAlugarTer(){

    int c;

    fp2 = fopen("dadoster.txt", "r");

    while((c = fgetc(fp2) != EOF)){

        fgets(terwrite.titulo,100,fp2);
        terwrite.titulo[strcspn(terwrite.titulo, "\n")] = 0;
        fgets(terwrite.rua,100,fp2);
        terwrite.rua[strcspn(terwrite.rua, "\n")] = 0;
        fgets(terwrite.bairro,100,fp2);
        terwrite.bairro[strcspn(terwrite.bairro, "\n")] = 0;
        fgets(terwrite.cep,100,fp2);
        terwrite.cep[strcspn(terwrite.cep, "\n")] = 0;
        fgets(terwrite.cidade,100,fp2);
        terwrite.cidade[strcspn(terwrite.cidade, "\n")] = 0;
        fgets(terwrite.area,100,fp2);
        terwrite.area[strcspn(terwrite.area, "\n")] = 0;
        fgets(terwrite.valor,100,fp2);
        terwrite.valor[strcspn(terwrite.valor, "\n")] = 0;
        fgets(terwrite.disp,100,fp2);
        terwrite.disp[strcspn(terwrite.disp, "\n")] = 0;

        if(strcmp(terwrite.disp,"alugar") == 0){
            printf("Titulo: %s\n", terwrite.titulo);
            printf("Rua: %s\n", terwrite.rua);
            printf("Bairro: %s\n", terwrite.bairro);
            printf("Cep: %s\n", terwrite.cep);
            printf("Cidade: %s\n", terwrite.cidade);
            printf("Area: %s\n", terwrite.area);
            printf("Valor: %s\n", terwrite.valor);
            printf("Disponibilidade: %s\n", terwrite.disp);
            puts(" ");
        }
    }
    fclose(fp2);

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

void TituloDosImoveis(){

    printf("Imoveis disponiveis: \n");
    LerTituloCasa();
    LerTituloApt();
    LerTituloTer();
    printf("Pressione ENTER para continuar");
    getchar();
    system(CLEARTERM);

}

void ConsultaTodosImoveis(){

    LerTodoCasa();
    LerTodoApt();
    LerTodoTer();
    printf("Pressione ENTER para continuar");
    getchar();
    system(CLEARTERM);

}

int CheckVender(){

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
                CheckVenderCasa();
                printf("Pressione ENTER para continuar");
                getchar();
                system(CLEARTERM);
                break;
            case 50:
                system(CLEARTERM);
                CheckVenderApt();
                printf("Pressione ENTER para continuar");
                getchar();
                system(CLEARTERM);
                break;
            case 51:
                system(CLEARTERM);
                CheckVenderTer();
                printf("Pressione ENTER para continuar");
                getchar();
                system(CLEARTERM);
                break;
            default:
                system(CLEARTERM);
                printf("Erro\n");
                break;
        }
    }
}

int CheckAlugar(){

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
                CheckAlugarCasa();
                printf("Pressione ENTER para continuar");
                getchar();
                system(CLEARTERM);
                break;
            case 50:
                system(CLEARTERM);
                CheckAlugarApt();
                printf("Pressione ENTER para continuar");
                getchar();
                system(CLEARTERM);
                break;
            case 51:
                system(CLEARTERM);
                CheckAlugarTer();
                printf("Pressione ENTER para continuar");
                getchar();
                system(CLEARTERM);
                break;
            default:
                system(CLEARTERM);
                printf("Erro\n");
                break;
        }
    }
}

void CheckVenderPorBairro(){

    printf("Insira o nome do bairro: ");
    fgets(bairro,100,stdin);
    bairro[strcspn(bairro, "\n")] = 0;
    system(CLEARTERM);
    CheckBairroVenderCasa();
    CheckBairroVenderApt();
    CheckBairroVenderTer();
    printf("Pressione ENTER para continuar");
    getchar();
    system(CLEARTERM);

}

void CheckAlugarPorBairro(){

    printf("Insira o nome do bairro: ");
    fgets(bairro,100,stdin);
    bairro[strcspn(bairro, "\n")] = 0;
    system(CLEARTERM);
    CheckBairroAlugarCasa();
    CheckBairroAlugarApt();
    CheckBairroAlugarTer();
    printf("Pressione ENTER para continuar");
    getchar();
    system(CLEARTERM);
}

void CheckCidade(){

    printf("Insia o nome da cidade: ");
    fgets(cidade,100,stdin);
    cidade[strcspn(cidade, "\n")] = 0;
    system(CLEARTERM);
    CheckCidadeCasa();
    CheckCidadeApt();
    CheckCidadeTer();
    printf("Pressione ENTER para continuar");
    getchar();
    system(CLEARTERM);

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
                TituloDosImoveis();
                break;
            case 51:
                system(CLEARTERM);
                ConsultaTodosImoveis();
                break;
            case 52:
                system(CLEARTERM);
                CheckVender();
                break;
            case 53:
                system(CLEARTERM);
                CheckAlugar();
                break;
            case 54:
                system(CLEARTERM);
                CheckAlugarPorBairro();
                break;
            case 55:
                system(CLEARTERM);
                CheckVenderPorBairro();
                break;  
            case 56:
                system(CLEARTERM);
                CheckCidade();
                break;
            default:
                system(CLEARTERM);
                printf("Erro insira novamente\n");
                break;
        }

    }

    return 0;
}
