#include "LinkedList.h"


linkedList_t* linked_list_create() {
    linkedList_t* list = (linkedList_t*) malloc(sizeof(linkedList_t));
    list->size = 0;
    list->head = NULL;
    return list;
}

int linked_list_add(linkedList_t* list, void* data, int index) {
    if (list == NULL || index > list->size - 1) return -1;
    node_t* new_node = (node_t*) malloc(sizeof(node_t));
    new_node->data = data;

    node_t* prev_node = NULL;
    node_t* next_node = list->head;

    for (int i = 0; i < index; i++) {
        prev_node = next_node;
        next_node = next_node->next;
    }

    if (prev_node != NULL) prev_node->next = new_node;
    else list->head = new_node;

    new_node->next = next_node;

    list->size++;
    return 0;
}

void* linked_list_get(linkedList_t* list, int index) { 
    if (list == NULL || index > list->size - 1) return NULL;
    node_t* out_node = list->head;

    for (int i = 0; i < index; i++) {
        out_node = out_node->next;
    }

    return out_node->data;
}

size_t linked_list_size(linkedList_t* list) {
    return list->size;
}

bool is_empty(linkedList_t* list) {
    return list->size == 0;
}

void* linked_list_remove(linkedList_t* list, int index) {
    if (list == NULL || index > list->size - 1 || list->size <= 0) return NULL;

    node_t* prev_node = NULL;
    node_t* curr_node = list->head;

    for (int i = 0; i < index; i++) {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    node_t* next_node = curr_node->next;

    if (prev_node != NULL) prev_node->next = next_node;
    else list->head = next_node;

    void* data = curr_node->data;
    free(curr_node);

    list->size--;
    
    return data;
}

void linked_list_clear(linkedList_t* list) {
    linked_list_free(list);
    list = (linkedList_t*) malloc(sizeof(linkedList_t));
    list->size = 0;
    list->head = NULL;
}

void linked_list_free(linkedList_t* list) {
    node_t* curr_node = list->head;

    while (curr_node != NULL) {
        node_t* next_node = curr_node->next;
        free(curr_node);
        curr_node = next_node;
    }

    free(list);
}
