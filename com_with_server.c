#include <gtk/gtk.h>
#include "com_with_server.h"

gboolean send_msg_to_server(const gchar *chat_friend_name, const gchar *msg){
    return TRUE;
}

gboolean build_chat_with_server(const gchar *chat_friend_name){
    return TRUE;
}

gboolean request_friends_list_from_server(gchar *username, gint *friends_num, gchar *friends_list[]){
    *friends_num = 3;
    friends_list[0] = "ABC";
    friends_list[1] = "xyz";
    friends_list[2] = "aaa";
    return TRUE;
}