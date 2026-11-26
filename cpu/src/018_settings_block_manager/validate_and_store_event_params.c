/* @k10d validate_and_store_event_params @ 0x1036b3cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1036b3e8) overlaps instruction at (ram,0x1036b3e6)
    */
/* WARNING: Type propagation algorithm not settling */

uint32_t validate_and_store_event_params(cls_10599c24 *param_1,int param_2,int param_3)

{
  param_1->field_0x4 = param_2;
  if (0x16 < param_2 - 0xc0001U) {
    param_1->field_0x8 = param_3;
    return 0;
  }
  param_1->field_0x8 = param_3;
  switch(param_2) {
  case 0xc0001:
    if ((param_3 == 0) || (param_3 == 1)) goto LAB_1036b6d2;
    goto joined_r0x1036b6c6;
  case 0xc0002:
    break;
  case 0xc0003:
    break;
  case 0xc0004:
    break;
  case 0xc0005:
    break;
  case 0xc0006:
    goto LAB_1036b6d2;
  case 0xc0007:
    break;
  case 0xc0008:
    break;
  case 0xc0009:
    goto LAB_1036b6d2;
  case 0xc000a:
    break;
  case 0xc000b:
    break;
  case 0xc000c:
    goto joined_r0x1036b6be;
  case 0xc000d:
    if ((param_3 == 0) || (param_3 == 1)) goto LAB_1036b6d2;
    goto joined_r0x1036b5f8;
  case 0xc000e:
    if (param_3 == 0) goto LAB_1036b6d2;
    goto joined_r0x1036b5f4;
  case 0xc000f:
    goto joined_r0x1036b5f0;
  case 0xc0010:
joined_r0x1036b5f0:
    if (param_3 != 0) {
joined_r0x1036b5f4:
      if (param_3 != 1) {
joined_r0x1036b5f8:
        if ((param_3 != 2) && ((param_3 != 3 && (param_3 != 0xb)))) {
          return 0;
        }
      }
    }
    goto LAB_1036b6d2;
  case 0xc0011:
    goto joined_r0x1036b6be;
  case 0xc0012:
    break;
  case 0xc0013:
    break;
  case 0xc0014:
    goto joined_r0x1036b692;
  case 0xc0015:
    goto joined_r0x1036b6be;
  case 0xc0016:
joined_r0x1036b692:
    if (((((param_3 != 0) && (param_3 != 1)) && (param_3 != 2)) &&
        ((param_3 != 3 && (param_3 != 4)))) && ((param_3 != 5 && (param_3 != 10)))) {
      return 0;
    }
    goto LAB_1036b6d2;
  case 0xc0017:
joined_r0x1036b6be:
    if (param_3 == 0) goto LAB_1036b6d2;
    goto joined_r0x1036b6c2;
  }
  if (param_3 != 0) {
joined_r0x1036b6c2:
    if (param_3 != 1) {
joined_r0x1036b6c6:
      if ((param_3 != 2) && (param_3 != 3)) {
        return 0;
      }
    }
  }
LAB_1036b6d2:
  set_flg_obj((uint32_t *)0x80018088/*SDRAM*/, 0x400000);
  return 0;
}
