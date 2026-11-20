/* @k10d dispatch_virtual_slot_10_10482d06 @ 0x10482d06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_virtual_slot_10_10482d06(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  bool bVar2;
  
  call_kernel_with_short_id(param_1 + 6);
  iVar1 = (((vtbl_entry*)(*param_1))[10].fn)((int)((vtbl_entry*)(*param_1))[10].adj + (int)param_1);
  bVar2 = false;
  if (iVar1 != 0) {
    set_two_fields_at_offset_0xc(param_1,param_4,param_3);
    bVar2 = store_value_and_check_flag(param_1,4);
  }
  check_kernel_call_success_10459d88(param_1 + 6);
  return bVar2;
}
