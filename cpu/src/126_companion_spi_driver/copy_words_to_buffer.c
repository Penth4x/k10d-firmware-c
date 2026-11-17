/* @k10d copy_words_to_buffer @ 0x1044450a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_words_to_buffer(uint32_t param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar4 = 4;
  iVar2 = check_sram_address_range(param_1,param_2);
  if (iVar2 != 0) {
    iVar3 = call_two_helpers_in_sequence_10444750(param_1);
    iVar2 = compute_half_distance_from_base(param_1,param_2);
    if ((uint)(iVar3 - iVar2) < param_4) {
      param_4 = iVar3 - iVar2;
    }
    if (param_4 != 0) {
      iVar2 = iVar2 << 1;
      iVar3 = param_4 - 3;
      iVar1 = 0;
      if (2 < iVar3) {
        do {
          *(uint16_t *)(iVar2 + -0x7ffe1080) = *(uint16_t *)(param_3 + iVar1);
          *(uint16_t *)(iVar2 + -0x7ffe107e) = *(uint16_t *)(param_3 + iVar1 + 2);
          *(uint16_t *)(iVar2 + -0x7ffe107c) = *(uint16_t *)(param_3 + iVar1 + 4);
          iVar1 = iVar1 + 6;
          iVar3 = iVar3 + -3;
          iVar2 = iVar2 + 6;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint16_t *)(iVar2 + -0x7ffe1080) = *(uint16_t *)(param_3 + iVar1);
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + 2;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}
