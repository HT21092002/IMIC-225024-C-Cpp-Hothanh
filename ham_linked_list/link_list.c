#include <stdio.h>
#include <stdlib.h>
#include "link_list.h"

void Create(linked_list_t* list) {
    list->root_node = NULL;
    list->len = 0;
}

int GetLen(linked_list_t* list) {
    return list->len;
}

void Add(linked_list_t* list, int value) {
    // Cấp phát bộ nhớ cho node mới
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next_node_addr = NULL;

    if (list->root_node == NULL) {
        list->root_node = new_node;
    }
    else {
        node_t* current = list->root_node;
        while (current->next_node_addr != NULL) {
            current = current->next_node_addr;
        }
        current->next_node_addr = new_node;
    }

    list->len++;
}
int GetValueIndex(linked_list_t* list, int index) {
    if (index < 0 || index >= list->len) {
        // Index không hợp lệ
        printf("Lỗi: Index không hợp lệ!\n");
        return -1;
    }

    node_t* current = list->root_node;
    int i = 0;

    while (i < index) {
        current = current->next_node_addr;
        i++;
    }

    return current->value;
}