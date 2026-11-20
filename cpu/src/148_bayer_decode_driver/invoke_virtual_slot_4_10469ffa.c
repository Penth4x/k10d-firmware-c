/* @k10d invoke_virtual_slot_4_10469ffa @ 0x10469ffa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_10469ffa(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  (((vtbl_entry*)(iVar1))[5].fn)(*(int *)((int)param_1 + 0x23c) + (int)((vtbl_entry*)(iVar1))[5].adj);
  return;
}
