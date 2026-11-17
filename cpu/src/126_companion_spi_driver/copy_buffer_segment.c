/* @k10d copy_buffer_segment @ 0x104442a2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies a clamped number of bytes from a source buffer to a destination buffer using
 *   16-bit word transfers.
 * summary:
 *   The function first calls check_sram_address_range to check a condition on param_1 and
 *   param_2. If successful, it retrieves two offsets via compute_half_distance_from_base
 *   and call_two_helpers_in_sequence_10444750, calculates the available length, and clamps
 *   it to param_4. It then performs a word-wise copy (2 bytes at a time) from param_2 to
 *   param_3, handling the tail bytes individually. Returns 0 on success or 4 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_buffer_segment(uint32_t param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_10;
  
  uStack_10 = 4;
  iVar2 = check_sram_address_range(param_1,param_2);
  if (iVar2 != 0) {
    iVar2 = compute_half_distance_from_base(param_1,param_2);
    iVar3 = call_two_helpers_in_sequence_10444750(param_1);
    if ((uint)(iVar3 - iVar2) < param_4) {
      param_4 = iVar3 - iVar2;
    }
    if (param_4 != 0) {
      iVar2 = param_4 - 3;
      iVar3 = 0;
      if (2 < iVar2) {
        do {
          *(uint16_t *)(iVar3 + param_3) = *(uint16_t *)(param_2 + iVar3);
          iVar1 = iVar3 + 4;
          *(uint16_t *)(iVar3 + 2 + param_3) = *(uint16_t *)(param_2 + iVar3 + 2);
          iVar3 = iVar3 + 6;
          iVar2 = iVar2 + -3;
          *(uint16_t *)(iVar1 + param_3) = *(uint16_t *)(param_2 + iVar1);
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        *(uint16_t *)(iVar3 + param_3) = *(uint16_t *)(param_2 + iVar3);
        iVar3 = iVar3 + 2;
      }
    }
    uStack_10 = 0;
  }
  return uStack_10;
}
