#include "users.h"
#include <stdlib.h>
#include "glib-2.0/glib.h"


struct users {
    GHashTable *users;

};

Users new_users () {
    Users u = malloc(sizeof(struct users));
    u->users = g_hash_table_new(g_str_hash,g_str_equal);
    return u;
} 

void add_user(User u, Users us) {
    g_hash_table_insert(us->users,user_get_username(u),cloneUser(u));
}

User get_userByUsername (char* username, Users us) {
    g_hash_table_lookup(us->users,usarneme);
}



