/* @k10d register_menu_item_if_enabled_104076ae @ 0x104076ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Returns 0 or the result of a helper if a byte at offset 4 of the input struct is non-
 *   zero.
 * summary:
 *   The function checks if the byte at param_1+4 is non-zero. If it is, it calls
 *   menu_item_register with param_1+8 as an argument, then calls read_byte_at_offset_8 and
 *   returns its result. Otherwise, it returns 0. The specific roles of the callees are
 *   unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t register_menu_item_if_enabled_104076ae(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    menu_item_register(param_1 + 8);
    uVar1 = read_byte_at_offset_8((uint32_t)param_1);
  }
  return uVar1;
}
