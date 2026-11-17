/* @k10d store_and_dispatch_state_value @ 0x103933f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_and_dispatch_state_value(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = get_or_init_global_object_10395354();
  *(uint32_t *)(param_1 + 0xf0) = uVar1;
  uVar2 = read_field_at_offset_eight_10392fe8(param_1);
  switch(uVar2) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 5;
    break;
  case 6:
    uVar2 = 6;
    break;
  case 7:
    uVar2 = 7;
    break;
  case 8:
    uVar2 = 8;
    break;
  case 9:
    uVar2 = 9;
    break;
  case 10:
    uVar2 = 10;
    break;
  case 0xb:
    uVar2 = 0xb;
    break;
  default:
    goto LAB_10393452;
  }
  call_helper_with_offset_arg_10395478(uVar1,uVar2);
LAB_10393452:
  return;
}
