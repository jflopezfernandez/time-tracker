//
// Created by jflop on 9/15/2017.
//

#include "includes/memory.h"


Status deleteObject(Object n) {
  if (n == NULL) {
    ERRMSG("Pointer was already NULL; did not free.", NULLPTR_PASSED_IN)

    return (NULLPTR_PASSED_IN);
  }

  free(n);
  setToNull(n);
  VERIFY_OBJECT_IS_NULL(n);

  return (OBJECT_DELETED_OK);
}

static Object setToNull(Object n) {
  n = NULL;

  return (n);
}