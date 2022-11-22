#include "estatistica.h"

struct estatistica {
    Users us;
    Drivers ds;
    Rides rs;
};



Estatistica initEstatistica () {
    Estatistica e = malloc(sizeof(struct estatistica));
    e->us = new_users();
    e->ds = new_drivers();
    e->rs = new_rides();
    return e;
}

Users getUsers(Estatistica e) {
    return e->us;
}

Drivers getDrivers(Estatistica e) {
    return e->ds;
}

Rides getRides(Estatistica e) {
    return e->rs;
}

User getUserByIdEst(Estatistica e, int id) {
    Users users = getUsers(e);
    return get_userByUsername(users, id);
}

Driver getDriverByIdEst(Estatistica e, int id) {
    Drivers drivers = getDrivers(e);
    return get_driverById(drivers, id);
}

