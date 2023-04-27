#define FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
#define MAX 10
#include "lib.h"

// nome/uso das funções
void FData(struct data *d);
void FHorario(struct horario *h);



//                               struct começa aqui
#ifndef DATA_H
#define DATA_H
typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;
struct Data aniversarios[10];

#endif


#ifndef HORARIO_H
#define HORARIO_H
typedef struct Horario {
    int horas;
    int minutos;
    int segundos;
} Horario;
struct Horario Alarme[10];
#endif


#ifndef PESSOA_H
#define PESSOA_H
typedef struct Pessoa {
    float altura;
    int idade;
    char sexo;
    float peso;
} Pessoa;
struct Pessoa povoado[10];

#endif /* PESSOA_H */
