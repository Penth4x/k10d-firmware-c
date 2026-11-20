/* @k10d write_struct_field_with_optional_value @ 0x10435036
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 123_menu_state_init (unit names are model-proposed)
 * purpose:
 *   Writes a constant and an optional computed value to a struct field at offset 0x14.
 * summary:
 *   The function takes a base pointer (param_2) and writes the constant 3 to the field at
 *   offset 0x14 via store_value_to_pointer_1043554a, then writes 0 to the same field via
 *   store_byte_at_offset_0xc_1043555a. If param_3 is non-zero, it calls
 *   return_zero_stub_10435066 with param_1 and param_3, and writes the result to the field
 *   at offset 0x14 via write_field_at_offset_four_1043554e. It always returns 1. The
 *   specific roles of the callee functions and the struct are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_struct_field_with_optional_value(uint32_t param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = (int)param_2 + 0x14;
  store_value_to_pointer_1043554a((uint32_t *)(iVar2),(uint32_t)(3));
  store_byte_at_offset_0xc_1043555a(iVar2,0);
  if (param_3 != 0) {
    uVar1 = return_zero_stub_10435066(param_1,param_3);
    write_field_at_offset_four_1043554e(iVar2,uVar1);
  }
  return 1;
}
