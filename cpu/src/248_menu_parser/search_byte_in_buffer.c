/* @k10d search_byte_in_buffer @ 0x104de8ac
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Scans a byte buffer for a target value and returns its index if found.
 * summary:
 *   The function copies a 7-word structure from param_1 into a local instance of
 *   cls_105bb0b8. It iterates from the offset in param_1[2] up to the length in param_1[1],
 *   checking if the byte at (*param_1 + offset) matches param_2. If a match is found, it
 *   stores the offset in *param_3, updates param_1[2] to the next index, calls the virtual
 *   method slot 1 of the local object, and returns 1. If no match is found, it calls the
 *   virtual method and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t search_byte_in_buffer(int *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uintptr_t sp;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_28);
  cStack_28.field_0x0 = *param_1;
  cStack_28.field_0x4 = param_1[1];
  cStack_28.field_0x8 = param_1[2];
  cStack_28.field_0xc = param_1[3];
  cStack_28.field_0x10 = *(uint8_t *)(param_1 + 4);
  cStack_28.field_0x14 = param_1[5];
  cStack_28.field_0x18 = param_1[6];
  uVar1 = param_1[2];
  if (uVar1 < cStack_28.field_0x4) {
    do {
      if (*(byte *)(*param_1 + uVar1) == param_2) {
        *param_3 = uVar1;
        param_1[2] = uVar1 + 1;
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < cStack_28.field_0x4);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  return 0;
}
