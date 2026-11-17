/* @k10d dispatch_mode_transition_10429c9a @ 0x10429c9a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Checks a state value and dispatches to one of two handlers based on a flag byte,
 *   returning status codes.
 * summary:
 *   Reads a flag byte at offset 0x859 of param_3 and calls set_struct_field_at_offset_4 to
 *   reset it. Calls read_virtual_property_field with a pointer from param_1+0x14 to get a
 *   state value. If the state is 2 or 3, it branches on the flag: if 0, calls
 *   populate_eight_entry_array; if 1, calls extract_three_values_from_object. Both branches
 *   pass the result of add_eight_to_param(param_3) to the handler and write the result back
 *   via set_struct_field_at_offset_4. Returns 0 on success, 0x83 if flag is invalid, or
 *   0x84 if state is not 2/3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_transition_10429c9a(int param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  
  cVar1 = *(char *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field(*(uint32_t *)(param_1 + 0x14),1);
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (cVar1 == '\0') {
      uVar4 = add_eight_to_param(param_3);
      uVar4 = populate_eight_entry_array(param_1,uVar4);
      set_struct_field_at_offset_4(param_3,uVar4);
      uVar4 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar4 = add_eight_to_param(param_3);
      uVar4 = extract_three_values_from_object(param_1,uVar4);
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
