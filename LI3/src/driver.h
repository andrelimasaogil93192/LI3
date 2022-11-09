#ifndef DRIVER_H
#define DRIVER_H

#include "types.h"

typedef struct driver* Driver;

Driver parse_driver (char* line);

int driver_get_Id (Driver d);
char* driver_get_name (Driver d);
struct tm driver_get_birthDay(Driver d);
char* driver_get_gender (Driver d);
char* driver_get_carClass (Driver d);
char* driver_get_licensePlate (Driver d);
char* driver_get_city (Driver d);
struct tm driver_get_accountCreation (Driver d);
char* driver_get_accountStatus (Driver d);

#endif 

