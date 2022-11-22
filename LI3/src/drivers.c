#include "drivers.h"


struct drivers {
    GHashTable *drivers;
};

Drivers new_drivers() {
    Drivers ds = malloc(sizeof(struct drivers));
    ds->drivers = g_hash_table_new(g_str_hash,g_str_equal);
    return ds;
}

void add_drivers(Driver d,Drivers ds) {
    g_hash_table_insert(ds->drivers,driver_get_id(d),cloneDriver(d));
}

Driver get_driverById(char* id,Drivers ds){
    return(g_hash_table_lookup(ds->drivers,id));
}

char* get_driversDriverCarClass (Drivers ds, char* id){
    char* aux;
    Driver r = get_driverById(id,ds);
    aux = strdup(driver_get_carClass(r));
    return aux;
}




