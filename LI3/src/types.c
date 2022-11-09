#include "types.h"
#define DELIM_DATA "/\n\0"

struct tm stringToTime (char* line) {
    struct tm aux;
    aux.tm_mday = atoi(strdup(strsep(&line,DELIM_DATA)));
    aux.tm_mon = atoi(strdup(strsep(&line,DELIM_DATA)));
    aux.tm_year = atoi(strdup(strsep(&line,DELIM_DATA)));
    return aux;
}

