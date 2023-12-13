#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
  void* data;
  struct node* next;
} node_t;

typedef struct linkedList {
    size_t size;
    node_t* head;
} linkedList_t;

// Creates a new linked list struct and inits the size to 0 and the head pointer to NULL.
linkedList_t* linked_list_create();

// TODO: add a constructor thing that makes a linked list from an array

/* 
Adds the provided element to the provided linked list at the index specified.
@param list the list to add an element to
@param data the data to be added
@param index the index where the data will be stored in the list
@return -1 if unsuccessful, otherwise will return 0
*/
int linked_list_add(linkedList_t* list, void* data, int index);

// TODO: addAll function

/* 
Retrieves the element stored in the linked list at the index specified.
@param list the list to get an element from
@param index the index where the data is in the list
@return a void* which points to the stored data. The void* will be NULL if the index given was not in the list.
*/
void* linked_list_get(linkedList_t* list, int index);

// TODO: contains and containsAll functions

// TODO: equals function

// TODO: indexOf and lastIndexOf

/* 
Returns the size of the list as a size_t.
@param list the list in question
*/
size_t linked_list_size(linkedList_t* list);

/* 
Returns true if the list is empty.
@param list the list in question
*/
bool is_empty(linkedList_t* list);

/* 
Removes the element stored in the linked list at the index specified.
@param list the list to remove an element from
@param index the index where the data is in the list
@return a void* which points to the data that was at the index. The void* will be NULL if the index given was not in the list.
*/
void* linked_list_remove(linkedList_t* list, int index);

// TODO: removeAll function

// TODO: subList function

// TODO: toArray function

/*
Frees all of the allocated space on the heap used for the linked list, then reinits the list.
@param list the linked list to clear
*/
void linked_list_clear();

/*
Frees all of the allocated space on the heap used for the linked list.
@param list the linked list to free
*/
void linked_list_free(linkedList_t* list);
