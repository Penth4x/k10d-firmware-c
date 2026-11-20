/* @k10d call_virtual_slot_two_with_arg_nine @ 0x105248c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_virtual_slot_two_with_arg_nine(uint32_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x114);
  iVar1 = (((vtbl_entry*)(iVar1))[3].fn)(param_2 + 0x114 + (int)((vtbl_entry*)(iVar1))[3].adj,9);
  return iVar1 != 0;
}
