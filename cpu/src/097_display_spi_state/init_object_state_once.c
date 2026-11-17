/* @k10d init_object_state_once @ 0x10414196
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes a struct's state fields and calls two setup functions if a flag at offset
 *   0x80 is zero.
 * summary:
 *   Checks if the byte at param_1 + 0x80 is zero; if so, sets it to 1 to prevent re-
 *   initialization. It populates a local stack structure with constants and values derived
 *   from param_1 + 0x4c, calls read_exposure_params_via_vtable, then calls
 *   init_three_buffer_pools with param_1 + 0x50. Finally, it writes a pointer to param_1 +
 *   0x40 into the object at param_1 + 0x50 and calls a function at 0x10514e52.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_state_once(int param_1)

{
  uintptr_t sp;
  ushort uStack_50;
  uint16_t uStack_4e;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint32_t uStack_48;
  int iStack_44;
  uint8_t uStack_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  uint32_t uStack_38;
  uint8_t auStack_34 [4];
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  ushort uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint32_t uStack_10;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(uint8_t *)(param_1 + 0x80) = 1;
    iStack_44 = 8;
    uStack_3e = 0x80;
    uStack_50 = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    uStack_48 = 0;
    uStack_40 = 1;
    uStack_3c = 0x20;
    uStack_38 = 0;
    read_exposure_params_via_vtable(*(uint32_t *)(param_1 + 0x4c),&uStack_50);
    uStack_20 = 4;
    uStack_1a = 0;
    uStack_30 = 2;
    uStack_2c = 3;
    uStack_28 = 0;
    auStack_34[0] = 0;
    uStack_24 = uStack_48;
    if (iStack_44 == 8) {
      uStack_20 = 4;
      uStack_1a = (uint16_t)(((uint)uStack_50 << 1) / 3);
    }
    else if (iStack_44 == 0xc) {
      uStack_20 = 3;
      uStack_1a = (uint16_t)((int)(uint)uStack_50 >> 1);
    }
    uStack_1c = uStack_50;
    uStack_10 = uStack_38;
    uStack_18 = uStack_4e;
    uStack_16 = uStack_3e;
    uStack_14 = uStack_3c;
    uStack_c = uStack_4c;
    uStack_a = uStack_4a;
    init_three_buffer_pools(*(int *)(param_1 + 0x50),auStack_34,&uStack_24);
    *(int *)(*(int *)(param_1 + 0x50) + 0x68) = param_1 + 0x40;
    (*(code *)0x10514e52/*ROM*/)(*(uint32_t *)(param_1 + 0x50),1);
  }
  return;
}
