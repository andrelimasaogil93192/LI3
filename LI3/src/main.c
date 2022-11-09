#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <ctype.h>

#include "user.h"
#include "driver.h"
#include "ride.h"
#include "users.h"

void main(){   

    char *buffer_user = malloc(sizeof(char)* 10000);
    FILE *user_data = fopen("./users.csv","r"); 
    fgets(buffer_user,1000,user_data);
    while (fgets(buffer_user,1000,user_data)){
        parse_user(buffer_user);
    }
    free (buffer_user);
    fclose(user_data);

    char *buffer_driver = malloc(sizeof(char)* 10000);
    FILE *drives_data = fopen("./drivers.csv","r"); 
    fgets(buffer_driver,1000,drives_data);
    while (fgets(buffer_driver,1000,drives_data)){
        parse_driver(buffer_driver);
    }
    free (buffer_driver);
    fclose(drives_data);

    
    char *buffer_ride = malloc(sizeof(char)* 10000);
    FILE *rides_data = fopen("./rides.csv","r"); 
    fgets(buffer_ride,1000,rides_data);
    while (fgets(buffer_ride,1000,user_data)){
        parse_ride(buffer_ride);
    }
    free (buffer_ride);
    fclose(rides_data);
}