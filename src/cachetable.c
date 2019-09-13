#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cachetable.h"

/* private declarations */

size_t _priv_hash(const char*, size_t); /* key, table size */
size_t _priv_next_prime(size_t);        /* current table size */
int _priv_is_prime(size_t);             /* possible prime number */

/* private definitions */

size_t
_priv_hash(const char* key, size_t table_size)
{
    size_t hash = 0;
    int iter;

    for(iter = 0; iter < strlen(key); ++iter)
    {
        hash += key[iter];
    }

    hash %= table_size;

    return hash;
}

size_t
_priv_next_prime(size_t curr)
{
    return 0;
}

int
_priv_is_prime(size_t possible)
{
    return 0;
}


/* public definitions */

/* memory management */

Cachetable*
Cachetable_new(void)
{
    Cachetable* ct = (Cachetable*) malloc(sizeof(Cachetable));
    if( !ct )
    {
        return NULL;
    }

    ct->size = INITIAL_SIZE;

    ct->table = (void*) malloc( sizeof(void*) * ct->size );
    if( !(ct->table) )
    {
        free(ct);
        return NULL;
    }

    return ct;
}

void
Cachetable_del(Cachetable* ct)
{

}

/* disk I/O */

int
Cachetable_load(Cachetable* ct, const char* filename)
{
    return 0;
}

int
Cachetable_store(Cachetable* ct, const char* filename)
{
    return 0;
}

/* cachetable operations */

int
Cachetable_insert(Cachetable* ct, const char* key, void* object)
{
    return 0;
}

void*
Cachetable_get(Cachetable* ct, const char* key)
{
    return NULL;
}

int
Cachetable_remove(Cachetable* ct, const char* key)
{
    return 0;
}

int
Cachetable_clear(Cachetable* ct)
{
    return 0;
}

