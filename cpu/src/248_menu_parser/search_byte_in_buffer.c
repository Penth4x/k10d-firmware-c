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
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  uint8_t uStack_18;
  int iStack_14;
  int iStack_10;
  
  cls_105bb0b8_new(&iStack_28);
  iStack_28 = *param_1;
  uStack_24 = param_1[1];
  iStack_20 = param_1[2];
  iStack_1c = param_1[3];
  uStack_18 = *(uint8_t *)(param_1 + 4);
  iStack_14 = param_1[5];
  iStack_10 = param_1[6];
  uVar1 = param_1[2];
  if (uVar1 < uStack_24) {
    do {
      if (*(byte *)(*param_1 + uVar1) == param_2) {
        *param_3 = uVar1;
        param_1[2] = uVar1 + 1;
        reset_vtable_and_free_if_flagged_104ddfe6(&iStack_28,2);
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uStack_24);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&iStack_28,2);
  return 0;
}
