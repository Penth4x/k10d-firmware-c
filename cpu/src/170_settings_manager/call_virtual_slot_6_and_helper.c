/* @k10d call_virtual_slot_6_and_helper @ 0x1047e86c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 6 of an object stored in param_1[1], then calls
 *   invoke_virtual_slot_two_1047eeb0 with param_1 and param_3.
 * summary:
 *   The function dereferences param_1[1] to get an object pointer, loads its vtable, and
 *   calls the function at offset 0x34 (slot 6) with a this-adjusted pointer. It then calls
 *   invoke_virtual_slot_two_1047eeb0 passing param_1 and param_3. The return value of the
 *   virtual call is returned to the caller. The specific subsystem is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_6_and_helper(int *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[1] + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[6].fn)(param_1[1] + (int)((vtbl_entry*)(iVar2))[6].adj);
  invoke_virtual_slot_two_1047eeb0(param_1,param_3);
  return uVar1;
}
