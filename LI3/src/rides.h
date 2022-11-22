#ifndef RIDES_H
#define RIDES_H

#include <stdlib.h>
#include "ride.h"

typedef struct rides* Rides;

Rides new_rides();
void add_ride(Ride r,Rides rs);
Ride get_rideById(char* id, Rides rs);



#endif