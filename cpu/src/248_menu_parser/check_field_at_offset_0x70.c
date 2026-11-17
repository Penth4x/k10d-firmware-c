/* @k10d check_field_at_offset_0x70 @ 0x104debfa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Returns whether a helper call on the object's field at offset 0x70 is non-zero.
 * summary:
 *   Reads the 32-bit value at param_1 + 0x70 and passes it with a constant 0xffffffff
 *   argument to eventflag_clr_flg. The function returns true if that callee returns a non-
 *   zero value. It is virtual method slot 3 of class cls_105bb0ec and is called from a
 *   virtual method of cls_105bb314.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_at_offset_0x70(int param_1)

{
  int iVar1;
  
  iVar1 = eventflag_clr_flg(*(uint32_t *)(param_1 + 0x70),0xffffffff);
  return iVar1 != 0;
}
