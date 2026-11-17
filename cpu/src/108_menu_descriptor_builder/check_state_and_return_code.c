/* @k10d check_state_and_return_code @ 0x1042b4de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Checks a state value from a helper and returns a specific code (0x83, 0x84, or 0) based
 *   on the result and a flag.
 * summary:
 *   The function reads a byte from param_3 at offset 0x859. It calls
 *   set_struct_field_at_offset_4 with 0, then calls read_virtual_property_field with a
 *   value from param_1+0x10 and 1. If the result is 2 or 3, it checks the previously read
 *   byte; if it is 0, it calls set_struct_field_at_offset_4 with 2, gets a value from
 *   add_eight_to_param, passes it to read_two_values_from_object_1042b964, and returns 0.
 *   Otherwise, it returns 0x83 if the state was 2/3, or 0x84 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_and_return_code(int param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  
  cVar1 = *(char *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((void *)(*(uint32_t *)(param_1 + 0x10)),1);
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar4 = 0x83;
    if (cVar1 == '\0') {
      set_struct_field_at_offset_4(param_3,2);
      uVar4 = add_eight_to_param(param_3);
      read_two_values_from_object_1042b964(param_1,(void *)uVar4);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x84;
  }
  return uVar4;
}
