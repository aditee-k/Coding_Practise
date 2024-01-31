#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Set 
{
    int size;
    int items[MAX_SIZE];
} Set;

void init(Set *s) 
{
    s->size = 0;
}

void insert(Set *s, int x) {
    // O(1) time complexity
    s->items[s->size++] = x;
}

void remove_bottom_half(Set *s) 
{
    // O(n) time complexity
    int bottom_half_size = (s->size + 1) / 2;
    for (int i = 0; i < bottom_half_size; i++) {
        s->items[i] = s->items[i + bottom_half_size];
    }
    s->size -= bottom_half_size;
}