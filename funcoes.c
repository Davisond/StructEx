#include "funcoes.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//                  crie funções para ler os dados de cada TDA


//função referênte a leitura da data
void FData(data * d){
    printf("digite o dia");
    scanf("%d",&d->dia);

    printf("Digite o mes: ");
    scanf("%d", &d->mes);

    printf("Digite o ano: ");
    scanf("%d", &d->ano);
}

// Função referente a horario
void FHorario(struct horario *h) {
    printf("Digite a hora: ");
    scanf("%d", &h->horas);

    printf("Digite os minutos: ");
    scanf("%d", &h->minutos);

    printf("Digite os segundos: ");
    scanf("%d", &h->segundos);
}

//Função que inicializa os dados coletados ref a data
void InicializaData(Data * d, int dia, int mes, int ano){
    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
}


// Função que inicializa os dados coletados ref a horario
void InicializaHorario(Horario *h, int horas, int minutos, int segundos) {
    h->horas = horas;
    h->minutos = minutos;
    h->segundos = segundos;
}


//Crie funções para imprimir os dados de cada um dos TADs já preenchidos
void ImprimeData(Data * d){
    printf("horas digitadas %d", &data->horas);
}
