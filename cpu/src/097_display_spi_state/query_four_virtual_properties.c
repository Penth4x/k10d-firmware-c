/* @k10d query_four_virtual_properties @ 0x104205b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Invokes four virtual methods on an object referenced by param_1 to collect property
 *   values into a local stack buffer.
 * summary:
 *   The function initializes a 16-byte local buffer to zero. It then performs four virtual
 *   calls (slots at offsets 0x224, 0x22c, 0x234, 0x23c) on the object pointed to by
 *   *(param_1 + 0x30), storing the 16-bit results into the first half of the buffer.
 *   Finally, it calls write_validated_params_to_rom_block twice, passing pointers from
 *   param_1 (offsets 0x28, 0xec, and 0xf0) and the populated buffer as arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_four_virtual_properties(void *param_1)

{
  struct {
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint8_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_34;
  int iVar1;
  uintptr_t sp;
  _cfg_34.uStack_34 = 0;
  _cfg_34.uStack_32 = 0;
  _cfg_34.uStack_30 = 0;
  _cfg_34.uStack_2e = 0;
  _cfg_34.uStack_2c = 0;
  _cfg_34.uStack_28 = 0;
  _cfg_34.uStack_24 = 0;
  _cfg_34.uStack_20 = 0;
  _cfg_34.uStack_1e = 0;
  _cfg_34.uStack_1c = 0;
  _cfg_34.uStack_18 = 0;
  _cfg_34.uStack_14 = 0;
  _cfg_34.uStack_10 = 0;
  _cfg_34.uStack_c = 0;
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_34.uStack_34 = (((vtbl_entry*)(iVar1))[68].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[68].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_34.uStack_32 = (((vtbl_entry*)(iVar1))[69].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[69].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_34.uStack_30 = (((vtbl_entry*)(iVar1))[70].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[70].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_34.uStack_2e = (((vtbl_entry*)(iVar1))[71].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[71].adj);
  _cfg_34.uStack_2c = 0;
  _cfg_34.uStack_28 = 0;
  _cfg_34.uStack_24 = 0;
  _cfg_34.uStack_20 = 0;
  _cfg_34.uStack_1e = 0;
  write_validated_params_to_rom_block(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xec),&_cfg_34.uStack_34)
  ;
  write_validated_params_to_rom_block(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xf0),&_cfg_34.uStack_34)
  ;
  return;
}
