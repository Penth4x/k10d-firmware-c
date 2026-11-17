/* @k10d notify_object_event_if_active @ 0x104075ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Checks a flag and calls a helper and a virtual method on an object if conditions are
 *   met.
 * summary:
 *   The function first checks if the byte at offset 0xbd of the object is zero. If so, and
 *   if the byte at offset 4 is non-zero, it calls dispatch_virtual_on_result with the
 *   object and the value at offset 0x54. It then retrieves a pointer from offset 0x2c and
 *   invokes virtual slot 2 (offset 0x14) on that object with arguments 0x1120064 and 0. The
 *   specific camera subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void notify_object_event_if_active(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xbd) == '\0') {
    if (*(char *)(param_1 + 4) != '\0') {
      dispatch_virtual_on_result(param_1,*(uint8_t *)(param_1 + 0x54));
    }
    iVar1 = **(int **)(param_1 + 0x2c);
    (**(code **)(iVar1 + 0x14))
              ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10),0x1120064,0);
  }
  return;
}
