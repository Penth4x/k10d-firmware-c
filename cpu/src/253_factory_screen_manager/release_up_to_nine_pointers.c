/* @k10d release_up_to_nine_pointers @ 0x104e74d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Releases up to nine pointers stored in a struct (or a single pointer) by calling a
 *   helper on each non-null entry.
 * summary:
 *   If param_2 is zero, it calls call_helper_with_offset_and_flag_104279d4 on param_3+8 if
 *   param_3 is non-null. Otherwise, it iterates over nine pointer fields at offsets 4
 *   through 0x24 of the struct pointed to by param_1, calling
 *   call_helper_with_offset_and_flag_104279d4 on each non-null field plus 8. The function
 *   acts as a cleanup or destructor routine for a container holding up to nine sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_up_to_nine_pointers(int param_1,int param_2,void *param_3)

{
  if (param_2 == 0) {
    if (param_3 != 0) {
      call_helper_with_offset_and_flag_104279d4((int)param_3 + 8);
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 4) + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 8) + 8);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 0xc) + 8);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 0x10) + 8);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 0x14) + 8);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 0x18) + 8);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 0x1c) + 8);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 0x20) + 8);
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      call_helper_with_offset_and_flag_104279d4(*(int *)(param_1 + 0x24) + 8);
    }
  }
  return;
}
