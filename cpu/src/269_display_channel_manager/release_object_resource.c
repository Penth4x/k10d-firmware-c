/* @k10d release_object_resource @ 0x1050943a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Checks a resource handle at offset 0x18 and conditionally releases it before calling a
 *   cleanup routine.
 * summary:
 *   The function reads a pointer from offset 0x18 of the object. It calls
 *   test_high_bit_of_first_word to check the state of this resource; if non-zero, it calls
 *   set_bit15_of_first_word to reset or release it. Finally, it calls
 *   set_object_flag_bits_0x110 with the resource pointer and zero arguments, likely
 *   performing final cleanup or deallocation. The function always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_object_resource(cls_105d5370 *param_1)

{
  int iVar1;
  
  iVar1 = test_high_bit_of_first_word((void *)param_1->field_0x18);
  if (iVar1 != 0) {
    (*(code *)0x1045453e/*ROM*/)(param_1->field_0x18,0);
  }
  set_object_flag_bits_0x110((void *)param_1->field_0x18,0,0);
  return 1;
}
