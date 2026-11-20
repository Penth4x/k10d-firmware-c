/* @k10d check_state_and_dispatch_1042a8ee @ 0x1042a8ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Checks a state value and a flag byte, then conditionally calls a helper or returns an
 *   error code.
 * summary:
 *   The function reads a byte at offset 0x859 from param_3 and calls
 *   set_struct_field_at_offset_4 with 0. It calls read_virtual_property_field with a value
 *   from param_1+0x10 and checks if the result is 2 or 3. If true and the flag byte is 0,
 *   it calls add_eight_to_param and build_exposure_parameter_table_1042af90, then updates
 *   param_3 via set_struct_field_at_offset_4. It returns 0 on success, 0x83 if the flag is
 *   set, or 0x84 if the state check fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_and_dispatch_1042a8ee(cls_1059e728 *param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  
  cVar1 = *(char *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((int *)(param_1->field_0x10),(int)(1));
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (cVar1 == '\0') {
      uVar4 = add_eight_to_param(param_3);
      uVar4 = build_exposure_parameter_table_1042af90((int)(param_1),(uint *)(uVar4));
      set_struct_field_at_offset_4(param_3,uVar4);
      uVar4 = 0;
    }
    else {
      uVar4 = 0x83;
    }
  }
  else {
    uVar4 = 0x84;
  }
  return uVar4;
}
