/* @k10d build_and_send_two_byte_command @ 0x1052288e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Extracts two bytes from param_1 via helper, packs them into a 16-bit value, and passes
 *   it with other struct fields to a dispatch function.
 * summary:
 *   Calls dispatch_virtual_slot_two_104af096 twice with indices 3 and 2 to retrieve byte
 *   values from the object pointed to by param_1. These bytes are concatenated into a
 *   16-bit value (uStack_a). The function then calls update_buffer_size_and_dispatch with
 *   fields at offsets 0x20, 0x28, 0x24 of param_1 and the packed 16-bit value. If
 *   update_buffer_size_and_dispatch returns non-zero, invoke_virtual_slot_two_104ae294 is
 *   called on param_1. The specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_send_two_byte_command(void *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint16_t uStack_a;
  
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,3,1);
  uVar2 = dispatch_virtual_slot_two_104af096((int)param_1,2,1);
  uStack_a = CONCAT11((char)uVar1,(char)uVar2);
  iVar3 = update_buffer_size_and_dispatch(*(uint32_t *)((int)param_1 + 0x20),*(uint32_t *)((int)param_1 + 0x28),
                       uStack_a,*(uint16_t *)((int)param_1 + 0x24));
  if (iVar3 != 0) {
    invoke_virtual_slot_two_104ae294(param_1);
  }
  return 0;
}
