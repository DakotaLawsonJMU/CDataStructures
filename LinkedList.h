#include <stdlib.h>

typedef struct linkedList {
    size_t size;
    void ** data;
} linkedList_t;

struct linkedList_t *linkedList_create();

void linkedlist_setdata();

void linkedlist_add();

void *linkedlist_get();

size_t linkedlist_getsizeof();

size_t linkedlist_getsize();

void linkedlist_remove();

void linkedlist_clear();

void linkedlist_deallocate();

int linkedlist_getindex();