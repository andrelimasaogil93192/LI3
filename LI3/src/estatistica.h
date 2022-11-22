#ifndef ESTATISTICA_H
#define ESTATISTICA_H

#include "users.h"
#include "drivers.h"
#include "rides.h"

typedef struct estatistica* Estatistica;

Estatistica initEstatistica ();

Users getUsers(Estatistica e);
Drivers getDrivers(Estatistica e);
Rides getRides(Estatistica e);

User getUserByIdEst(Estatistica e, int id);
Driver getDriverByIdEst(Estatistica e, int id);

#endif