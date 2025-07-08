#include<stdio.h>
#include "link-list.h"
#include <malloc.h>
#include <string.h>
void ll_create(linked_list_t* ll) {
	ll->len = 0;
	ll->root_node = 0;
}
int ll_get_len(linked_list_t* ll) {
	return ll->len;
}
static node_t* ll_get_node(linked_list_t* ll, int index)
{
	node_t* now = ll->root_node;
	for (int i = 0; i < index; i++)
	{
		now = now->next_node_addr;
	}
	return now;
}
void ll_add_node(linked_list_t* ll, int val) {
	node_t* node = malloc(sizeof(node_t));
	if (node == NULL) {
		return -1;
	}
	memset(node, 0, sizeof(node_t)); //dat toan bo vung nho cua node bang 0 de tranh gia tri rac
	node->value = val;
	node->next_node_addr = NULL;
	if (ll->len == 0) {
		ll->root_node = node;
	} else
}