/* @k10d free_object_if_flag_set_1052bade @ 0x1052bade
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 1 on the object, then frees the heap block if the second argument's
 *   low bit is set.
 * summary:
 *   Takes a heap-allocated object pointer (param_1) and a flags word (param_2). If the
 *   object is non-NULL, it invokes virtual method slot 1 (cls_105a2be0_delete) on the
 *   object with argument 2, passing the address of the field at offset +4. If bit 0 of
 *   param_2 is set, it then releases the object via heap_free. This is a typical C++
 *   delete-with-conditional-cleanup pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1052bade(int param_1,uint param_2)

{
  if ((param_1 != 0) && (cls_105a2be0_delete((void *)(param_1 + 4),2), (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
