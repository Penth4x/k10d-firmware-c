/* @k10d sr_cal_transfer @ 0x1048f70c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_three_calibration_regions)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Copies three fixed-size data regions to offset destinations using a helper function.
 * summary:
 *   The function calls init_object_with_two_ids_1048f478 up to four times to transfer data
 *   blocks. It conditionally copies a 0x140-byte block to param_2 + 0x70800 if param_3 is
 *   non-zero. It then unconditionally copies a 0x280-byte block to param_2, followed by two
 *   0x140-byte blocks to param_2 + 0x4b000 and param_2 + 0x5dc00. The helper
 *   init_object_with_two_ids_1048f478 appears to handle the actual memory or register
 *   transfer with size and offset parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* SR calibration table copy: 0x280B@0x70800, 0x140B@0x4b000, 0xf0B@0x5dc00. */

void sr_cal_transfer(int param_1,int param_2,int param_3)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStackY_24 [2];
  
  puVar1 = auStackY_24;
  puVar2 = auStackY_24;
  if (param_3 != 0) {
    init_object_with_two_ids_1048f478(param_1,param_2 + 0x70800,0,0x140,0x1e0,0x140);
    puVar2 = puVar1;
  }
  *(uint16_t *)(puVar2 + 2) = 0x1e0;
  *(uint16_t *)(puVar2 + 6) = 0x280;
  init_object_with_two_ids_1048f478(param_1,param_2,0,0x280,*(uint16_t *)(puVar2 + 2),*(uint16_t *)(puVar2 + 6));
  *(uint16_t *)(puVar2 + 2) = 0xf0;
  *(uint16_t *)(puVar2 + 6) = 0x140;
  init_object_with_two_ids_1048f478(param_1,param_2 + 0x4b000,0x80,0x140,*(uint16_t *)(puVar2 + 2),
               *(uint16_t *)(puVar2 + 6));
  *(uint16_t *)(puVar2 + 2) = 0xf0;
  *(uint16_t *)(puVar2 + 6) = 0x140;
  init_object_with_two_ids_1048f478(param_1,param_2 + 0x5dc00,0x80,0x140,*(uint16_t *)(puVar2 + 2),
               *(uint16_t *)(puVar2 + 6));
  return;
}
