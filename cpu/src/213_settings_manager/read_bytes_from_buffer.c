/* @k10d read_bytes_from_buffer @ 0x104ad600
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a specified number of bytes from a source buffer to a destination, advancing the
 *   source offset.
 * summary:
 *   The function reads up to param_3 bytes from the buffer pointed to by *param_1, starting
 *   at the offset stored in param_1[2]. It uses extract_bitfield_with_offset to calculate
 *   byte offsets (likely multiplying by 4 or handling alignment) and performs the copy in
 *   chunks of 3 bytes followed by a remainder loop. Finally, it updates the offset in
 *   param_1[2] by the number of bytes read and returns that count. The caller
 *   check_and_update_timer_state is a virtual method, suggesting this is part of a stream
 *   or buffer interface.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_bytes_from_buffer(int *param_1,uint32_t *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  uint uVar5;
  uint32_t uVar6;
  
  uVar5 = 0;
  if ((*param_1 != 0) && (uVar1 = param_1[2], (uVar1 & 3) == 0)) {
    uVar5 = param_1[3] - uVar1;
    if (param_3 < param_1[3] - uVar1) {
      uVar5 = param_3;
    }
    iVar2 = extract_bitfield_with_offset(uVar1,4,0);
    puVar3 = (uint32_t *)(*param_1 + iVar2 * 4);
    uVar1 = uVar5 & 3;
    iVar2 = extract_bitfield_with_offset(uVar5,4,0);
    if (iVar2 != 0) {
      iVar2 = iVar2 + -3;
      if (2 < iVar2) {
        do {
          *param_2 = *puVar3;
          puVar4 = puVar3 + 2;
          *param_2 = puVar3[1];
          puVar3 = puVar3 + 3;
          *param_2 = *puVar4;
          iVar2 = iVar2 + -3;
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        uVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        *param_2 = uVar6;
      }
    }
    if ((uVar1 != 0) && (uVar1 != 0)) {
      iVar2 = uVar1 - 3;
      if (2 < iVar2) {
        do {
          *(uint8_t *)param_2 = *(uint8_t *)puVar3;
          *(uint8_t *)((int)param_2 + 1) = *(uint8_t *)((int)puVar3 + 1);
          *(uint8_t *)((int)param_2 + 2) = *(uint8_t *)((int)puVar3 + 2);
          param_2 = (uint32_t *)((int)param_2 + 3);
          iVar2 = iVar2 + -3;
          puVar3 = (uint32_t *)((int)puVar3 + 3);
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        *(uint8_t *)param_2 = *(uint8_t *)puVar3;
        param_2 = (uint32_t *)((int)param_2 + 1);
        puVar3 = (uint32_t *)((int)puVar3 + 1);
      }
    }
  }
  param_1[2] = param_1[2] + uVar5;
  return uVar5;
}
