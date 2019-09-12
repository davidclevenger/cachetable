#ifndef __CACHETABLE_H
#define __CACHETABLE_H

struct cachetable
{
    size_t size;
    void** table;
};

typedef cachetable Cachetable;

/* memory management */
Cachetable new_Cachetable(void);
void del_Cachetable(Cachetable*);               /* cachetable instance */

/* disk I/O */
int Cachetable_load(Cachetable*, const char*);  /* cachetable instance, filename to load from */
int Cachetable_store(Cachetable*, const char*); /* cachetable instance, filename to store to */

/* cachetable operations */
int Cachetable_insert(const char*, void*);      /* key, object */
void* Cachetable_get(const char*);              /* key */
int Cachetable_remove(const char*);             /* key */
int Cachetable_clear(void);

#endif

