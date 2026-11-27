/* @k10d update_subobject_state @ 0x1050895e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Updates a sub-object at an index within a parent structure and invokes a virtual
 *   callback.
 * summary:
 *   The function stores param_2 into the parent object at offset 0x8c. It then calls a
 *   virtual method on an object pointer found at offset 0x2fc, passing the parent and a
 *   boolean derived from param_2. It subsequently manipulates a sub-object located at
 *   param_1 + 0x24 + param_2 * 0x34 (if param_2 < 2) by calling several helper functions
 *   (copy_structured_record_10507034, check_struct_has_nonzero_bytes) on its offset 0x1c.
 *   The return value is the result of check_struct_has_nonzero_bytes being zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool update_subobject_state(int param_1,int param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint8_t auStack_e [6];
  
  zero_init_six_bytes((uint8_t *)(uint32_t)param_1);
  puVar2 = (uint32_t *)(param_1 + 0x328);
  *(int *)(param_1 + 0x8c) = param_2;
  eventflag_clr_flg(puVar2,0x10);
  iVar1 = **(int **)(param_1 + 0x2fc);
  (((vtbl_entry*)(iVar1))[19].fn)
            ((int)*(int **)(param_1 + 0x2fc) + (int)((vtbl_entry*)(iVar1))[19].adj,param_1 + 4,
             param_2 != 0,auStack_e);
  eventflag_wai_flg(puVar2,0x10,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,0x10);
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  else {
    iVar1 = 0;
  }
  (*(code *)0x105070aa/*ROM*/)(iVar1 + 0x1c);
  iVar1 = 0;
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  copy_structured_record_10507034((uint8_t *)(iVar1 + 0x1c),auStack_e);
  iVar1 = 0;
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  iVar1 = check_struct_has_nonzero_bytes(iVar1 + 0x1c);
  free_heap_if_flag_set_1047e5d2(auStack_e,2);
  return iVar1 == 0;
}
