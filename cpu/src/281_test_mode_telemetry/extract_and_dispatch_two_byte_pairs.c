/* @k10d extract_and_dispatch_two_byte_pairs @ 0x105227f2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Extracts two 16-bit values from a struct via helper calls and passes them to a dispatch
 *   function.
 * summary:
 *   The function calls dispatch_virtual_slot_two_104af096 four times with indices 2,3,4,5
 *   to extract bytes, combining them into two 16-bit values (uStack_c and uStack_a). It
 *   then calls copy_if_flag_clear with param_1[8], param_2, and these two values. If
 *   copy_if_flag_clear returns non-zero, it calls invoke_virtual_slot_two_104af0c8 with the
 *   second extracted value; otherwise it returns 0. The specific camera subsystem is not
 *   identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t extract_and_dispatch_two_byte_pairs(int *param_1,void *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,3,1);
  uVar2 = dispatch_virtual_slot_two_104af096((int)param_1,2,1);
  uStack_c = CONCAT11((char)uVar1,(char)uVar2);
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,5,1);
  uVar2 = dispatch_virtual_slot_two_104af096((int)param_1,4,1);
  uStack_a = CONCAT11((char)uVar1,(char)uVar2);
  iVar3 = copy_if_flag_clear(param_1[8],param_2,uStack_c,uStack_a);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = invoke_virtual_slot_two_104af0c8(param_1,param_2,(uint)uStack_a);
  }
  return uVar1;
}
