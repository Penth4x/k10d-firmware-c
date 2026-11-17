/* @k10d issue_four_region_config_commands @ 0x1048f79a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Calls a helper up to four times with computed offsets and fixed dimension pairs to
 *   configure regions.
 * summary:
 *   The function calls init_object_with_two_ids_1048f478 up to four times. If param_6 is
 *   non-zero, it first calls the helper with param_5 and dimensions 0x140x0x1e0. It then
 *   issues three more calls using param_2, param_2+param_3, and param_2+param_3+param_4 as
 *   the second argument, with varying flags (0, 0x80) and dimensions (0x280x0x1e0,
 *   0x140x0xf0, 0x140x0xf0). The helper's specific target is unknown, but the pattern
 *   suggests configuring multiple contiguous regions or buffers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_four_region_config_commands(int param_1,int param_2,int param_3,int param_4,uint32_t param_5,char param_6)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStackY_24 [2];
  
  puVar1 = auStackY_24;
  puVar2 = auStackY_24;
  if (param_6 != '\0') {
    init_object_with_two_ids_1048f478(param_1,param_5,0,0x140,0x1e0,0x140);
    puVar2 = puVar1;
  }
  *(uint16_t *)(puVar2 + 2) = 0x1e0;
  *(uint16_t *)(puVar2 + 6) = 0x280;
  init_object_with_two_ids_1048f478(param_1,param_2,0,0x280,*(uint16_t *)(puVar2 + 2),*(uint16_t *)(puVar2 + 6));
  *(uint16_t *)(puVar2 + 2) = 0xf0;
  *(uint16_t *)(puVar2 + 6) = 0x140;
  init_object_with_two_ids_1048f478(param_1,param_2 + param_3,0x80,0x140,*(uint16_t *)(puVar2 + 2),
               *(uint16_t *)(puVar2 + 6));
  *(uint16_t *)(puVar2 + 2) = 0xf0;
  *(uint16_t *)(puVar2 + 6) = 0x140;
  init_object_with_two_ids_1048f478(param_1,param_2 + param_3 + param_4,0x80,0x140,*(uint16_t *)(puVar2 + 2),
               *(uint16_t *)(puVar2 + 6));
  return;
}
