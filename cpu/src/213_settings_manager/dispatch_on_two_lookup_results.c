/* @k10d dispatch_on_two_lookup_results @ 0x104aec62
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls two lookup helpers with fixed parameters, passes results to a third function, and
 *   branches to one of three handlers based on the return code.
 * summary:
 *   The function invokes dispatch_virtual_slot_two_104af096 twice with param_1 and constant
 *   pairs (2,4) and (7,2). It passes the two results to dispatch_virtual_slot_8_104af5ca
 *   along with param_4. Depending on the return value of dispatch_virtual_slot_8_104af5ca
 *   (0, 9, or other), it calls one of three distinct handlers:
 *   invoke_virtual_slot_two_104ae294, invoke_virtual_slot_two_104ae3ac, or
 *   invoke_virtual_slot_two_104ae2e4. The function always returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_two_lookup_results(cls_105b77c0 *param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,2,4);
  uVar2 = dispatch_virtual_slot_two_104af096((int)param_1,7,2);
  iVar3 = dispatch_virtual_slot_8_104af5ca(param_4,uVar1,uVar2);
  if (iVar3 == 0) {
    invoke_virtual_slot_two_104ae294(param_1);
  }
  else if (iVar3 == 9) {
    invoke_virtual_slot_two_104ae3ac((int)param_1);
  }
  else {
    invoke_virtual_slot_two_104ae2e4(param_1);
  }
  return 0;
}
