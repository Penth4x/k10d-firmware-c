/* @k10d call_slot_handler_if_index_valid @ 0x104e510a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Indexes a table of pointers by param_2-100 and calls a handler with param_3 if the
 *   entry is non-null.
 * summary:
 *   Checks that param_2 is greater than 99. If so, it dereferences a pointer array located
 *   at *(param_1 + 0x40) using the offset (param_2 - 100) * 4. If the resulting pointer is
 *   non-zero, it calls toggle_object_flag_bit with that pointer and param_3, returning the
 *   result. Otherwise, it returns 0. This acts as a guarded dispatcher for a specific range
 *   of indices.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_slot_handler_if_index_valid(int param_1,uint param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((99 < param_2) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + (param_2 - 100) * 4), iVar2 != 0)) {
    uVar1 = toggle_object_flag_bit(iVar2,param_3);
  }
  return uVar1;
}
