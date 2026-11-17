/* @k10d write_params_and_table_to_device @ 0x104ce224
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes scalar parameters and a 16-entry table to a device via a series of helper calls.
 * summary:
 *   The function reads a pointer from param_1+0x48 and a handle from param_1+0x94. It calls
 *   step_focus_position to check a condition; if successful, it writes several scalar
 *   values (bytes/shorts) from the object at param_1+0x48 using helpers
 *   set_byte_at_offset_four through set_byte_at_offset_10. It then loops 16 times, calling
 *   write_array_element_1051e8f8 to transfer data from an array at offset 0xdf8c (stride
 *   0xc). Finally, it sets a flag at param_1+0x214 to 1 and conditionally calls
 *   write_byte_at_offset_five.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_params_and_table_to_device(int param_1)

{
  uint8_t uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  uVar1 = read_byte_at_offset_one_1051e90c(*(uint32_t *)(param_1 + 0x94));
  *(uint8_t *)(iVar2 + 0xeb98) = uVar1;
  iVar2 = step_focus_position(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x80));
  if (iVar2 == 0) {
    *(uint32_t *)(param_1 + 0x214) = 0;
  }
  else {
    set_byte_at_offset_four(*(uint32_t *)(param_1 + 0x94),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb9e))
    ;
    uVar3 = 0;
    write_two_bytes_at_offset_six(*(uint32_t *)(param_1 + 0x94),*(short *)(*(int *)(param_1 + 0x48) + 0xeb9a) + 1);
    write_two_bytes_at_offset_eight_1051e8ec(*(uint32_t *)(param_1 + 0x94),*(short *)(*(int *)(param_1 + 0x48) + 0xeb9c) + 1);
    set_byte_at_offset_10(*(uint32_t *)(param_1 + 0x94),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeba0))
    ;
    do {
      write_array_element_1051e8f8(*(uint32_t *)(param_1 + 0x94),uVar3,
                   *(int *)(param_1 + 0x48) + 0xdf8c + uVar3 * 0xc);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x10);
    *(uint32_t *)(param_1 + 0x214) = 1;
    if (*(int *)(param_1 + 0x80) == 0) {
      write_byte_at_offset_five(*(uint32_t *)(param_1 + 0x94),
                   *(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb9f));
    }
  }
  return;
}
