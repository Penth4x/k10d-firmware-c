/* @k10d init_entry_and_dispatch @ 0x10508374
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x34-byte entry within an array, sets flags, and invokes a virtual method
 *   on a linked object.
 * summary:
 *   The function stores param_2 at offset 0x8c of the object. It calculates a pointer to an
 *   entry at offset 0x24 + param_2*0x34 (if param_2 < 2) and sets byte flags at offsets
 *   0x18 and 0x2d of that entry. It calls call_kernel_with_short_id and
 *   check_kernel_call_success_10459d88 on a sub-object at offset 0x308, and
 *   eventflag_clr_flg/eventflag_wai_flg on a sub-object at offset 0x328. It performs a
 *   virtual call (slot 0xd4) on an object pointed to by *(param_1 + 0x2fc), passing the
 *   object, param_2 != 0, and the calculated entry pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_entry_and_dispatch(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x308));
  puVar3 = (uint32_t *)(param_1 + 0x328);
  *(int *)(param_1 + 0x8c) = param_2;
  eventflag_clr_flg(puVar3,0x20);
  iVar1 = **(int **)(param_1 + 0x2fc);
  if (param_2 < 2) {
    iVar2 = param_1 + 0x24 + param_2 * 0x34;
  }
  else {
    iVar2 = 0;
  }
  (**(code **)(iVar1 + 0xd4))
            ((int)*(int **)(param_1 + 0x2fc) + (int)*(short *)(iVar1 + 0xd0),param_1 + 4,
             param_2 != 0,iVar2 + 4);
  eventflag_wai_flg(puVar3,0x20,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar3,0x20);
  iVar1 = 0;
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  *(uint8_t *)(iVar1 + 0x18) = 1;
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  else {
    iVar1 = 0;
  }
  if (*(char *)(iVar1 + 0x10) == '\0') {
    iVar1 = 0;
    if (param_2 < 2) {
      iVar1 = param_1 + 0x24 + param_2 * 0x34;
    }
    *(uint8_t *)(iVar1 + 0x2d) = 1;
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x308));
  return;
}
