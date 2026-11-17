/* @k10d dispatch_two_word_event @ 0x10494a20
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Reads two 16-bit values from param_2, invokes a virtual method on param_1[3] with them,
 *   and forwards them to write_two_words_to_struct_1048d4d6.
 * summary:
 *   The function extracts two short values via return_first_word_1045c514 and
 *   read_struct_field_at_offset_4. It then performs a virtual call through the vtable at
 *   param_1[3] (slot offset 0xfc) passing the local shorts. Finally, it calls
 *   write_two_words_to_struct_1048d4d6 with the first argument of param_1 and the two
 *   shorts, and sets a flag at offset 9 of param_1. The specific subsystem (e.g., key
 *   input, sensor event) is not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_word_event(uint32_t *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint16_t local_c;
  uint16_t local_a;
  
  uVar1 = return_first_word_1045c514(param_2);
  local_c = (short)uVar1;
  uVar1 = read_struct_field_at_offset_4(param_2);
  local_a = (short)uVar1;
  (**(code **)(param_1[3] + 0xfc))
            ((int)*(short *)(param_1[3] + 0xf8) + (int)param_1,&local_c,&local_a);
  write_two_words_to_struct_1048d4d6(*param_1,local_c,local_a);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
