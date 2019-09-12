#include "cachetable.h"

/* private declarations */

size_t _priv_hash(const char*); /* key */

/* private definitions */

size_t
_priv_hash(const char* key)
{
    size_t hash;

    return hash;
}


/* public definitions */

/* memory management */

Cachetable
Cachetable_new(void)
{

}

void
Cachetable_del(Cachetable* ct)
{

}

/* disk I/O */

int
Cachetable_load(Cachetable* ct, const char* filename)
{

}

int
Cachetable_store(Cachetable* ct, const char* filename)
{

}

/* cachetable operations */

int
Cachetable_insert(Cachetable* ct, void* object)
{

}

void*
Cachetable_get(Cachetable* ct, const char* key)
{

}

int
Cachetable_remove(Cachetable* ct, const char* key)
{

}

int
Cachetable_clear(Cachetable* ct)
{

}

