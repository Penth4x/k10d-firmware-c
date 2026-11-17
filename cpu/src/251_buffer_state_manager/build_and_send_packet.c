/* @k10d build_and_send_packet @ 0x104e0d4c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a packet in a local buffer using a copy routine and transmits it via a send
 *   function.
 * summary:
 *   The function calculates a total length based on param_1[0xc] and updates param_1[3]. It
 *   initializes a local buffer and populates it with fields from param_1 using
 *   copy_bytes_forward, which appears to be a memory copy or serialization routine.
 *   Finally, it calls bounded_byte_copy to transmit the constructed buffer and
 *   invoke_virtual_method_on_object_104e1232 to update the state of param_1. The specific
 *   subsystem (e.g., lens communication or sensor control) is not determinable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_packet(uint32_t *param_1)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint16_t uStack_a;
  
  param_1[3] = param_1[0xc] * 4 + param_1[3];
  uStack_a = 3;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  copy_bytes_forward((void *)(param_1 + 3),(void *)&local_2c,4);
  copy_bytes_forward((void *)&uStack_a,(void *)&uStack_28,2);
  copy_bytes_forward((void *)(param_1 + 4),(void *)((int)&uStack_28 + 2),2);
  copy_bytes_forward((void *)(param_1 + 6),(void *)&uStack_24,4);
  uVar2 = 0;
  if (param_1[0xc] != 0) {
    iVar1 = 0;
    do {
      copy_bytes_forward((void *)((int)param_1 + iVar1 + 0x1c),(void *)((int)&uStack_20 + iVar1),4);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar2 < (uint)param_1[0xc]);
  }
  bounded_byte_copy((uint *)*param_1,&local_2c,param_1[0xc] * 4 + 0xc,0);
  invoke_virtual_method_on_object_104e1232(param_1,param_1[3]);
  return;
}
