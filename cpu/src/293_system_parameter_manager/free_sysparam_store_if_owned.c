/* @k10d free_sysparam_store_if_owned @ 0x10534bda
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Frees a heap-allocated system parameter store object when the ownership flag is set.
 * summary:
 *   Checks that param_1 is non-NULL and that bit 0 of param_2 is set, then calls heap_free
 *   on param_1. This is the non-deleting free path for a system parameter store object,
 *   mirroring the cls_106210ec_delete pattern where flags&1 indicates the object owns its
 *   heap block. No vtable reset or member destruction is performed here.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_sysparam_store_if_owned(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
