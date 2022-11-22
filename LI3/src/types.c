#include "types.h"

#define DELIM_DATA "/\n\0"
#define DIA 9
#define MES 10
#define ANO 2022

struct tm stringToTime (char* line) {
    struct tm aux;
    aux.tm_mday = atoi(strdup(strsep(&line,DELIM_DATA)));
    aux.tm_mon = atoi(strdup(strsep(&line,DELIM_DATA)));
    aux.tm_year = atoi(strdup(strsep(&line,DELIM_DATA)));
    return aux;
}

struct tm dateToStruct (int day, int month, int year) {
    struct tm aux;
    aux.tm_mday = day;
    aux.tm_mon = month;
    aux.tm_year = year;
    return aux;
}

int calculaIdade (struct tm referencia, struct tm nascimento){
    int idade;
    if((referencia.tm_mday >= nascimento.tm_mday && referencia.tm_mon == nascimento.tm_mon) || (referencia.tm_mon > nascimento.tm_mon)){
        idade = referencia.tm_year - nascimento.tm_year;
    }
    else {
        idade = referencia.tm_year - nascimento.tm_year - 1;
    }

    return idade;
}

int digits_only(char *s)
{
    while (*s) {
        if (isdigit(*s++) == 0) return 0;
    }

    return 1;
}



