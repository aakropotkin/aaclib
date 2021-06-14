
#include "aac_list.h"

/* ========================================================================== */

struct node_s {
  void          * data;
  struct node_s * next;
};
typedef struct node_s  node_t;

static node_t NULL_NODE = { NULL, NULL };

struct llist_attrs_s {
  unsigned char primp   : 1;  /* Elements are primitives */
  unsigned char sortedp : 1;  /* List is currently in sorted order */
  unsigned char sort    : 1;  /* List should enforce sorted order */
  unsigned char uniquep : 1;  /* List has no duplicates */
  unsigned char uniq    : 1;  /* List should enforce unique elements */
  unsigned char hascmp  : 1;  /* List was provided a comparator */
  unsigned char hascopy : 1;  /* List was provided a `copy' function */
  unsigned char hasfree : 1;  /* List was provided a `free' function */
};


struct llist_s {
  size_t                 length;
  size_t                 elem_size;
  node_t               * head;
  node_t               * tail;
  llist_elem_cmp_fn      cmp;
  struct llist_attrs_s   attrs;
};


/* -------------------------------------------------------------------------- */

  llist_t *
llist_create( size_t elem_size )
{
  return NULL;
}


/* -------------------------------------------------------------------------- */

  void
llist_destroy( llist_t * l )
{

}


/* -------------------------------------------------------------------------- */

  int
llist_empty_p( llist_t * l )
{
  return 0;
}


/* -------------------------------------------------------------------------- */

  int
llist_contains_p( llist_t * l, void * elem, llist_elem_cmp_fn cmp )
{
  return 0;
}


/* -------------------------------------------------------------------------- */

  int
llist_sorted_p( llist_t * l, llist_elem_cmp_fn cmp )
{
  return 0;
}


/* -------------------------------------------------------------------------- */

  int
llist_unique_p( llist_t * l, llist_elem_cmp_fn cmp )
{
  return 0;
}


/* -------------------------------------------------------------------------- */

  size_t
llist_length( llist_t * l )
{
  return 0;
}


/* -------------------------------------------------------------------------- */

  void
llist_add( llist_t * l, void * elem )
{

}


/* -------------------------------------------------------------------------- */

  void
llist_insert( llist_t * l, size_t index, void * elem )
{

}


/* -------------------------------------------------------------------------- */

  void
llist_remove( llist_t * l, void * elem, llist_elem_cmp_fn cmp )
{

}


/* -------------------------------------------------------------------------- */

/** Returns 1 if replacement was performed, 0 otherwise. */
  int
llist_replace( llist_t * l, void * e1, void * e2, llist_elem_cmp_fn cmp )
{
  return 0;
}


/* -------------------------------------------------------------------------- */

  void
llist_reverse( llist_t * l )
{

}


/* -------------------------------------------------------------------------- */

  void
llist_sort( llist_t * l, llist_elem_cmp_fn cmp )
{

}


/* -------------------------------------------------------------------------- */

  void
llist_foreach( llist_t * l, llist_foreach_fn f, void * data )
{

}


/* -------------------------------------------------------------------------- */

  void
llist_concat( llist_t * l a, llist_t * b )
{

}


/* -------------------------------------------------------------------------- */

size_t
llist_lindex( llist_t * l, void * elem, llist_elem_cmp_fn cmp )
{
  return 0;
}


/* -------------------------------------------------------------------------- */

  void *
llist_get( llist_t * l, size_t index )
{
  return NULL;
}


/* -------------------------------------------------------------------------- */

/** The "old" element at `index' is returned. */
  void *
llist_set( llist_t * l, size_t index )
{
  return NULL;
}


/* -------------------------------------------------------------------------- */

/** The "old" element at `index' is returned. */
  void *
llist_unset( llist_t * l, size_t index )
{
  return NULL;
}


/* -------------------------------------------------------------------------- */



/* ========================================================================== */
