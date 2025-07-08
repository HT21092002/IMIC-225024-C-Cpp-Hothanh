
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "link_list.h"


link_list_t ll_1;
link_list_t ll_2;
int main() {

    ll_create(&ll_1);
    int len = ll_get_len(&ll_1);
    ll_add_node(&ll_1, 10);
    ll_add_node(&ll_1, 20);
    ll_add_node(&ll_1, 30);
    ll_add_node(&ll_1, 40);

    ll_print(&ll_1);

    ll_insert_node(&ll_1, 100, 1);

    printf("sau khi insert \n");
    ll_print(&ll_1);

    ll_remove_node(&ll_1, 3);

    printf("sau khi remove \n");
    ll_print(&ll_1);

    printf("doi tuong 40 o vi tri: %d \n", ll_search(&ll_1, 400));

    return 0;
}
