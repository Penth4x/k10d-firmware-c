/* @k10d send_two_word_command @ 0x1046324c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_two_word_command(int *param_1,uint32_t param_2,uint32_t param_3)

{
  struct {
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
  } _cfg_c;
  int iVar1;
  uintptr_t sp;
  _cfg_c.uStack_c = (uint8_t)((uint)param_2 >> 8);
  _cfg_c.uStack_b = (uint8_t)param_2;
  _cfg_c.uStack_a = (uint8_t)((uint)param_3 >> 8);
  _cfg_c.uStack_9 = (uint8_t)param_3;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x33,&_cfg_c.uStack_c,0);
  return iVar1;
}
