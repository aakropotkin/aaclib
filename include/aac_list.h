
#ifndef _AAC_LIST_H
#define _AAC_LIST_H

/* ========================================================================== */

#include <stddef.h>


/* -------------------------------------------------------------------------- */

struct llist_s;
typedef struct llist_s  llist_t;

typedef int (*llist_elem_cmp_fn)( void * e1, void * e2 );
typedef int (*llist_foreach_fn)( llist_t *, void * elem, void * data );


/* -------------------------------------------------------------------------- */

llist_t * llist_create( size_t elem_size );
void      llist_destroy( llist_t * );

int llist_empty_p( llist_t * );
int llist_contains_p( llist_t *, void * elem, llist_elem_cmp_fn cmp );
int llist_sorted_p( llist_t *, llist_elem_cmp_fn cmp );
int llist_unique_p( llist_t *, llist_elem_cmp_fn cmp );

size_t llist_length( llist_t * );

void llist_add( llist_t *, void * elem );
void llist_insert( llist_t *, size_t index, void * elem );
void llist_remove( llist_t *, void * elem, llist_elem_cmp_fn cmp );

/** Returns 1 if replacement was performed, 0 otherwise. */
int  llist_replace( llist_t *, void * e1, void * e2, llist_elem_cmp_fn cmp );
void llist_reverse( llist_t * );
void llist_sort( llist_t *, llist_elem_cmp_fn cmp );
void llist_foreach( llist_t *, llist_foreach_fn f, void * data );
void llist_concat( llist_t * a, llist_t * b );

size_t llist_lindex( llist_t *, void * elem, llist_elem_cmp_fn cmp );
void * llist_get( llist_t *, size_t index );
/** The "old" element at `index' is returned. */
void * llist_set( llist_t *, size_t index );
/** The "old" element at `index' is returned. */
void * llist_unset( llist_t *, size_t index );


/* -------------------------------------------------------------------------- */



/* ========================================================================== */
#endif  /* _AAC_LIST_H */
