/* @k10d check_and_update_pair_fields_103739d4 @ 0x103739d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Validates a struct's flags and calls a helper to fetch a pair, updating it if it
 *   differs from the stored values.
 * summary:
 *   The function first checks that byte 0x1f of the object is non-zero and that the 16-bit
 *   fields at offsets 0x30 and 0x32 are non-zero. It then calls
 *   dispatch_event_and_return_offset with the object and a local integer (initialized to 0)
 *   to retrieve a pointer or handle. If the returned value is non-zero, it compares the
 *   16-bit fields at offsets 4 and 6 of the returned structure against the object's fields
 *   at 0x30 and 0x32. If they differ, it calls dispatch_three_params_and_return_offset with
 *   the object and the original field values, likely to update or synchronize them.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_update_pair_fields_103739d4(void *param_1)

{
  uintptr_t sp;
  int iStack_c;
  
  if (((*(char *)((int)param_1 + 0x1f) != '\0') && (*(short *)((int)param_1 + 0x30) != 0)) &&
     (*(short *)((int)param_1 + 0x32) != 0)) {
    iStack_c = 0;
    dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
    if (iStack_c != 0) {
      if (((uint)*(ushort *)(iStack_c + 4) != (uint)*(ushort *)((int)param_1 + 0x30)) ||
         (*(short *)(iStack_c + 6) != *(short *)((int)param_1 + 0x32))) {
        dispatch_three_params_and_return_offset(param_1,(uint)*(ushort *)((int)param_1 + 0x30),
                     (uint)*(ushort *)((int)param_1 + 0x32));
      }
    }
  }
  return;
}
