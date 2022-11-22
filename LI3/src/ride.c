#include "ride.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ride {
    char* ride_id;
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
    r->ride_id = strdup(strsep(&line,";"));
    r->ride_date = stringToTime(strdup(strsep(&line,";")));
    r->ride_driver_id = atoi(strsep(&line,";"));
    r->ride_user = strdup(strsep(&line,";"));
    r->city = strdup(strsep(&line,";"));
    r->ride_distance = atoi(strsep(&line,";"));
    r->score_user = atoi(strsep(&line,";"));
    r->score_driver = atoi(strsep(&line,";"));
    r->tip = atoi(strsep(&line,";"));
    r->comment = strdup(strsep(&line,";"));
    return r;
    
}

Ride cloneRide(Ride r){
    Ride aux;
    aux = malloc(sizeof(struct ride));
    memcpy(aux,r,sizeof(struct ride));
    return aux;
}

char* ride_get_Id (Ride r) {
    return strdup(r->ride_id);
}

struct tm ride_get_date (Ride r) { 
    struct tm aux;
    aux = r->ride_date;
    return aux;
}

int ride_get_driverId (Ride r) {
    int aux;
    aux = r->ride_driver_id;
    return aux;
}

char* ride_get_User (Ride r) {
    return strdup(r->ride_user);
}

char* ride_get_city (Ride r) {
    return strdup(r->city);
} 

int ride_get_Dist (Ride r) {
    int aux;
    aux = r->ride_distance;
    return aux;
}

int ride_get_scoreUser (Ride r) {
    int aux;
    aux = r->score_user;
    return aux;
}

int ride_get_scoreDriver (Ride r) {
    int aux;
    aux = r->score_driver;
    return aux;
}

double ride_get_tip (Ride r) {
    double aux;
    aux = r->tip;
    return aux;
} 

char* ride_get_comment (Ride r) {
    return strdup(r->comment);
}



