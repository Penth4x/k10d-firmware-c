/* @k10d map_two_state_codes @ 0x1036e49e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Maps a state at param_1+0x2b0 and a code from read_struct_field_at_index_104c2890 into
 *   a 0-3 result.
 * summary:
 *   Reads an integer at offset 0x2b0 of param_1 and calls
 *   read_struct_field_at_index_104c2890 with a fixed SDRAM pointer (0x80015d38) and 0. Uses
 *   a nested switch on the two values to return 0, 1, 2, or 3. The caller is
 *   handle_startup_status_check. The specific camera subsystem is not identifiable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_two_state_codes(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0);
  iVar1 = *(int *)(param_1 + 0x2b0);
  if (iVar1 == 0) {
    if (iVar2 != 1) {
      if (iVar2 == 8) {
        return 2;
      }
      if (iVar2 == 3) goto LAB_1036e524;
      if (iVar2 == 6) {
        return 1;
      }
    }
LAB_1036e51c:
    uVar3 = 0;
  }
  else {
    if (iVar1 == 1) {
      if (iVar2 == 1) {
        return 2;
      }
      if (iVar2 != 8) {
        if (iVar2 == 3) {
          return 1;
        }
        if (iVar2 != 6) {
          return 1;
        }
        goto LAB_1036e51c;
      }
    }
    else if (iVar1 == 2) {
      if (iVar2 != 1) {
        if (iVar2 == 8) {
          return 1;
        }
        if (iVar2 == 3) goto LAB_1036e51c;
        if (iVar2 == 6) {
          return 2;
        }
      }
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      if (iVar2 == 1) {
        return 1;
      }
      if (iVar2 == 8) goto LAB_1036e51c;
      if (iVar2 == 3) {
        return 2;
      }
      if (iVar2 != 6) {
        return 1;
      }
    }
LAB_1036e524:
    uVar3 = 3;
  }
  return uVar3;
}
