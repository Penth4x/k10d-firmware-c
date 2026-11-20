/* @k10d destroy_virtual_object @ 0x10491e8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 1 of an object and optionally frees the heap block if the flag bit
 *   is set.
 * summary:
 *   Checks if param_1 is non-NULL and dereferences it to get an object pointer. If the
 *   object is non-NULL, it calls virtual slot 1 (offset 0xc) with a this-adjustment from
 *   offset 8 and argument 3. If param_2 has bit 0 set, it calls heap_free on param_1. This
 *   follows the Cfront virtual call idiom and heap_free pattern for object destruction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_virtual_object(int *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
