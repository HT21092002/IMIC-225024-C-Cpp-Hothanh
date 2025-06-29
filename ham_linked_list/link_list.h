typedef struct node {
    int value;
    struct node* next_node_addr;
} node_t;

typedef struct {
    node_t* root_node;
    int len;
} linked_list_t;

// Các hàm xử lý
void Create(linked_list_t* list);
int GetLen(linked_list_t* list);
void Add(linked_list_t* list, int value);
int GetValueIndex(linked_list_t* list, int index);