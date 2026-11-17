/* @k10d check_and_log_state_11 @ 0x105324be
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a field at offset 0x20 equals 0x11, then computes a value and calls a logging
 *   function.
 * summary:
 *   The function first checks if the integer at param_1 + 0x20 is 0x11. If so, it calls
 *   read_u16_from_struct_array with param_2 and 0, XORs the result with 0xffff and adds
 *   0xcfc7. It then calls an unknown function at 0x10532f92 with param_1 and the computed
 *   value. If the result is non-negative, it calls field_setter with the value at param_1 +
 *   0x1c, 0x2b, and the result. The specific subsystem is not clear from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_log_state_11(int param_1,int param_2)

{
  ushort uVar2;
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) == 0x11) {
    uVar2 = read_u16_from_struct_array(param_2,0);
    iVar1 = (*(code *)0x10532f92/*ROM*/)(param_1,(uVar2 ^ 0xffff) + 0xcfc7);
    if (-1 < iVar1) {
      field_setter(*(int *)(param_1 + 0x1c),0x2b,(char)iVar1);
    }
  }
  return;
}
