/* @k10d dispatch_three_param_calls @ 0x10532192
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three indirect functions with arguments derived from param_2 and stores results
 *   via a helper.
 * summary:
 *   The function calls read_u16_from_struct_array three times with param_2 and 1 to obtain
 *   arguments. It then performs indirect calls to code pointers at 0x10532efe, 0x10532f34,
 *   and 0x1053386c, passing param_1 and the derived arguments. The results of the first two
 *   indirect calls are passed to field_setter along with a value from *(param_1 + 0x1c) and
 *   constants 0x5b or the third result. The third indirect call's result is checked for
 *   non-zero before the second field_setter call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_three_param_calls(int param_1,int param_2)

{
  uint16_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  int iVar1;
  
  uVar2 = read_u16_from_struct_array(param_2,1);
  uVar3 = (*(code *)0x10532efe/*ROM*/)(param_1,uVar2);
  uVar2 = read_u16_from_struct_array(param_2,1);
  uVar4 = (*(code *)0x10532f34/*ROM*/)(param_1,uVar2);
  uVar2 = read_u16_from_struct_array(param_2,1);
  iVar1 = (*(code *)0x1053386c/*ROM*/)(param_1,uVar2);
  field_setter(*(int *)(param_1 + 0x1c),0x5b,uVar3);
  if (iVar1 != 0) {
    field_setter(*(int *)(param_1 + 0x1c),iVar1,uVar4);
  }
  return;
}
