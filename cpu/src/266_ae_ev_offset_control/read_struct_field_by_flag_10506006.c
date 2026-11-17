/* @k10d read_struct_field_by_flag_10506006 @ 0x10506006
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_by_flag_10506006(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0xc;
  if (param_2 != 0) {
    iVar1 = 0x14;
  }
  return *(uint32_t *)(iVar1 + param_1);
}
