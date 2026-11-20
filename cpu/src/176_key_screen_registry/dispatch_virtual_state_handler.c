/* @k10d dispatch_virtual_state_handler @ 0x10482d62
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method to check a condition, then dispatches to one of three handlers
 *   based on a byte value at offset 0x859.
 * summary:
 *   The function performs a virtual call on the object in param_1 (slot 10) to retrieve a
 *   status or flag. If the result is non-zero, it reads a byte from param_3 + 0x859 and
 *   branches to one of three callees (check_and_activate_object, send_three_struct_fields,
 *   init_object_with_flag_and_zero_byte) depending on whether the byte is 1, 0, or -1. It
 *   returns 0x82 if the virtual call returns 0, 0x81 if the byte is an unexpected value, or
 *   the return value of the selected handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_state_handler(int *param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = (((vtbl_entry*)(*param_1))[10].fn)((int)((vtbl_entry*)(*param_1))[10].adj + (int)param_1);
  uVar3 = 0x82;
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_3 + 0x859);
    if (cVar1 == '\x01') {
      uVar3 = check_and_activate_object(param_1,param_3);
    }
    else if (cVar1 == '\0') {
      uVar3 = send_three_struct_fields(param_1,param_3);
    }
    else if (cVar1 == -1) {
      uVar3 = init_object_with_flag_and_zero_byte(param_1);
    }
    else {
      uVar3 = 0x81;
    }
  }
  return uVar3;
}
