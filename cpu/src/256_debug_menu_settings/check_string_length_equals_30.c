/* @k10d check_string_length_equals_30 @ 0x104f23e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructs a string object from a pointer, checks if its length is 30, and returns true
 *   if it is.
 * summary:
 *   The function allocates a temporary object on the stack using cls_105a705c_new. It
 *   initializes this object with a value from param_1+8 via copy_nine_bytes_to_buffer. It
 *   then calls an unknown function at 0x10460cd4 with the object and the constant 0x1e (30)
 *   to retrieve a value, likely a length or comparison result. Finally, it cleans up the
 *   temporary object and returns true if the retrieved value is 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_string_length_equals_30(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  cls_105a705c_new((void *)auStack_18);
  copy_nine_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  iVar1 = (*(code *)0x10460cd4/*ROM*/)(auStack_18,0x1e);
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  cls_105a705c_delete((void *)auStack_18,2);
  return iVar1 == 0;
}
