/* @k10d invoke_vtable_slot_by_flag_104fa8a0 @ 0x104fa8a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual call on an object pointer stored at offset 0x114, selecting slot
 *   11 or 10 based on param_2.
 * summary:
 *   The function reads an object pointer from param_1 + 0x114. It then performs a Cfront-
 *   style virtual call using the vtable pointer at offset 4 of that object. If param_2 is
 *   0, it calls virtual slot 11 (offset 0x54); otherwise, it calls virtual slot 10 (offset
 *   0x4c). The 'this' pointer is adjusted by the short value stored at the corresponding
 *   offset minus 4 (0x50 or 0x48). No specific camera subsystem behavior is evident from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_vtable_slot_by_flag_104fa8a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x114);
  if (param_2 == 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x54))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x50));
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x4c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x48));
  }
  return;
}
