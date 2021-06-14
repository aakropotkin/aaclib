
#include "aac_list.h"

/* ========================================================================== */

struct node_s {
  void          * data;
  struct node_s * next;
};
typedef struct node_s  node_t;

static node_t NULL_NODE = { NULL, NULL };

struct llist_attrs_s {

};


struct llist_s {
  size_t   length;
  size_t   elem_size;
  node_t * head;
  node_t * tail;
};


/* -------------------------------------------------------------------------- */



/* -------------------------------------------------------------------------- */



/* ========================================================================== */
