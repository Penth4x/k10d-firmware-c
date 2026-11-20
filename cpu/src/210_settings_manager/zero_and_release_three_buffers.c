/* @k10d zero_and_release_three_buffers @ 0x104ab510
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes the contents of up to three heap buffers pointed to by object fields and
 *   releases each via a common helper.
 * summary:
 *   The function checks three pointer fields in the object (offsets 0x50, 0x20, 0x1c). For
 *   each non-null pointer, it clears a number of 4-byte words (5 for the first, or the
 *   count stored in adjacent byte fields 0x15/0x14 for the others) and then calls
 *   heap_free_2 on the pointer, which appears to be a deallocation or release routine. This
 *   is a cleanup/destructor-like operation for a class holding multiple dynamic arrays.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_and_release_three_buffers(cls_105b71d4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1->field_0x50 != 0) {
    uVar1 = 0;
    do {
      iVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1 & 0xff;
      *(uint32_t *)(param_1->field_0x50 + iVar2) = 0;
    } while (uVar1 < 5);
    heap_free_2(param_1->field_0x50);
  }
  if (param_1->field_0x20 != 0) {
    uVar1 = 0;
    if (param_1->field_0x15 != '\0') {
      do {
        *(uint32_t *)(param_1->field_0x20 + uVar1 * 4) = 0;
        uVar1 = uVar1 + 1 & 0xff;
      } while (uVar1 < (byte)param_1->field_0x15);
    }
    heap_free_2(param_1->field_0x20);
  }
  if (param_1->field_0x1c != 0) {
    uVar1 = 0;
    if (param_1->field_0x14 != '\0') {
      do {
        *(uint32_t *)(param_1->field_0x1c + uVar1 * 4) = 0;
        uVar1 = uVar1 + 1 & 0xff;
      } while (uVar1 < (byte)param_1->field_0x14);
    }
    heap_free_2(param_1->field_0x1c);
  }
  return;
}
