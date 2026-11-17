/* @k10d map_status_code_to_event @ 0x103931e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a status code and forwards a mapped code and flag to a downstream handler.
 * summary:
 *   Calls read_field_at_offset_0xf4 to obtain a status value, then uses a large if/else
 *   chain to map specific input codes (e.g. 0x5060023, 0x5060013, 0x5060031) to output
 *   codes and a boolean flag (0 or 1). It then calls reset_and_select_one_field with
 *   param_1+8, the mapped code, and the flag. If the input code does not match any known
 *   case, the function returns without calling the handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_status_code_to_event(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = read_field_at_offset_0xf4(__frv_reg_unset(4));
  if (uVar1 == 0x5060023) {
LAB_103932d0:
    iVar2 = 0x5060022;
  }
  else if (uVar1 < 0x5060024) {
    if (uVar1 != 0x5060016) {
      if (uVar1 < 0x5060017) {
        if (uVar1 == 0x5060003) {
          iVar2 = 0x5060003;
        }
        else {
          if (uVar1 != 0x5060013) {
            if (uVar1 != 0x5060014) {
              return;
            }
            goto LAB_103932b8;
          }
          iVar2 = 0x5060013;
        }
      }
      else {
        if ((uVar1 == 0x5060018) || (uVar1 == 0x506001a)) goto LAB_103932b8;
        if (uVar1 != 0x5060022) {
          return;
        }
        iVar2 = 0x5060022;
      }
LAB_103932a8:
      iVar3 = 1;
      goto LAB_103932ee;
    }
LAB_103932b8:
    iVar2 = 0x5060013;
  }
  else {
    if (uVar1 == 0x5060031) {
      iVar2 = 0x5060031;
      goto LAB_103932a8;
    }
    if (uVar1 < 0x5060032) {
      if (((uVar1 != 0x5060025) && (uVar1 != 0x5060027)) && (uVar1 != 0x5060029)) {
        return;
      }
      goto LAB_103932d0;
    }
    if (((uVar1 != 0x5060032) && (uVar1 != 0x5060034)) && (uVar1 != 0x5060036)) {
      return;
    }
    iVar2 = 0x5060031;
  }
  iVar3 = 0;
LAB_103932ee:
  reset_and_select_one_field((void *)(param_1 + 8),iVar2,iVar3);
  return;
}
