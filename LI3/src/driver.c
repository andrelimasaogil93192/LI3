#include "driver.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct driver {
    int id;
    char* name;
    struct tm birth_day;
    char* gender;
    char* car_class;
    char* license_plate;
    char* city;
    struct tm account_creation;
    char* account_status;
} ;

Driver parse_driver (char* line) {
    Driver d = malloc(sizeof(struct driver));
    d->id = atoi(strsep(&line,";"));
    d->name = strdup(strsep(&line,";"));
    d->birth_day = stringToTime(strdup(strsep(&line,";")));
    d->gender = strdup(strsep(&line,";"));
    d->car_class = strdup(strsep(&line,";"));
    d->license_plate = strdup(strsep(&line,";"));
    d->city = strdup(strsep(&line,";"));
    d->account_creation = stringToTime(strdup(strsep(&line,";")));
    d->account_status = strdup(strsep(&line,";"));
    return d;
}

int driver_get_Id (Driver d) {
    int aux;
    aux = d->id;
    return aux;
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
    return strdup(d->gender);
}

char* driver_get_carClass (Driver d) {
    return strdup(d->car_class);
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



