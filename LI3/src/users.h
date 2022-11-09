#ifndef USERS_H
#define USERS_H

#include <stdlib.h>
#include "user.h"

typedef struct users* Users;

Users new_users();
void add_user(User u, Users us );
User get_userByUsername (char* username, Users us);











#endif