/* @k10d compute_exposure_offset_delta @ 0x1046cea8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Calculates an exposure offset value from sensor/AFE parameters and stores the
 *   difference from a reference value.
 * summary:
 *   The function retrieves several byte and integer parameters from a structure via helper
 *   functions (read_first_word_1045c66c, read_byte_at_offset_two, etc.). It performs a
 *   weighted sum calculation using constants like 0x1e13380 and 0x15180, which suggests
 *   fixed-point arithmetic for exposure or gain values. It then compares this calculated
 *   value against a result from read_table_entry_with_offset and stores the non-negative
 *   difference in the integer pointer param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_exposure_offset_delta(uint32_t param_1,int *param_2,uint16_t *param_3,uint32_t param_4,
                 uint8_t param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = read_first_word_1045c66c(param_3);
  uVar6 = 1;
  iVar7 = (uVar1 - _DAT_80048764/*SDRAM*/) * 0x1e13380 +
          (((uVar1 - 0x7d1 >> 2) - (uVar1 - 0x7d1) / 100) - _DAT_80048768/*SDRAM*/) * 0x15180;
  bVar2 = read_byte_at_offset_two(param_3);
  if (1 < bVar2) {
    do {
      bVar3 = lookup_byte_from_table(param_3,uVar1,uVar6);
      iVar7 = (uint)bVar3 * 0x15180 + iVar7;
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < bVar2);
  }
  bVar2 = read_byte_at_offset_three(param_3);
  bVar3 = read_byte_at_offset_5(param_3);
  bVar4 = read_byte_at_offset_six(param_3);
  bVar5 = read_byte_at_offset_seven(param_3);
  uVar6 = (bVar2 - 1) * 0x15180 + iVar7 + (uint)bVar3 * 0xe10 + (uint)bVar4 * 0x3c + (uint)bVar5;
  uVar1 = read_table_entry_with_offset(param_1,param_4,param_5);
  if (uVar1 < uVar6) {
    iVar7 = uVar6 - uVar1;
  }
  else {
    iVar7 = 0;
  }
  *param_2 = iVar7;
  return;
}
