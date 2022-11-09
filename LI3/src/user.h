#ifndef USER__H
#define USER_H

#include "types.h"

typedef struct user* User;

User parse_user(char* line);

char* get_username (User u);
char* get_name (User u);
char* gender (User u);
struct tm get_birthDate (User u);
struct tm get_accountCreation (User u);
char* get_payMethod (User u);
char* get_accountStatus (User u);

#endif USER_H