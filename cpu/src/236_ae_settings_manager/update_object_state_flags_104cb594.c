/* @k10d update_object_state_flags_104cb594 @ 0x104cb594
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a sub-object via a callee and updates status flags and pointers in the parent
 *   object.
 * summary:
 *   Calls select_and_activate_entry with two fields from the input object (offsets 0x48 and
 *   0x7c). If the result is non-null and specific short fields at offsets 4 and 6 are non-
 *   zero, it sets a flag at offset 0x214 to 1, otherwise 0. It stores the result pointer at
 *   offset 0x78 and writes the constant 0xc0008 to offset 0x210.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_state_flags_104cb594(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = select_and_activate_entry(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x7c));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if ((*(short *)(iVar2 + 4) != 0) || (uVar1 = 0, *(short *)(iVar2 + 6) != 0)) {
    uVar1 = 1;
  }
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  **(int **)(param_1 + 0x78) = iVar2;
  *(uint32_t *)(param_1 + 0x210) = 0xc0008;
  return;
}
