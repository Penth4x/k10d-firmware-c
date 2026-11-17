/* @k10d check_string_length_limit @ 0x104f27f2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary string object from a field in param_1 and checks if its length
 *   equals 0x22.
 * summary:
 *   Allocates a temporary object via cls_105a705c_new, initializes it using
 *   copy_nine_bytes_to_buffer with a pointer from param_1+8, and calls a virtual method at
 *   0x10460cd4 with argument 0x22. Returns true if the method returns 0. The specific role
 *   of the string or the 0x22 limit is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_string_length_limit(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  cls_105a705c_new((void *)auStack_18);
  copy_nine_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  iVar1 = (*(code *)0x10460cd4/*ROM*/)(auStack_18,0x22);
  cls_105a705c_delete((void *)auStack_18,2);
  return iVar1 == 0;
}
