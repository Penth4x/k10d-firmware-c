/* @k10d map_mode_state_pair @ 0x1036e124
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_state_pair(void *param_1)

{
  int iVar1;
  
  read_struct_field_at_index_104c2890((void *)0x80015b24/*SDRAM*/,0);
  iVar1 = map_mode_code_to_index_104bb5c4(__frv_reg_unset(4));
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)param_1 + 0x2b0);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      return 3;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)((int)param_1 + 0x2b0);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        return 3;
      }
      if (iVar1 != 3) {
        return 0;
      }
      return 0;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = *(int *)((int)param_1 + 0x2b0);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        return 3;
      }
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          return 1;
        }
        return 0;
      }
      return 0;
    }
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    iVar1 = *(int *)((int)param_1 + 0x2b0);
    if (iVar1 == 0) {
      return 3;
    }
    if (iVar1 == 1) {
      return 0;
    }
    if (iVar1 == 2) {
      return 1;
    }
    if (iVar1 != 3) {
      return 0;
    }
  }
  return 2;
}
