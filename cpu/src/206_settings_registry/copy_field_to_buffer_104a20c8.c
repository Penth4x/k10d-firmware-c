/* @k10d copy_field_to_buffer_104a20c8 @ 0x104a20c8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads a field from an object and copies it into a local buffer via helper calls.
 * summary:
 *   Calls get_or_init_sram_block_1049c644 to obtain a handle, then passes that handle, the
 *   value at param_1+0x28, and a local stack buffer to format_timestamp_string. Finally, it
 *   passes param_2, the local buffer, and the constant 0x14 to copy_bytes_to_struct_field.
 *   The specific roles of the callees and the data being manipulated are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_field_to_buffer_104a20c8(int param_1,int param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  char acStack_1c [20];
  
  uVar1 = get_or_init_sram_block_1049c644();
  format_timestamp_string(uVar1,*(void **)(param_1 + 0x28),acStack_1c);
  copy_bytes_to_struct_field(param_2,acStack_1c,0x14);
  return;
}
