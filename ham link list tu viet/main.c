#include<stdio.h>
#include "link-list.h"
#include <malloc.h>
#include <string.h>
void main() {
	//tao list danh sach
	linked_list_t my_list;
	ll_create(&my_list);
	printf("So node ban dau:%d va dia chi node dau: %d\n", ll_get_len(&my_list), my_list.root_node);
	//tim so node
	my_list.len += 2;
	printf("so node duoc them vao la: %d", ll_get_len(&my_list));

}