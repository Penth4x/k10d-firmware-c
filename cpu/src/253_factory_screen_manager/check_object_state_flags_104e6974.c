/* @k10d check_object_state_flags_104e6974 @ 0x104e6974
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit state word from an object and returns 1 if bit 8 is set, otherwise
 *   dispatches a virtual call or sets bit 11.
 * summary:
 *   The function dereferences a pointer at offset 0xc of the input object to get a 16-bit
 *   status word. It checks bits 11, 12, 8, and 9. If bits 11 or 12 are set, it sets bit 11
 *   in a word at offset 0x10. If bit 8 is set, it returns 1. If bit 9 is set (and 8, 11, 12
 *   are clear), it invokes a virtual method (slot 8) on the object. Otherwise it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_object_state_flags_104e6974(cls_105c1218 *param_1)

{
  ushort *puVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  puVar1 = (ushort *)param_1->field_0xc;
  if (((*puVar1 & 0x800) == 0) && ((*puVar1 & 0x1000) == 0)) {
    if ((*puVar1 & 0x100) == 0) {
      if ((*puVar1 & 0x200) != 0) {
        (((vtbl_entry*)(param_1->field_0x4))[8].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[8].adj);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    *(ushort *)param_1->field_0x10 = *(ushort *)param_1->field_0x10 | 0x800;
  }
  return uVar2;
}
