/* @k10d call_helper_with_packed_args @ 0x1046315e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs four parameters into a stack buffer and passes it to a helper function.
 * summary:
 *   The function takes four parameters and packs them into a local stack buffer. It then
 *   calls issue_indexed_command_and_wait with the first parameter, a pointer to the second
 *   parameter, the constant 0x2b, a pointer to the packed stack buffer, and 0. The return
 *   value of the callee is returned directly. The specific role of the packed data and the
 *   callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_packed_args(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

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
  _cfg_e.uStack_d = (uint8_t)param_2;
  _cfg_e.uStack_9 = (uint8_t)param_4;
  _cfg_e.uStack_c = (uint8_t)((uint)param_3 >> 8);
  _cfg_e.uStack_a = (uint8_t)((uint)param_4 >> 8);
  _cfg_e.uStack_b = _cfg_e.uStack_d;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x2b,&_cfg_e.uStack_e,0);
  return iVar1;
}
