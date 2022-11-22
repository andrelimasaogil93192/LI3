#include "driver.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct driver {
    char* id;
    char* name;
    struct tm birth_day;
    char* gender;
    CarClass car_class;
    char* license_plate;
    char* city;
    struct tm account_creation;
    char* account_status;
} ;



Driver parse_driver (char* line) {
    Driver d = malloc(sizeof(struct driver));
    d->id = strdup(strsep(&line,";"));
    d->name = strdup(strsep(&line,";"));
    d->birth_day = stringToTime(strdup(strsep(&line,";")));
    d->gender = strdup(strsep(&line,";"));
    
    char * aux = strdup(strsep(&line,";"));
    if(strcmp(aux,"basic")) {
        d->car_class = BASIC;
    };

     if(strcmp(aux,"green")) {
        d->car_class = GREEN;
    };

     if(strcmp(aux,"premium")) {
        d->car_class = PREMIUM;
    };
    
    
    d->license_plate = strdup(strsep(&line,";"));
    d->city = strdup(strsep(&line,";"));
    d->account_creation = stringToTime(strdup(strsep(&line,";")));
    d->account_status = strdup(strsep(&line,";"));
    return d;
}

Driver cloneDriver (Driver d) {
    Driver aux;
    aux = malloc(sizeof(struct driver));
    memcpy(aux,d,sizeof(struct driver));
    return aux;
}

char* driver_get_id (Driver d) {
    return strdup(d->id);
}

char* driver_get_name (Driver d) {
    return (strdup(d->name));
}

struct tm driver_get_birthDay (Driver d) {
    struct tm aux;
    aux = d->birth_day;
    return aux;
}

char* driver_get_gender (Driver d) {
    return (strdup(d->gender));
}

CarClass driver_get_carClass (Driver d) {
    return (d->car_class);
}

char* driver_get_licensePlate (Driver d) {
    return strdup(d->license_plate);
}

char* driver_get_city (Driver d) {
    return strdup(d->city);
}

struct tm driver_get_accountCreation (Driver d) {
    struct tm aux;
    aux = d->account_creation;
    return aux;
}

char* driver_get_accountStatus (Driver d) {
    return strdup(d->account_status);
}



