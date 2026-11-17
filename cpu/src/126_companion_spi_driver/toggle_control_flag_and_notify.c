/* @k10d toggle_control_flag_and_notify @ 0x10447bdc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets or clears bits 6-7 of a 16-bit control word at offset 0x100 and calls a handler
 *   with the updated value.
 * summary:
 *   The function branches on param_2. If zero, it clears bits 6 and 7 (mask 0xff3f) of the
 *   ushort at param_1+0x100, then calls clear_flag_in_struct_field with the pointer at
 *   param_1+0x110 and the inverted lower 9 bits. If non-zero, it sets bits 6 and 7 (OR
 *   0xc0) and calls set_flag_in_nested_struct with the pointer and the full updated ushort.
 *   The specific subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_control_flag_and_notify(void *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)((int)param_1 + 0x100) & 0xff3f;
    *(ushort *)((int)param_1 + 0x100) = uVar1;
    clear_flag_in_struct_field(*(void **)((int)param_1 + 0x110),(uVar1 ^ 0xffff) & 0x1ff);
  }
  else {
    uVar1 = *(ushort *)((int)param_1 + 0x100) | 0xc0;
    *(ushort *)((int)param_1 + 0x100) = uVar1;
    set_flag_in_nested_struct(*(void **)((int)param_1 + 0x110),uVar1);
  }
  return;
}
