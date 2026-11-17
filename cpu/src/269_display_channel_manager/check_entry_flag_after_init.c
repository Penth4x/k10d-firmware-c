/* @k10d check_entry_flag_after_init @ 0x10507e24
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x328, invokes a virtual method, and returns whether
 *   bit 3 of a selected entry's flag word is clear.
 * summary:
 *   The function writes a pointer to param_1+0x94 into the object at offset 0x2e4. It calls
 *   eventflag_clr_flg on the sub-object at offset 0x328, then performs a virtual call
 *   through the vtable pointer at offset 0x304. It calls eventflag_wai_flg and
 *   eventflag_clr_flg again. Finally, it selects an entry from an array starting at
 *   param_1+0x24 (stride 0x34) based on a count at offset 0x8c, and returns true if bit 3
 *   (value 8) of the word at offset 0x30 of that entry is 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_entry_flag_after_init(int param_1)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x328);
  *(int *)(param_1 + 0x2e4) = param_1 + 0x94;
  eventflag_clr_flg(puVar1,8);
  iVar2 = **(int **)(param_1 + 0x304);
  (**(code **)(iVar2 + 0x2c))
            ((int)*(int **)(param_1 + 0x304) + (int)*(short *)(iVar2 + 0x28),param_1 + 4,
             (int *)(param_1 + 0x2e4));
  eventflag_wai_flg(puVar1,8,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,8);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x8c) < 2) {
    iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
  }
  return (*(uint *)(iVar2 + 0x30) & 8) == 0;
}
