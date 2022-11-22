#ifndef TYPES_H
#define TYPES_H


#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef enum carClass{
    BASIC = 0,
    GREEN = 1,
    PREMIUM = 2
} CarClass;


struct tm stringToTime (char* line);
struct tm dateToStruct (int day, int month, int year);
int calculaIdade (struct tm referencia, struct tm nascimento);
int digits_only(const char *s);

#endif