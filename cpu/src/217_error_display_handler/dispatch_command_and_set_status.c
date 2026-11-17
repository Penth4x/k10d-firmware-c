/* @k10d dispatch_command_and_set_status @ 0x104b4e2a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads two values from a struct, calls a dispatch function, then sets a status based on
 *   a check.
 * summary:
 *   The function extracts pointers from offsets 0x58 and 0x5c of the input structure. It
 *   calls read_byte_at_offset_0x42 and read_offset_0x44 on the 0x58 pointer, then passes
 *   the 0x5c pointer and the results to toggle_state_flag_with_callback. After calling
 *   clear_two_struct_fields_104b73a4, it checks the result of
 *   read_byte_at_offset_0x18_104b5ff2 on the 0x5c pointer. Depending on whether this check
 *   is zero, it calls either clear_byte_at_offset_0x40 or set_two_flag_bytes on the 0x58
 *   pointer. The function always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_and_set_status(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar4 = *(uint32_t *)(param_1 + 0x5c);
  uVar1 = read_byte_at_offset_0x42(*(uint32_t *)(param_1 + 0x58));
  uVar2 = read_offset_0x44(*(uint32_t *)(param_1 + 0x58));
  toggle_state_flag_with_callback(uVar4,uVar1,uVar2);
  clear_two_struct_fields_104b73a4(*(uint32_t *)(param_1 + 0x58));
  iVar3 = read_byte_at_offset_0x18_104b5ff2(*(uint32_t *)(param_1 + 0x5c));
  if (iVar3 == 0) {
    clear_byte_at_offset_0x40(*(int *)(param_1 + 0x58));
  }
  else {
    set_two_flag_bytes(*(int *)(param_1 + 0x58));
  }
  return 1;
}
