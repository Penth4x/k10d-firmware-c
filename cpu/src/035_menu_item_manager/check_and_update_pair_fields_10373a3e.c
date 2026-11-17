/* @k10d check_and_update_pair_fields_10373a3e @ 0x10373a3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pair of 16-bit fields from an object, queries a helper, and updates them if
 *   they differ.
 * summary:
 *   The function first checks that two 16-bit values at offsets 0x2c and 0x2e of param_1
 *   are non-zero. It then calls dispatch_event_and_return_offset with param_1 and a local
 *   integer (initialized to 0) to retrieve a pointer or handle. If the returned value is
 *   non-zero, it compares the 16-bit values at offsets 4 and 6 of the returned object
 *   against the original values in param_1. If they differ, it calls
 *   dispatch_three_params_and_return_offset to update the fields in param_1 with the new
 *   values. The specific subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_update_pair_fields_10373a3e(void *param_1)

{
  uintptr_t sp;
  int iStack_c;
  
  if ((*(short *)((int)param_1 + 0x2c) != 0) && (*(short *)((int)param_1 + 0x2e) != 0)) {
    iStack_c = 0;
    dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
    if (iStack_c != 0) {
      if (((uint)*(ushort *)(iStack_c + 4) != (uint)*(ushort *)((int)param_1 + 0x2c)) ||
         (*(short *)(iStack_c + 6) != *(short *)((int)param_1 + 0x2e))) {
        dispatch_three_params_and_return_offset(param_1,(uint)*(ushort *)((int)param_1 + 0x2c),
                     (uint)*(ushort *)((int)param_1 + 0x2e));
      }
    }
  }
  return;
}
