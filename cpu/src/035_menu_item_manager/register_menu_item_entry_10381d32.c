/* @k10d register_menu_item_entry_10381d32 @ 0x10381d32
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 into a per-index slot and sets a byte flag at offset
 *   0xa2+param_2.
 * summary:
 *   The function performs a 4-iteration loop copying 4-byte words from param_3 into a
 *   region at DAT_7ffe6ad4 + param_2*0x10. It then calls menu_item_register(param_1) twice
 *   and call_helper_and_set_flag_10494b88 on the first result, followed by a virtual call
 *   on the second result. Finally, it writes 1 to the byte at param_1 + 0xa2 + param_2. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_entry_10381d32(int param_1,int param_2,void *param_3)

{
  uint32_t *puVar1;
  int iVar2;
  
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + -4;
    *(uint32_t *)(iVar2 + param_2 * 0x10 + -0x7ffe6ad4) = *(uint32_t *)(iVar2 + (int)param_3);
  } while (iVar2 != 0);
  puVar1 = (uint32_t *)menu_item_register(param_1);
  call_helper_and_set_flag_10494b88(puVar1);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  *(uint8_t *)(param_1 + 0xa2 + param_2) = 1;
  return;
}
