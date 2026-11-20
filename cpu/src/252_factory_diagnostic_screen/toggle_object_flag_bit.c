/* @k10d toggle_object_flag_bit @ 0x104e3876
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Reads a flag byte from an object, optionally clears or sets bit 0 based on param_2, and
 *   writes it back.
 * summary:
 *   The function initializes a 256-byte buffer, invokes a virtual method on the object at
 *   param_1 (slot 11) to populate the buffer, then calls query_status_with_lock to read a
 *   status byte into local_9. If the read succeeds, it modifies bit 0 of local_9 based on
 *   param_2 (clear if 0, set if 1) and writes the result back via
 *   call_with_critical_section_10480f2c. The specific subsystem is not identifiable from
 *   the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int toggle_object_flag_bit(int param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_10c [259];
  byte local_9;
  
  fill_byte_array(auStack_10c,0,0x100);
  (((vtbl_entry*)(*(int *)(param_1 + 0x18)))[11].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x18)))[11].adj + param_1,auStack_10c);
  local_9 = 0;
  iVar1 = query_status_with_lock(*(int *)(param_1 + 8),auStack_10c,&local_9);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      local_9 = local_9 & 0xfe;
    }
    else if (param_2 == 1) {
      local_9 = local_9 | 1;
    }
    call_with_critical_section_10480f2c(*(int *)(param_1 + 8),auStack_10c,(uint)local_9);
  }
  return iVar1;
}
