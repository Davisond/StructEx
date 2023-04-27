#include "funcoes.h"
#include <stdio.h>

//                  Declare variáveis novo tipo de dados data
    Data data;
    printf ("digite o dia");
    scanf("%d",&data.dia);
if (data.dia > 31) {
    printf("dia não existe");
    return 1;
}

printf("digite o mes");
scanf("%d", &data.mes);
if (data.mes > 12 || data.mes < 1) {
printf("mes inválido");
return 1;
}
printf("digite o ano");
scanf("%d", &data.ano);



//                  Declare variáveis novo tipo de dados horário
Horario horario;
printf("Digite a hora");
scanf("%d", &horario.horas);
if (horario.horas < 0 || horario.horas > 23) {
printf("hora inválida");
return 1;
}

printf("Digite os minutos");
scanf("%d", &horario.minutos);
if (horario.minutos > 59 || horario.minutos < 0) {
printf("minuto inválido");
return 1;
}
printf("Digite os segundos");
scanf("%d", &horario.segundos);
if (horario.segundos > 59 || horario.segundos < 0) {
printf("tem coisa errada");
return 1;
}



//                  Declare variáveis novo tipo de dados pessoa
Pessoa pessoa;

printf("Digite a altura em metros ");
scanf("%f", &pessoa.altura);
// Validação dos dados
if (pessoa.altura < 0 || pessoa.altura > 2.5) {
printf("tem coisa errada");
return 1;
}

printf("Digite a idade ");
scanf("%d", &pessoa.idade);
// Validação dos dados
if (pessoa.idade < 0 || pessoa.idade > 150) {
printf("tem coisa errada\n");
return 1;
}

printf("Digite o sexo ");
scanf(" %c", &pessoa.sexo);
// Validação dos dados

printf("Digite o peso em kg ");
scanf("%f", &pessoa.peso);
// Validação dos dados
if (pessoa.peso < 0 || pessoa.peso > 500) {
printf("tem coisa errada");
return 1;
}


