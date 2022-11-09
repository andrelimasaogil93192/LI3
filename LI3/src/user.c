#include "user.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct user { 
    char *username;
    char *name;
    char *gender; // temp??
    struct tm birth_date;
    struct tm account_creation;
    char *pay_method; // temp??
    char* account_status; //temp??
} ;

User parse_user (char* line) {
    User u = malloc(sizeof(struct user));
    u->username = strdup(strsep(&line,";"));
    u->name = strdup(strsep(&line,";"));
    u->gender = strdup(strsep(&line,";"));
    u->birth_date = stringToTime(strdup(strsep(&line,";")));
    u->account_creation = stringToTime(strdup(strsep(&line,";")));
    u->pay_method = strdup(strsep(&line,";"));
    u->account_status = strdup(strsep(&line,";"));
    return u;
}
   

char* get_username (User u) {
    return (strdup(u->username));
}

char* get_name (User u) {
    return (strdup(u->name));
}

char* get_gender (User u) {
    return (strdup(u->gender));
}

struct tm get_birthDate (User u) {
    struct tm aux;
    aux = u->birth_date;
    return aux;
}

struct tm get_accountCreation (User u) {
    struct tm aux;
    aux = u->account_creation;
    return aux;
}

char* get_payMethod (User u) {
    return (strdup(u->pay_method));
}

char* get_accountStatus (User u) {
    return (strdup(u->account_status));
}
    

