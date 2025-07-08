#include "link_list.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>
void ll_create(link_list_t* ll)
{
	ll->len = 0;
	ll->root_node_addr = 0;
}

int ll_get_len(link_list_t* ll)
{
	return ll->len;
}

static node_t* ll_get_node(link_list_t* ll, int index)
{
	node_t* now = ll->root_node_addr;
	for (int i = 0; i < index; i++)
	{
		now = now->next_node_addr;
	}
	return now;
}

void ll_add_node(link_list_t* ll, int val)
{
	node_t* node = malloc(sizeof(node_t));
	if (node == NULL)
		return;
	memset(node, 0, sizeof(node_t));
	node->value = val;

	if (ll->len == 0)
	{
		ll->root_node_addr = node;
	}
	else
	{
		ll_get_node(ll, ll->len - 1)->next_node_addr = node;
	}
	ll->len++;

}

void ll_print(link_list_t* ll)
{
	for (int i = 0; i < ll->len; i++)
	{
		printf("[%d] value: %d \n", i, ll_get_node(ll, i)->value);
	}
}

void ll_insert_node(link_list_t* ll, int val, int index)
{
	node_t* new_node = calloc(1, sizeof(node_t));
	if (new_node == NULL)
		return;
	new_node->value = val;
	new_node->next_node_addr = ll_get_node(ll, index);
	ll_get_node(ll, index - 1)->next_node_addr = new_node;
	ll->len++;
}

void ll_remove_node(link_list_t* ll, int index)
{
	node_t* node_pre_index = ll_get_node(ll, index - 1);
	node_t* node_index = ll_get_node(ll, index);
	node_t* node_next_index = ll_get_node(ll, index + 1);
	node_pre_index->next_node_addr = node_next_index;
	free(node_index);
	ll->len--;
}

int ll_search(link_list_t* ll, int val)
{
	for (int i = 0; i < ll->len; i++)
	{
		if (ll_get_node(ll, i)->value == val)
			return i;
	}
	return -1;
}