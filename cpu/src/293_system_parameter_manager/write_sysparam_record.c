/* @k10d write_sysparam_record @ 0x10536082
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_sysparam_record(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 4);
  write_little_endian_bytes(iVar1,0x53425355,4);
  write_little_endian_bytes(iVar1 + 4,param_2,4);
  write_little_endian_bytes(iVar1 + 0xc,1,1);
  return;
}
