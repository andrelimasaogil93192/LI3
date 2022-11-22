#ifndef DRIVERS_H
#define DRIVERS_H

#include <stdlib.h>
#include "driver.h"
#include <stdlib.h>
#include <glib.h>
#include <string.h>

typedef struct drivers* Drivers;

Drivers new_drivers();
void add_drivers(Driver d,Drivers ds);
Driver get_driverById(char* id,Drivers ds);
char* get_driversDriverCarClass (Drivers ds, char* id);














#endif