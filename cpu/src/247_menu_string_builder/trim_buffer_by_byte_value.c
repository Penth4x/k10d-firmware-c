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
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  uint8_t uStack_18;
  int iStack_14;
  int iStack_10;
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar2 = 0;
  }
  else {
    cls_105bb0b8_new(&iStack_28);
    iStack_28 = *param_1;
    uStack_24 = param_1[1];
    iStack_20 = param_1[2];
    iStack_1c = param_1[3];
    uStack_18 = *(uint8_t *)(param_1 + 4);
    iStack_14 = param_1[5];
    iStack_10 = param_1[6];
    uVar2 = 0;
    uVar1 = uStack_24;
    if (param_3 == 0) {
      uVar1 = 0;
      if (uStack_24 != 0) {
        do {
          *param_1 = (int)(iStack_28 + uVar1);
          if (*(byte *)(iStack_28 + uVar1) != param_2) break;
          uVar2 = 1;
          param_1[1] = param_1[1] + -1;
          uVar1 = uVar1 + 1;
        } while (uVar1 < uStack_24);
      }
    }
    else {
      while ((uVar1 = uVar1 - 1, -1 < (int)uVar1 && (*(byte *)(iStack_28 + uVar1) == param_2))) {
        uVar2 = 1;
        param_1[1] = param_1[1] + -1;
      }
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&iStack_28,2);
  }
  return uVar2;
}
