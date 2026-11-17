/* @k10d set_bit_in_object_field @ 0x104f1372
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit field at offset 0x18 of an object, sets or clears its LSB based on
 *   param_2, and writes it back.
 * summary:
 *   Calls get_or_init_singleton_object_1051d40e to obtain a pointer, then
 *   read_bounded_array_element_1051d696 to read a uint at offset 0x18. If param_2 is 0,
 *   clears bit 0 of the value; otherwise sets bit 0. The modified value is written back via
 *   update_camera_state_flags. The specific object and field semantics are unknown because
 *   the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_in_object_field(uint32_t param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,0x18);
  if (param_2 == 0) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  else {
    uVar2 = uVar2 | 1;
  }
  update_camera_state_flags(pvVar1,0x18,uVar2);
  return;
}
