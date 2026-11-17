/* @k10d select_pair_by_two_flags @ 0x104f5130
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * purpose:
 *   Selects a pair of 16-bit values from one of six slots in a global struct based on two
 *   bits of param_3, then forwards them to a helper.
 * summary:
 *   Calls get_or_init_sram_buffer_1052c5b8 to obtain a base pointer. Uses bit 31 of param_3
 *   and whether (param_3 & 0x4fffffff) is zero or one to index into offsets 0x84, 0x88,
 *   0x8c, 0x90, 0x94, or 0x98. Reads a pointer at the chosen offset, then dereferences it
 *   to get two 16-bit values (uVar3, uVar4). Passes param_1, param_2, uVar3, and uVar4 to
 *   send_two_param_updates. The specific camera subsystem is not identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_pair_by_two_flags(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  
  iVar2 = get_or_init_sram_buffer_1052c5b8();
  uVar1 = param_3 & 0x4fffffff;
  if ((param_3 & 0x80000000/*SDRAM*/) == 0x80000000/*SDRAM*/) {
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        uVar3 = **(uint16_t **)(iVar2 + 0x94);
        uVar4 = (*(uint16_t **)(iVar2 + 0x94))[1];
      }
      else {
        uVar3 = **(uint16_t **)(iVar2 + 0x98);
        uVar4 = (*(uint16_t **)(iVar2 + 0x98))[1];
      }
    }
    else {
      uVar3 = **(uint16_t **)(iVar2 + 0x90);
      uVar4 = (*(uint16_t **)(iVar2 + 0x90))[1];
    }
  }
  else if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar3 = **(uint16_t **)(iVar2 + 0x88);
      uVar4 = (*(uint16_t **)(iVar2 + 0x88))[1];
    }
    else {
      uVar3 = **(uint16_t **)(iVar2 + 0x8c);
      uVar4 = (*(uint16_t **)(iVar2 + 0x8c))[1];
    }
  }
  else {
    uVar3 = **(uint16_t **)(iVar2 + 0x84);
    uVar4 = (*(uint16_t **)(iVar2 + 0x84))[1];
  }
  send_two_param_updates(param_1,param_2,uVar3,uVar4);
  return;
}
