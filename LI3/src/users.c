#include "users.h"
#include <stdlib.h>
#include <glib.h>


struct users {
    GHashTable *users;
};

Users new_users () {
    Users us = malloc(sizeof(struct users));
    us->users = g_hash_table_new(g_str_hash,g_str_equal);
    return us;
} 

void add_user(User u, Users us) {
    g_hash_table_insert(us->users,user_get_username(u),cloneUser(u));
}

User get_userByUsername (char* username, Users us) {
    return(g_hash_table_lookup(us->users,username));
}



