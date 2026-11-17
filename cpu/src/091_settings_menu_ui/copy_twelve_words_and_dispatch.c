/* @k10d copy_twelve_words_and_dispatch @ 0x10408a52
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Copies 12 words from param_3 to a fixed global buffer, then calls a virtual method on
 *   an object derived from param_1.
 * summary:
 *   The function first performs a backward loop copying 12 32-bit words (48 bytes) from the
 *   source pointer param_3 into a fixed global address (0x10408a52 - 0x7ffe3194). It then
 *   calls menu_item_register with param_1 to obtain an object pointer. Depending on
 *   param_2, it either calls call_helper_and_set_flag_10494b88 or skips it, and finally
 *   invokes virtual slot 1 (offset 0xc) of the sub-object at offset 0x18 (puVar1[3]) with
 *   an argument of 0 or 1. The specific camera subsystem is not identifiable from the
 *   provided callees or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_twelve_words_and_dispatch(int param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar3 + -0x7ffe3194) = *(uint32_t *)(iVar2 + param_3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  puVar1 = (uint32_t *)menu_item_register(param_1);
  if (param_2 == 0) {
    (**(code **)(puVar1[3] + 0xc))((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    call_helper_and_set_flag_10494b88(puVar1);
    (**(code **)(puVar1[3] + 0xc))((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
