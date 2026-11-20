/* @k10d init_struct_and_call_helpers @ 0x104e0b64
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes two fields in a struct, then calls three helper functions with struct members as
 *   arguments.
 * summary:
 *   The function takes a pointer to a structure, sets offsets 0x1c and 0x20 to zero. It
 *   then calls copy_twenty_byte_struct with values from offsets 0x14 and 0x10, calls
 *   lookup_table_entry_by_index_104e31de with values from offsets 0xc and 0x14 plus the
 *   zeroed fields, and finally calls dispatch_event_via_vtable_104e08ce with the struct
 *   pointer, returning its result. The specific subsystem is not identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_struct_and_call_helpers(int param_1)

{
  uint32_t uVar1;
  
  *(uint32_t *)(param_1 + 0x1c) = 0;
  *(uint32_t *)(param_1 + 0x20) = 0;
  copy_twenty_byte_struct(*(uint8_t **)(param_1 + 0x14),*(uint **)(param_1 + 0x10));
  lookup_table_entry_by_index_104e31de((int)(*(uint32_t *)(param_1 + 0xc)),(uint)(*(uint16_t *)(*(int *)(param_1 + 0x14) + 4)), (int *)(param_1 + 0x1c),(uint32_t *)(param_1 + 0x20));
  uVar1 = dispatch_event_via_vtable_104e08ce(param_1);
  return uVar1;
}
