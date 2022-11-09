#ifndef DRIVER_H
#define DRIVER_H

#include "types.h"

typedef struct driver* Driver;

Driver parse_driver (char* line);

int get_Id (Driver d);
char* get_name (Driver d);
struct tm get_birthDay(Driver d);
char* get_gender (Driver d);
char* get_carClass (Driver d);
char* get_licensePlate (Driver d);
char* get_city (Driver d);
struct tm get_accountCreation (Driver d);
char* get_accountStatus (Driver d);

#endif 

