/* @k10d invoke_vtable_slot_by_flag_104fa86a @ 0x104fa86a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual call on an object pointer, selecting between two vtable slots
 *   based on a boolean flag.
 * summary:
 *   The function reads an object pointer from offset 0x110 of param_1. It then performs a
 *   virtual call using the Cfront idiom. If param_2 is 0, it calls virtual slot 10 (offset
 *   0x54); otherwise, it calls virtual slot 9 (offset 0x4c). The 'this' pointer is adjusted
 *   by a short value stored at the corresponding offset minus 4. No specific camera
 *   subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_vtable_slot_by_flag_104fa86a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 4)))[10].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 4)))[10].adj);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar1 + 4)))[9].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 4)))[9].adj);
  }
  return;
}
