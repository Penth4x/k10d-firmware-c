/* @k10d set_flag_bit1_in_word_at_offset_0x18 @ 0x104f13d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit word at offset 0x18 from an object, clears or sets its bit 1 based on
 *   param_2, and writes it back.
 * summary:
 *   The function obtains a pointer via get_or_init_singleton_object_1051d40e, reads a
 *   32-bit value at offset 0x18 using read_bounded_array_element_1051d696, and modifies bit
 *   1 (value 2) of that word. If param_2 is 0, bit 1 is cleared; otherwise, it is set. The
 *   modified value is written back via update_camera_state_flags. The specific object and
 *   the meaning of the flag are not determinable from the provided pseudocode and unnamed
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit1_in_word_at_offset_0x18(uint32_t param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,0x18);
  if (param_2 == 0) {
    uVar2 = uVar2 & 0xfffffffd;
  }
  else {
    uVar2 = uVar2 | 2;
  }
  update_camera_state_flags(pvVar1,0x18,uVar2);
  return;
}
