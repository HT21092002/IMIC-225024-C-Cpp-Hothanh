#pragma once
typedef struct {
	int value;
	void* next_node_addr;
}node_t;
typedef struct {
	int len;
	node_t* root_node;
}linked_list_t;
void ll_create(linked_list_t* ll);
int ll_get_len(linked_list_t* ll);
void ll_add_node(linked_list_t* ll, int val);

