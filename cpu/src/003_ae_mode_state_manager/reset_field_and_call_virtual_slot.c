/* @k10d reset_field_and_call_virtual_slot @ 0x10364b06
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Clears a 4-byte field at offset 0x204 and invokes a virtual method on an object pointer
 *   at offset 0x70.
 * summary:
 *   The function writes zero to the memory location at param_1 + 0x204. It then
 *   dereferences the pointer at param_1 + 0x70 to get an object, and calls virtual slot
 *   0xec/8 (slot 23) on that object with a this-adjustment from offset 0xe8 and an argument
 *   of 0. Finally, it calls release_object_at_offset_0x70 with param_1 as the argument. The
 *   specific camera subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_field_and_call_virtual_slot(void *param_1)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 0x204) = 0;
  iVar1 = **(int **)((int)param_1 + 0x70);
  (((vtbl_entry*)(iVar1))[29].fn)((int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar1))[29].adj,0)
  ;
  release_object_at_offset_0x70(param_1);
  return;
}
