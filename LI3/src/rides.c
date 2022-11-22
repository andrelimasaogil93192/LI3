#include "rides.h"
#include <stdlib.h>
#include <glib.h>
#define DIA 9
#define MES 10
#define ANO 2022

struct rides{
    GHashTable *rides;
    GHashTable *userInfo;
    GHashTable *driverInfo;
} ;

struct driverOrUser {
    char* id;
    int idade;
    int nmr_Viagens;
    double avaliacao;
    double total;
};



Rides new_rides(){
    Rides r = malloc(sizeof(struct rides));
    r->rides = g_hash_table_new(g_str_hash,g_str_equal);
    r->userInfo = g_hash_table_new(g_str_hash,g_str_equal);
    r->driverInfo = g_hash_table_new(g_str_hash,g_str_equal);
    return r;
}

void add_ride(Ride r, Rides rs, Users us, Drivers ds){
    g_hash_table_insert(rs->rides,ride_get_Id(r),cloneRide(r));
    addUserInfo(r,rs,us,ds);
    addDriverInfo(r,rs,us,ds);
}

void addUserInfo (Ride r, Rides rs, Users us, Drivers ds) {
    struct tm aux = dateToStruct(DIA,MES,ANO);
    if(!g_hash_table_contains(rs->userInfo,ride_get_User(r))) {
        driverOrUser* new = malloc(sizeof(struct driverOrUser));
        new->id = strdup(ride_get_User(r));
        new->idade = calculaIdade(user_get_birthDate(get_userByUsername(ride_get_User(r))),aux);
        new->nmr_Viagens = 1;
        new->avaliacao = ride_get_scoreUser(r);
        CarClass cc = driver_get_carClass(get_driverById(ride_get_driverID(r),ds));
        switch (cc) {
            case BASIC :
                new->total = 3,25 + ride_get_dist(r)* 0.62;
            case GREEN :
                new->total = 4 + ride_get_dist(r) * 0.79;
            case PREMIUM
                new->total = 5,20 + ride_get_dist(r) * 0.94;
            
        }
        g_hash_table_insert(rs->userInfo,ride_get_User(r),new);
    }
    else {
        driverOrUser exist = malloc(sizeof(struct driverOrUser));
        exist = (driverOrUser*)g_hash_table_lookup(rs->userInfo,ride_get_User(r));
        exist->nmr_Viagens++;
        exist->avaliacao += ride_get_scoreUser(r);
        CarClass cc = driver_get_carClass(get_driverById(ride_get_driverID(r),ds));
        switch (cc) {
            case BASIC :
                exist->total += 3,25 + ride_get_dist(r)* 0.62;
            case GREEN :
                exist->total += 4 + ride_get_dist(r) * 0.79;
            case PREMIUM :
                exist->total += 5,20 + ride_get_dist(r) * 0.94;
            
        }
        g_hash_table_insert(rs->userInfo,ride_get_User(r),exist);
    }
}

void addDriverInfo (Ride r, Rides rs, Users us, Drivers ds) {
    struct tm aux = dateToStruct(DIA,MES,ANO);
    if(!g_hash_table_contains(rs->driverInfo,ride_get_driverID(r))) {
        driverOrUser* new = malloc(sizeof(struct driverOrUser));
        new->id = strdup(ride_get_driverID(r));
        new->idade = calculaIdade(driver_get_birthDay(get_driverById(ride_get_driverID)),aux)
        new->nmr_Viagens = 1;
        new->avaliacao = ride_get_scoreDriver(r);
        CarClass cc = driver_get_carClass(get_driverById(ride_get_driverID(r),ds));
        switch (cc) {
            case BASIC :
                new->total = 3,25 + ride_get_dist(r)* 0.62;
            case GREEN :
                new->total = 4 + ride_get_dist(r) * 0.79;
            case PREMIUM :
                new->total = 5,20 + ride_get_dist(r) * 0.94;
            
        }
        g_hash_table_insert(rs->driverInfo,ride_get_driverID(r),new);
    }
    else {
        driverOrUser exist = malloc(sizeof(struct driverOrUser));
        exist = (driverOrUser*)g_hash_table_lookup(rs->driverInfo,ride_get_driverID(r));
        exist->nmr_Viagens++;
        exist->avaliacao += ride_get_scoreDriver(r);
        CarClass cc = driver_get_carClass(get_driverById(ride_get_driverID(r),ds));
        switch (cc) {
            case BASIC :
                exist->total += 3,25 + ride_get_dist(r)* 0.62;
            case GREEN :
                exist->total += 4 + ride_get_dist(r) * 0.79;
            case PREMIUM :
                exist->total += 5,20 + ride_get_dist(r) * 0.94;
            
        }
        g_hash_table_insert(rs->driverInfo,ride_get_driverID(r),exist);
    }
}

Ride get_rideById(char* Id,Rides rs){
    return(g_hash_table_lookup(rs->rides,Id));
}