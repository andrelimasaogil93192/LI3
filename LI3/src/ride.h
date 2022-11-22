#ifndef RIDE_H
#define RIDE_H

#include "types.h"

typedef struct ride* Ride;

Ride parse_ride (char* line);

Ride cloneRide (Ride r);
char* ride_get_Id (Ride r);
struct tm ride_get_date (Ride r);
int ride_get_driverID (Ride r);
char* ride_get_User (Ride r);
char* ride_get_city (Ride r);
int ride_get_dist (Ride r);
int ride_get_scoreUser (Ride r);
int ride_get_scoreDriver (Ride r);
double ride_get_tip (Ride r);
char* ride_get_comment (Ride r);

#endif
