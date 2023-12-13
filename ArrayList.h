#include <stdlib.h>

typedef struct arrayList {
    size_t size;
    void ** data;
} arrayList_t;

struct arrayList_t *arraylist_create();

void arraylist_setdata();

void arraylist_add();

void *arraylist_get();

size_t arraylist_getsizeof();

size_t arraylist_getsize();

void arraylist_remove();

void arraylist_clear();

void arraylist_deallocate();

int arraylist_getindex();