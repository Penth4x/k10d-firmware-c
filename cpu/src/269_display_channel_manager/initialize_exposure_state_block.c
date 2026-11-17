/* @k10d initialize_exposure_state_block @ 0x10507c34
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Copies exposure-related parameters from a source struct into a destination state block
 *   and invokes a virtual method on an embedded object.
 * summary:
 *   The function writes several fields from param_2 (offsets 0xe4, 0x4a8, 0x500, 0x504)
 *   into param_1 (offsets 0x1b4, 0x1b8, 0x1c0, 0x1c2). It calls
 *   reset_object_state_fields_1047dd22 (virtual slot 2) on param_1+0x94 if param_3 is zero.
 *   It performs a virtual call on an object pointer at param_1+0x2fc, passing param_1+4 and
 *   param_1+0x94 as arguments. Finally, it checks a bit in a sub-structure at param_1+0x24
 *   (indexed by param_1+0x8c) and returns the inverse of bit 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool initialize_exposure_state_block(int param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    reset_object_state_fields_1047dd22(param_1 + 0x94);
  }
  *(int *)(param_1 + 0x1b4) = *(int *)(param_2 + 0xe4) + 0x164;
  copy_eight_bytes_1045c584((uint16_t *)(param_1 + 0x1b8),(uint16_t *)(*(int *)(param_2 + 0xe4) + 0x4a8));
  *(uint32_t *)(param_1 + 0x98) = *(uint32_t *)(param_1 + 0x90);
  *(uint *)(param_1 + 0xa0) = (uint)(*(int *)(param_1 + 0x8c) != 0);
  *(short *)(param_1 + 0x1c0) = (short)*(uint32_t *)(*(int *)(param_2 + 0xe4) + 0x500);
  *(short *)(param_1 + 0x1c2) = (short)*(uint32_t *)(*(int *)(param_2 + 0xe4) + 0x504);
  puVar1 = (uint32_t *)(param_1 + 0x328);
  eventflag_clr_flg(puVar1,1);
  iVar2 = **(int **)(param_1 + 0x2fc);
  (**(code **)(iVar2 + 0x2c))
            ((int)*(int **)(param_1 + 0x2fc) + (int)*(short *)(iVar2 + 0x28),param_1 + 4,
             param_1 + 0x94);
  eventflag_wai_flg(puVar1,1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x8c) < 2) {
    iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
  }
  return (*(uint *)(iVar2 + 0x30) & 1) == 0;
}
