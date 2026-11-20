/* @k10d pack_two_u16_into_buffer @ 0x10463276
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs two 16-bit values from parameters into a 6-byte stack buffer and passes it to a
 *   helper.
 * summary:
 *   The function extracts the low and high bytes of param_2 and param_3, along with the low
 *   and high bytes of param_4, and arranges them into a local stack buffer. It then calls
 *   issue_indexed_command_and_wait with param_1, param_1+1, a size of 0x34 (52), the stack
 *   buffer, and 0. The specific role of the data being packed is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int pack_two_u16_into_buffer(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  struct {
    uint8_t uStack_e;
    uint8_t uStack_d;
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
  } _cfg_e;
  int iVar1;
  uintptr_t sp;
  _cfg_e.uStack_e = (uint8_t)((uint)param_2 >> 8);
  _cfg_e.uStack_c = (uint8_t)((uint)param_3 >> 8);
  _cfg_e.uStack_d = (uint8_t)param_2;
  _cfg_e.uStack_9 = (uint8_t)param_4;
  _cfg_e.uStack_b = (uint8_t)param_3;
  _cfg_e.uStack_a = (uint8_t)((uint)param_4 >> 8);
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x34,&_cfg_e.uStack_e,0);
  return iVar1;
}
