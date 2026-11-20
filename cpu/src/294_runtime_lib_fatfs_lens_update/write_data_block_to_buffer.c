/* @k10d write_data_block_to_buffer @ 0x1053735e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a block descriptor and data pointer, then copies the data into an internal
 *   buffer and updates the object's state.
 * summary:
 *   The function checks that the descriptor and data pointer are valid. It calculates
 *   offsets based on the descriptor's dimensions and checks if the data fits within the
 *   object's current capacity (param_1+0x10). If it fits, it copies the data (via
 *   memcpy_bytes) and calls a helper (compute_indexed_lookup_value) to commit the change.
 *   If the commit fails with a specific error, it attempts to reallocate or adjust the
 *   buffer and updates a status field (param_1+0x28) if it changes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_data_block_to_buffer(void *param_1,int *param_2,void *param_3)

{
  struct {
    void * pvStack_54;
    uint uStack_50;
    uint uStack_4c;
  } _cfg_54;
  struct {
    int iStack_24;
    int iStack_20;
    uint uStack_1c;
  } _cfg_24;
  int iVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint32_t *puVar5;
  uint8_t auStack_5c [8];
  int aiStack_48 [3];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  puVar4 = auStack_5c;
  if ((((param_2 == (int *)0x0) || (param_2[1] == 0)) || (param_2[2] == 0)) ||
     (param_3 == 0)) {
    iVar1 = -0x16;
  }
  else {
    _cfg_54.uStack_50 = param_2[2] * 0x20;
    _cfg_54.uStack_4c = (param_2[1] + -1) * 0x20;
    aiStack_48[2] = *param_2;
    _cfg_54.pvStack_54 = param_3;
    if (aiStack_48[2] == 0) {
      if ((*(uint *)((int)param_1 + 0x48) & 3) == 0) {
        iVar1 = -0x16;
      }
      else {
        iVar1 = validate_lens_fw_block(param_1,(int *)&_cfg_54.pvStack_54);
      }
    }
    else {
      uVar3 = *(uint *)((int)param_1 + 0x10);
      puVar5 = (uint32_t *)auStack_5c;
      if ((_cfg_54.uStack_4c + _cfg_54.uStack_50 <= uVar3) ||
         (iVar1 = transfer_buffer_to_device(param_1,aiStack_48[2],(int *)&_cfg_54.pvStack_54),
         puVar5 = (uint32_t *)puVar4, iVar1 == 0)) {
        if (_cfg_54.uStack_4c < uVar3) {
          iVar2 = *param_2;
          iVar1 = lens_fw_get_block_ptr(param_1,iVar2,&_cfg_24.iStack_24);
          if (iVar1 != 0) {
            return iVar1;
          }
          uStack_34 = _cfg_54.uStack_4c;
          uStack_38 = uVar3 - _cfg_54.uStack_4c;
          uStack_3c = _cfg_54.uStack_50;
          uStack_2c = uStack_38;
          if (_cfg_54.uStack_50 < uStack_38) {
            uStack_2c = _cfg_54.uStack_50;
          }
          memcpy_bytes((void *)(_cfg_24.iStack_24 + 8 + _cfg_54.uStack_4c),_cfg_54.pvStack_54,uStack_2c);
          aiStack_48[1] = 1;
          aiStack_48[0] = iVar2;
          iVar1 = compute_indexed_lookup_value((int)param_1,_cfg_24.iStack_24 + 8,aiStack_48,&uStack_28);
          if (iVar1 != 0) {
            uStack_30 = *(uint *)((int)param_1 + 0x28);
            if (iVar1 == -6) {
              return -6;
            }
            iVar1 = dispatch_update_with_fallback(param_1,_cfg_24.iStack_24 + 8,iVar2,&_cfg_24.iStack_20);
            if (iVar1 != 0) {
              return iVar1;
            }
            *param_2 = _cfg_24.iStack_20;
            iVar1 = dispatch_lens_update_step((int)param_1,iVar2,*(int *)((int)param_1 + 0x50));
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar3 = *(uint *)((int)param_1 + 0x28);
            if (uStack_30 != uVar3) {
              _cfg_24.uStack_1c = (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18;
              *puVar5 = 4;
              puVar5[1] = 0x2c;
              iVar1 = write_two_buffer_blocks((int)param_1,0,0,&_cfg_24.uStack_1c,*puVar5,puVar5[1]);
              if (iVar1 != 0) {
                return iVar1;
              }
            }
          }
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
