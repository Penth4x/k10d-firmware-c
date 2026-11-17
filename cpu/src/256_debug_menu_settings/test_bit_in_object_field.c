/* @k10d test_bit_in_object_field @ 0x104f13ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns whether bit 0 of a 24-bit field in an object is set.
 * summary:
 *   Calls get_or_init_singleton_object_1051d40e to obtain an object pointer, then calls
 *   read_bounded_array_element_1051d696 with that pointer and offset 0x18 to read a value.
 *   It tests the least significant bit of the returned value and returns a boolean result.
 *   The specific meaning of the object and field is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit_in_object_field(uint32_t param_x0)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,0x18);
  return (uVar2 & 1) != 0;
}
