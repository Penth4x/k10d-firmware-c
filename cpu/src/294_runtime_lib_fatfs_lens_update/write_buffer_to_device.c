/* @k10d write_buffer_to_device @ 0x10541016
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a buffer size, opens a device handle, and writes the buffer data to it.
 * summary:
 *   Checks that param_2 is non-zero and <= 0x10000. Calls lookup_table_entry_by_match to
 *   obtain a handle, checks a status field at offset 0xe, then calls
 *   store_value_at_offset_0x70 to transfer param_2 bytes from param_1. Uses
 *   allocate_and_link_event_node_105382e4 and decrement_lens_update_step for resource
 *   setup/teardown. Returns 0 on success or negative error codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_buffer_to_device(void *param_1,uint param_2)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_18;
  int iStack_14;
  
  if ((param_2 == 0) || (0x10000 < param_2)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = lookup_table_entry_by_match(param_1,&iStack_14);
    if (iVar1 == 0) {
      if (*(short *)(*(int *)(iStack_14 + 100) + 0xe) == 0) {
        iVar1 = allocate_and_link_event_node_105382e4(iStack_14,0x17,(int *)&piStack_18,(void *)0x0);
        if (iVar1 == 0) {
          iVar1 = store_value_at_offset_0x70(iStack_14,param_2);
          if (iVar1 == 0) {
            iVar1 = decrement_lens_update_step(0x17,piStack_18);
          }
          else {
            decrement_lens_update_step(0x17,piStack_18);
          }
        }
      }
      else {
        iVar1 = -6;
      }
    }
  }
  return iVar1;
}
