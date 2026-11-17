/* @k10d send_three_status_values @ 0x10532d16
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads three consecutive values from param_2 and sends them to a target object via a
 *   helper function.
 * summary:
 *   The function retrieves an object pointer from offset 0x1c of param_1. It then calls
 *   read_byte_from_struct_offset_104a8c54 with indices 0, 1, and 2 to extract values from
 *   param_2. Each extracted value is passed to field_setter along with the object pointer
 *   and a specific identifier (0xb2, 0xb3, or 99). The pattern suggests a sequence of
 *   status or data updates being dispatched to a subsystem or device.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_three_status_values(int param_1,int param_2)

{
  uint8_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,0);
  field_setter(iVar2,0xb2,uVar1);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,1);
  field_setter(iVar2,0xb3,uVar1);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,2);
  field_setter(iVar2,99,uVar1);
  return;
}
