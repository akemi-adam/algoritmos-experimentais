#include <stdlib.h>
#include <sting.h>

#define NEW_VECTOR_SIZE_FACTOR 2

struct Node
{
    struct Node *next;
    void* state; // State of automaton
};

struct HashTable
{
    struct Node **vector;
    int total_places;
    int occupied_places;
};

struct State
{
    char id[2];
    struct HashTable *transitions;
};

int hash(char symbol, int n)
{
    return (symbol - '0') % n;
}

void table_init(struct HashTable *table, int n)
{
    table->total_places = n;
    for (unsigned int i = 0; i < table->total_places; i++)
        table->vector[i] = NULL;
}

void table_fill(struct HashTable *table)
{
    table->places *= NEW_VECTOR_SIZE_FACTOR;
    for (:
}

void table_add(struct HashTable *table, char symbol, struct State *state)
{
    // Verify the load factor here
    int i = hash(symbol, table.free_places);
    struct Node node = (struct Node*) malloc(sizeof(struct Node));
    
    // table->vector[i] = 
}



int main(int argc, char **argv)
{
    return 0;
}
