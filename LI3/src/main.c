#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <ctype.h>

#include "user.h"
#include "driver.h"
#include "ride.h"
#include "users.h"
#include "drivers.h"
#include "rides.h"

void main(){

    Users us = new_users();
    Drivers ds = new_drivers();   
    Rides rs = new_rides();

    char *buffer_user = malloc(sizeof(char)* 10000);
    FILE *user_data = fopen("data/users.csv","r"); 
    fgets(buffer_user,1000,user_data);
    while (fgets(buffer_user,1000,user_data)){
        add_user(parse_user(buffer_user),us);
    }
    free (buffer_user);
    fclose(user_data);

    char *buffer_driver = malloc(sizeof(char)* 10000);
    FILE *drives_data = fopen("data/drivers.csv","r"); 
    fgets(buffer_driver,1000,drives_data);
    while (fgets(buffer_driver,1000,drives_data)){
        add_drivers(parse_driver(buffer_driver),ds);
    }
    free (buffer_driver);
    fclose(drives_data);

    
    char *buffer_ride = malloc(sizeof(char)* 10000);
    FILE *rides_data = fopen("data/rides.csv","r"); 
    fgets(buffer_ride,1000,rides_data);
    while (fgets(buffer_ride,1000,user_data)){
        add_ride(parse_ride(buffer_ride),rs);
    }
    free (buffer_ride);
    fclose(rides_data);
}