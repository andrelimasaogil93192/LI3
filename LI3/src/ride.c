#include "ride.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ride {
    int ride_id;
    struct tm ride_date;
    int ride_driver_id;
    char* ride_user;
    char* city;
    int ride_distance;
    int score_user;
    int score_driver;
    double tip;
    char* comment;
} ;

Ride parse_ride (char* line) {
    Ride r = malloc(sizeof(struct ride));
    r->ride_id = atoi(strsep(&line,";"));
    r->ride_date = stringToTime(strdup(strsep(&line,";")));
    r->ride_driver_id = atoi(strsep(&line,";"));
    r->city = strdup(strsep(&line,";"));
    r->ride_distance = atoi(strsep(&line,";"));
    r->score_user = atoi(strsep(&line,";"));
    r->score_driver = atoi(strsep(&line,";"));
    r->tip = atoi(strsep(&line,";"));
    r->comment = strdup(strsep(&line,";"));
    return r;
    
}

int get_RideID (Ride r) {
    int aux ;
    aux = r->ride_driver_id;
    return aux;
}

struct tm get_rideDate (Ride r) { 
    struct tm aux;
    aux = r->ride_date;
    return aux;
}

int get_rideDriverID (Ride r) {
    int aux;
    aux = r->ride_driver_id;
    return aux;
}

char* get_rideUser (Ride r) {
    return strdup(r->ride_user);
}

char* get_city (Ride r) {
    return strdup(r->city);
} 

int get_rideDist (Ride r) {
    int aux;
    aux = r->ride_distance;
    return aux;
}

int get_scoreUser (Ride r) {
    int aux;
    aux = r->score_user;
    return aux;
}

int get_scoreDriver (Ride r) {
    int aux;
    aux = r->score_driver;
    return aux;
}

double get_tip (Ride r) {
    double aux;
    aux = r->tip;
    return aux;
} 

char* get_comment (Ride r) {
    return strdup(r->comment);
}



