/* @k10d destroy_sysparam_entry @ 0x10535e84
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Destroys three members of a system-parameter object in reverse order and optionally
 *   frees the object.
 * summary:
 *   Takes a pointer to an object whose first three words are sub-objects; calls heap_free_2
 *   on each (param_1[2], param_1[1], *param_1) to tear them down. If the low bit of param_2
 *   is set, calls heap_free on the object itself, matching the C++ deleting-destructor
 *   idiom seen in neighbouring cls_10621c08_delete. Lives in the system_parameter_store
 *   module, so it likely finalises a stored parameter record.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_sysparam_entry(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    heap_free_2(param_1[2]);
    heap_free_2(param_1[1]);
    heap_free_2(*param_1);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
