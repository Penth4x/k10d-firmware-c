/* @k10d trim_buffer_by_byte_value @ 0x104de220
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Removes leading or trailing bytes equal to a given value from a heap-allocated byte
 *   buffer.
 * summary:
 *   The function operates on a structure (param_1) containing a pointer and a length. It
 *   clones the structure via cls_105bb0b8_new, then iterates through the buffer to
 *   decrement the length and advance the pointer past bytes matching param_2. If param_3 is
 *   0, it trims from the start; otherwise, it trims from the end. It returns 1 if any bytes
 *   were removed, 0 otherwise, and cleans up the temporary clone via
 *   reset_vtable_and_free_if_flagged_104ddfe6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t trim_buffer_by_byte_value(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_28;
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar2 = 0;
  }
  else {
    cls_105bb0b8_new(&cStack_28);
    cStack_28.field_0x0 = *param_1;
    cStack_28.field_0x4 = param_1[1];
    cStack_28.field_0x8 = param_1[2];
    cStack_28.field_0xc = param_1[3];
    cStack_28.field_0x10 = *(uint8_t *)(param_1 + 4);
    cStack_28.field_0x14 = param_1[5];
    cStack_28.field_0x18 = param_1[6];
    uVar2 = 0;
    uVar1 = cStack_28.field_0x4;
    if (param_3 == 0) {
      uVar1 = 0;
      if (cStack_28.field_0x4 != 0) {
        do {
          *param_1 = (int)(cStack_28.field_0x0 + uVar1);
          if (*(byte *)(cStack_28.field_0x0 + uVar1) != param_2) break;
          uVar2 = 1;
          param_1[1] = param_1[1] + -1;
          uVar1 = uVar1 + 1;
        } while (uVar1 < cStack_28.field_0x4);
      }
    }
    else {
      while ((uVar1 = uVar1 - 1, -1 < (int)uVar1 &&
             (*(byte *)(cStack_28.field_0x0 + uVar1) == param_2))) {
        uVar2 = 1;
        param_1[1] = param_1[1] + -1;
      }
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  }
  return uVar2;
}
