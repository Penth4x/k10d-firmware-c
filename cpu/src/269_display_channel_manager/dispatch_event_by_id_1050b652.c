/* @k10d dispatch_event_by_id_1050b652 @ 0x1050b652
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050b666) overlaps instruction at (ram,0x1050b664)
    */

uint32_t dispatch_event_by_id_1050b652(cls_105d5584 *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0xa00004) {
    if (param_2 < 0xa00005) {
      if (param_2 == 0x700005) {
        return 0;
      }
      if (param_2 < 0x700006) {
        if (param_2 == 0x600002) {
          return 0;
        }
        if (param_2 < 0x600003) {
          if ((param_2 != 1) && (param_2 != 0x600001)) {
            return 0;
          }
        }
        else {
          if (param_2 == 0x600003) {
            return 0;
          }
          if (param_2 != 0x700003) {
            return 0;
          }
        }
      }
      else if (param_2 != 0x900001) {
        if (param_2 < 0x900002) {
          if (((param_2 != 0x700006) && (param_2 != 0x800001)) && (param_2 != 0x800002)) {
            return 0;
          }
        }
        else if (((param_2 != 0xa00001) && (param_2 != 0xa00002)) && (param_2 != 0xa00003)) {
          return 0;
        }
      }
    }
    else {
      if (param_2 == 0xf00001) {
        piVar1 = (int *)(param_1->field_0x58);
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0x1160002);
        return 0;
      }
      if (param_2 < 0xf00002) {
        if (param_2 != 0xc00003) {
          if (0xc00003 < param_2) {
            return 0;
          }
          if (((param_2 != 0xa00005) && (param_2 != 0xa00006)) && (param_2 != 0xa00007)) {
            return 0;
          }
        }
      }
      else if (param_2 != 0x10f0001) {
        if (param_2 < 0x10f0002) {
          if (param_2 != 0xf00003) {
            if (param_2 == 0xf00007) {
              param_1->field_0x80 = 1;
              return 0;
            }
            if (param_2 != 0x10e0001) {
              return 0;
            }
          }
        }
        else if (((param_2 != 0x10f0002) && (param_2 != 0x10f0003)) && (param_2 != 0x1130001)) {
          return 0;
        }
      }
    }
  }
  set_flg_obj(&param_1->field_0x68);
  return 0;
}
