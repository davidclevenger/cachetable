#ifndef __CACHETABLE_H
#define __CACHETABLE_H

struct cachetable
{
    size_t size;
    void** table;
};

typedef cachetable Cachetable;

/* memory management */
Cachetable Cachetable_new(void);
void Cachetable_del(Cachetable*);                       /* cachetable instance */

/* disk I/O */
int Cachetable_load(Cachetable*, const char*);          /* cachetable instance, filename to load from */
int Cachetable_store(Cachetable*, const char*);         /* cachetable instance, filename to store to */

/* cachetable operations */
int Cachetable_insert(Cachetable*, const char*, void*); /* cachetable instance, key, object */
void* Cachetable_get(Cachetable*, const char*);         /* cachetable instance, key */
int Cachetable_remove(Cachetable*, const char*);        /* cachetable instance, key */
int Cachetable_clear(Cachetable*);                      /* cachetable instance */

#endif

