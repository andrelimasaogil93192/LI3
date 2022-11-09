#ifndef USER__H
#define USER_H

#include "types.h"

typedef struct user* User;

User parse_user(char* line);

User cloneUser(User u);

char* user_get_username (User u);
char* user_get_name (User u);
char* user_get_gender (User u);
struct tm user_get_birthDate (User u);
struct tm user_get_accountCreation (User u);
char* user_get_payMethod (User u);
char* user_get_accountStatus (User u);

#endif 