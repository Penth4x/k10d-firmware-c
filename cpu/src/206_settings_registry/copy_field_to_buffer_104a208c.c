/* @k10d copy_field_to_buffer_104a208c @ 0x104a208c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads a field from param_1 and copies it into a local buffer via helper calls.
 * summary:
 *   Calls get_or_init_sram_block_1049c644 to get a context, then format_timestamp_string to
 *   extract data from param_1+0x28 into a stack buffer, and finally
 *   copy_bytes_to_struct_field to process that buffer with param_2 and length 0x14. The
 *   specific subsystem is unclear without callee details.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_field_to_buffer_104a208c(int param_1,int param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  char acStack_1c [20];
  
  uVar1 = get_or_init_sram_block_1049c644();
  format_timestamp_string(uVar1,*(void **)(param_1 + 0x28),acStack_1c);
  copy_bytes_to_struct_field(param_2,acStack_1c,0x14);
  return;
}
