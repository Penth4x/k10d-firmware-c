/* @k10d write_value_to_struct_offset_104f2e56 @ 0x104f2e56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to offset 0x28 of a structure obtained from
 *   initialize_singleton_object_1045d6a0.
 * summary:
 *   Calls initialize_singleton_object_1045d6a0 to obtain a pointer to a data structure.
 *   Passes the value at offset 0x28 of that structure and param_2 to
 *   write_two_byte_value_via_helper_104630d0. The specific roles of the callees and the
 *   data structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_value_to_struct_offset_104f2e56(uint32_t param_1,uint16_t param_2)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  write_two_byte_value_via_helper_104630d0(*(uint32_t *)(iVar1 + 0x28),param_2);
  return;
}
