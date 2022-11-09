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

    char *buffer_aux = malloc(sizeof(char)* 10000);
    FILE *user_data = fopen("./users.csv","r"); 
    fgets(buffer_aux,1000,user_data);
    while (fgets(buffer_aux,1000,user_data)){
        parse_user(buffer_aux);
    }
    free (buffer_aux);
    fclose(user_data);

    char *buffer_aux = malloc(sizeof(char)* 10000);
    FILE *drives_data = fopen("./drivers.csv","r"); 
    fgets(buffer_aux,1000,drives_data);
    while (fgets(buffer_aux,1000,drives_data)){
        parse_driver(buffer_aux);
    }
    free (buffer_aux);
    fclose(drives_data);

    
    char *buffer_aux = malloc(sizeof(char)* 10000);
    FILE *rides_data = fopen("./rides.csv","r"); 
    fgets(buffer_aux,1000,rides_data);
    while (fgets(buffer_aux,1000,user_data)){
        parse_ride(buffer_aux);
    }
    free (buffer_aux);
    fclose(rides_data);
}
