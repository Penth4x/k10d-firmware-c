/* @k10d copy_selected_8_byte_block @ 0x10408cca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Selects one of four 8-byte blocks from a source buffer and copies it to a destination
 *   address.
 * summary:
 *   Calls menu_item_register four times with param_2 to obtain pointers to four 8-byte
 *   blocks. Selects the block index based on param_3 (defaulting to index 0 if out of range
 *   1-3). Calls copy_virtual_result_to_buffer_10493ea4 to process the selected block into a
 *   local 8-byte buffer, then copies those 8 bytes to the memory location pointed to by
 *   param_5. The specific camera subsystem role is not determinable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_selected_8_byte_block(uint32_t param_1,int param_2,int param_3,uint32_t param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uintptr_t sp;
  int *piStack_14;
  uint8_t auStack_10 [8];
  int iVar6;
  
  piVar1 = (int *)menu_item_register(param_2);
  piStack_14 = (int *)menu_item_register(param_2);
  piVar2 = (int *)menu_item_register(param_2);
  piVar3 = (int *)menu_item_register(param_2);
  piVar4 = piVar1;
  if ((((param_3 != 0) && (piVar4 = piStack_14, param_3 != 1)) && (piVar4 = piVar2, param_3 != 2))
     && (piVar4 = piVar3, param_3 != 3)) {
    piVar4 = piVar1;
  }
  copy_virtual_result_to_buffer_10493ea4(auStack_10,piVar4);
  iVar6 = 8;
  do {
    iVar5 = iVar6 + -4;
    *(uint32_t *)(iVar5 + param_5) = *(uint32_t *)(auStack_10 + iVar6 + -4);
    iVar6 = iVar5;
  } while (iVar5 != 0);
  return;
}
