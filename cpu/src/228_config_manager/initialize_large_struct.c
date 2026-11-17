/* @k10d initialize_large_struct @ 0x104c2562
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 228_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_large_struct(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint16_t auStack_10 [4];
  
  *param_1 = 0xffffffff;
  *(uint16_t *)(param_1 + 1) = 0;
  *(uint16_t *)((int)param_1 + 6) = 0;
  param_1[2] = 0xffffffff;
  iVar3 = 3;
  iVar2 = 0;
  do {
    iVar1 = iVar2;
    *(uint8_t *)((int)param_1 + iVar1 + 0xc) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0xe) = 0;
    iVar3 = iVar3 + -1;
    iVar2 = iVar1 + 3;
  } while (-1 < iVar3);
  *(uint8_t *)((int)param_1 + iVar1 + 0xf) = 0;
  *(uint8_t *)((int)param_1 + 0x19) = 0;
  param_1[7] = 0;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,0,0,0,0);
  copy_eight_bytes_1045c584((uint16_t *)(param_1 + 8),auStack_10);
  *(uint8_t *)(param_1 + 10) = 0;
  *(uint8_t *)((int)param_1 + 0x31) = 0;
  *(uint8_t *)((int)param_1 + 0x32) = 0;
  *(uint8_t *)((int)param_1 + 0x33) = 0;
  *(uint8_t *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  *(uint16_t *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(uint8_t *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  *(uint16_t *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(uint8_t *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  *(uint16_t *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(uint8_t *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  *(uint16_t *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(uint8_t *)(param_1 + 0x45) = 0;
  iVar2 = 8;
  iVar3 = 0;
  do {
    *(uint32_t *)((int)param_1 + iVar3 + 0x118) = 0;
    *(uint32_t *)((int)param_1 + iVar3 + 0x11c) = 0;
    *(uint32_t *)((int)param_1 + iVar3 + 0x120) = 0;
    *(uint32_t *)((int)param_1 + iVar3 + 0x124) = 0;
    *(uint32_t *)((int)param_1 + iVar3 + 0x128) = 0;
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 0x14;
  } while (-1 < iVar2);
  copy_eight_bytes_1045c584((uint16_t *)(param_1 + 0x73),auStack_10);
  *(uint16_t *)(param_1 + 0x75) = 0;
  *(uint8_t *)((int)param_1 + 0x1d6) = 0;
  *(uint8_t *)((int)param_1 + 0x1d7) = 0;
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
