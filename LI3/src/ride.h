#ifndef RIDE_H
#define RIDE_H

#include "types.h"

typedef struct ride* Ride;

Ride parde_ride (char* line);

int get_rideID (Ride r);
struct tm get_rideDate (Ride r);
int get_rideDriverID (Ride r);
char* get_rideUser (Ride r);
char* get_city (Ride r);
int get_rideDist (Ride r);
int get_scoreUser (Ride r);
int get_scoreDriver (Ride r);
double get_tip (Ride r);
char* get_comment (Ride r);

#endif
