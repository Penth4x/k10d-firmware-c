/* @k10d init_object_and_wait_for_idle @ 0x10418f52
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Zeroes a 0x48-byte region, fills it with values from a helper, waits for a counter to
 *   clear, and calls two setup routines.
 * summary:
 *   The function first zeroes three 0x18-byte blocks at param_1+0x1588. It then loops up to
 *   0x48 bytes, calling alloc_first_ring_entry to populate the region, stopping if the
 *   helper returns 0. It then polls check_mode_flag_or_byte until it returns 0, calling
 *   check_kernel_call_success_10459fea(10) in the wait loop. Finally, it constructs two
 *   stack structures and calls read_exposure_params_via_vtable and init_three_buffer_pools,
 *   setting param_1+0x15d0 to 100.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_wait_for_idle(int param_1)

{
  struct {
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
  } _cfg_24;
  struct {
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
  } _cfg_50;
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uintptr_t sp;
  uint8_t auStack_34 [4];
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  iVar4 = 2;
  iVar3 = 0;
  do {
    iVar1 = param_1 + 0x1588;
    puVar2 = (uint32_t *)(iVar1 + iVar3);
    *puVar2 = 0;
    *(uint8_t *)(puVar2 + 1) = 0;
    *(uint8_t *)((int)puVar2 + 5) = 0;
    puVar2 = (uint32_t *)(iVar1 + iVar3 + 8);
    *puVar2 = 0;
    *(uint8_t *)(puVar2 + 1) = 0;
    *(uint8_t *)((int)puVar2 + 5) = 0;
    puVar2 = (uint32_t *)(iVar1 + iVar3 + 0x10);
    *puVar2 = 0;
    *(uint8_t *)(puVar2 + 1) = 0;
    *(uint8_t *)((int)puVar2 + 5) = 0;
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 0x18;
  } while (-1 < iVar4);
  iVar3 = 0;
  do {
    piVar5 = (int *)(param_1 + 0x1588 + iVar3);
    iVar4 = (uintptr_t)(alloc_first_ring_entry(*(uint32_t *)(param_1 + 0x54),param_1 + 0x40));
    *piVar5 = iVar4;
    if (iVar4 == 0) break;
    iVar3 = iVar3 + 8;
    *(uint8_t *)(piVar5 + 1) = 1;
  } while (iVar3 < 0x48);
  iVar3 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  while (iVar3 != 0) {
    check_kernel_call_success_10459fea(0xa);
    iVar3 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  }
  _cfg_50.uStack_40 = 1;
  _cfg_50.uStack_3e = 0x80;
  _cfg_50.uStack_50 = 0;
  _cfg_50.uStack_4e = 0;
  _cfg_50.uStack_4c = 0;
  _cfg_50.uStack_4a = 0;
  _cfg_50.uStack_48 = 0;
  _cfg_50.iStack_44 = 8;
  _cfg_50.uStack_3c = 0x20;
  _cfg_50.uStack_38 = 0;
  read_exposure_params_via_vtable(*(uint32_t *)(param_1 + 0x4c),&_cfg_50.uStack_50);
  _cfg_24.uStack_20 = 4;
  _cfg_24.uStack_1a = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  auStack_34[0] = 0;
  uStack_2c = 1;
  _cfg_24.uStack_24 = _cfg_50.uStack_48;
  if (_cfg_50.iStack_44 == 8) {
    _cfg_24.uStack_20 = 4;
    _cfg_24.uStack_1a = (uint16_t)(((uint)_cfg_50.uStack_50 << 1) / 3);
  }
  else if (_cfg_50.iStack_44 == 0xc) {
    _cfg_24.uStack_20 = 3;
    _cfg_24.uStack_1a = (uint16_t)((int)(uint)_cfg_50.uStack_50 >> 1);
  }
  _cfg_24.uStack_1c = _cfg_50.uStack_50;
  _cfg_24.uStack_10 = _cfg_50.uStack_38;
  _cfg_24.uStack_18 = _cfg_50.uStack_4e;
  _cfg_24.uStack_16 = _cfg_50.uStack_3e;
  _cfg_24.uStack_14 = _cfg_50.uStack_3c;
  _cfg_24.uStack_c = _cfg_50.uStack_4c;
  _cfg_24.uStack_a = _cfg_50.uStack_4a;
  init_three_buffer_pools(*(int *)(param_1 + 0x50),auStack_34,&_cfg_24.uStack_24);
  *(uint32_t *)(param_1 + 0x15d0) = 100;
  return;
}
