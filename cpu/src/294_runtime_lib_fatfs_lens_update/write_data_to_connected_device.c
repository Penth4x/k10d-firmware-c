/* @k10d write_data_to_connected_device @ 0x10541a5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a block of data to a connected peripheral, handling buffer allocation and
 *   partial writes.
 * summary:
 *   The function takes a data pointer and length, validates the connection state, and
 *   writes the data to the device. It manages internal buffer allocation and updates the
 *   device state structure with the number of bytes written. It is part of a module that
 *   handles firmware updates for a connected device.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10541c1c) overlaps instruction at (ram,0x10541c1a)
    */

int write_data_to_connected_device(uint32_t param_1)

{
  struct {
    uint uStack_8c;
    uint uStack_88;
    int iStack_84;
    int iStack_80;
    int iStack_7c;
    ushort uStack_76;
    short sStack_72;
    short sStack_6e;
  } _cfg_8c;
  struct {
    int * piStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    uint uStack_28;
    int iStack_24;
    uint uStack_20;
    int iStack_1c;
    uint uStack_18;
    uint uStack_14;
    int iStack_10;
    uint uStack_c;
  } _cfg_38;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  uintptr_t sp;
  int *piVar9;
  void *in_stack_00000010;
  uint in_stack_00000014;
  int *in_stack_00000018;
  uint8_t auStack_a4 [12];
  void *pvStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  piVar9 = (int *)auStack_a4;
  iStack_48 = 0;
  if ((in_stack_00000010 == 0) || (in_stack_00000018 == (int *)0x0)) {
    return -0x16;
  }
  *in_stack_00000018 = 0;
  iVar2 = (*(code *)0x10538c70/*ROM*/)(param_1,&_cfg_38.piStack_38);
  if (iVar2 != 0) {
    return iVar2;
  }
  iStack_60 = *_cfg_38.piStack_38;
  if (*(int *)(iStack_60 + 8) != 2) {
    return -9;
  }
  if (*(short *)((int)_cfg_38.piStack_38 + 6) == 0) {
    return -0x1e;
  }
  pvVar7 = *(void **)(iStack_60 + 0xc);
  if (*(short *)(*(int *)((int)pvVar7 + 100) + 0xe) != 0) {
    return -6;
  }
  *(uint32_t *)((int)pvVar7 + 0x78) = 0;
  uStack_3c = _cfg_38.piStack_38[4];
  uVar8 = *(uint *)((int)pvVar7 + 0x10);
  if ((*(ushort *)((int)_cfg_38.piStack_38 + 6) & 8) != 0) {
    _cfg_38.piStack_38[7] = uStack_3c;
    _cfg_38.piStack_38[8] = _cfg_38.piStack_38[6];
  }
  uStack_40 = _cfg_38.piStack_38[7];
  if (uStack_3c < uStack_40) {
    iVar2 = uStack_40 - uStack_3c;
    _cfg_38.uStack_30 = _cfg_38.piStack_38[6];
    uVar3 = compute_modulo_10544c28(uStack_3c,uVar8);
    *piVar9 = (int)&_cfg_38.uStack_30;
    iVar2 = (*(code *)0x10543452/*ROM*/)(pvVar7,uVar3,iVar2,&_cfg_8c.uStack_8c);
    uStack_58 = _cfg_38.piStack_38[5];
    if (uStack_58 == 0) {
      _cfg_38.piStack_38[5] = _cfg_38.uStack_30;
    }
    else {
      uStack_5c = _cfg_38.piStack_38[6];
      if (uStack_5c != _cfg_38.uStack_30) {
        if (uStack_58 == uStack_5c) {
          _cfg_38.piStack_38[5] = _cfg_38.uStack_30;
        }
        else {
          uVar3 = unsigned_divide(uStack_3c - 1,uVar8);
          iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)pvVar7,uStack_58,uVar3 - 1,&_cfg_38.uStack_28);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = dispatch_lens_update_step((int)pvVar7,_cfg_38.uStack_28,_cfg_38.uStack_30);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
    }
    _cfg_38.piStack_38[2] = 0;
    _cfg_38.piStack_38[6] = _cfg_8c.uStack_8c;
    _cfg_38.piStack_38[8] = _cfg_8c.uStack_8c;
    uStack_3c = _cfg_38.piStack_38[4] + _cfg_8c.uStack_88;
    _cfg_38.piStack_38[4] = uStack_3c;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (in_stack_00000014 == 0) {
    return 0;
  }
  uVar3 = -uStack_40 - 1;
  if ((uVar3 < in_stack_00000014) && (in_stack_00000014 = uVar3, uVar3 == 0)) {
    return -0x1b;
  }
  pvStack_98 = in_stack_00000010;
  uStack_94 = in_stack_00000014;
  uStack_90 = compute_modulo_10544c28(uStack_40,uVar8);
  uVar6 = in_stack_00000014 + uStack_90;
  uStack_44 = uStack_90;
  uVar4 = unsigned_divide(uVar6,uVar8);
  uVar5 = compute_modulo_10544c28(uVar6,uVar8);
  uVar3 = uVar4 + 1;
  if (uVar5 == 0) {
    uVar3 = uVar4;
  }
  uStack_50 = uVar6;
  iVar2 = (*(code *)0x1053db52/*ROM*/)(pvVar7,&_cfg_38.iStack_24);
  if (iVar2 == 0) {
    if (_cfg_38.iStack_24 == 0) {
      iVar2 = -0x1c;
    }
    else if (_cfg_38.piStack_38[5] == 0) {
      _cfg_38.uStack_30 = 0;
      *piVar9 = (int)&_cfg_38.uStack_30;
      piVar9[1] = 0;
      iVar2 = send_data_chunk_with_retry(pvVar7,uVar3,(int *)&pvStack_98,(int *)&_cfg_8c.uStack_8c,(int *)*piVar9,
                           *(byte *)((int)piVar9 + 7));
      uStack_94 = uStack_94 - _cfg_8c.uStack_88;
      _cfg_38.piStack_38[5] = _cfg_38.uStack_30;
      if ((_cfg_38.uStack_30 != 0) && (iVar2 == -0x1c)) {
        iVar2 = 0;
      }
    }
    else {
      _cfg_38.uStack_34 = _cfg_38.piStack_38[8];
      _cfg_8c.uStack_8c = 0;
      _cfg_8c.uStack_88 = 0;
      _cfg_38.uStack_2c = _cfg_38.uStack_34;
      if (((uStack_40 < uVar8) || (uStack_44 != 0)) || ((uVar3 == 1 && (uStack_40 != uStack_3c)))) {
        if ((((_cfg_38.piStack_38[2] == 0) && (uStack_40 != uStack_3c)) &&
            (iVar2 = try_primary_then_fallback_loader(pvVar7), iVar2 != 0)) ||
           (((uStack_44 == 0 && (uStack_40 != 0)) &&
            (iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvVar7,_cfg_38.uStack_34,1,&_cfg_38.uStack_34), iVar2 != 0))))
        goto LAB_10542112;
        if (uVar8 < uStack_50) {
          uStack_94 = uVar8 - uStack_44;
        }
        iVar2 = (*(code *)0x105429e0/*ROM*/)(pvVar7,_cfg_38.uStack_34,&pvStack_98,&_cfg_38.uStack_20);
        if (iVar2 < 0) {
          if (iVar2 != -5) {
            uStack_94 = in_stack_00000014 - _cfg_38.uStack_20;
            goto LAB_10542112;
          }
          iVar2 = lens_fw_get_block_ptr(pvVar7,_cfg_38.uStack_34,&_cfg_38.iStack_1c);
          if (iVar2 != 0) {
            iVar2 = -0x389;
            uStack_94 = in_stack_00000014;
            goto LAB_10542112;
          }
          memcpy_bytes((void *)(_cfg_38.iStack_1c + 8 + uStack_44),pvStack_98,uStack_94);
          iVar2 = transmit_data_block_with_retry(pvVar7,_cfg_38.iStack_1c + 8,_cfg_38.uStack_34,(int *)&_cfg_38.uStack_18);
          clear_lens_update_entry(pvVar7,_cfg_38.uStack_34);
          if (iVar2 != 0) {
            uStack_94 = in_stack_00000014;
            goto LAB_10542112;
          }
          _cfg_38.uStack_20 = uStack_94;
          _cfg_38.uStack_34 = _cfg_38.uStack_18;
          if (uStack_40 < uVar8) {
            _cfg_38.piStack_38[5] = _cfg_38.uStack_18;
          }
          else {
            if (uStack_44 != 0) {
              uVar4 = unsigned_divide(uStack_40 - 1,uVar8);
              iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvVar7,_cfg_38.piStack_38[5],uVar4 - 1,&_cfg_38.uStack_2c);
              if (iVar2 != 0) {
                uStack_94 = in_stack_00000014;
                goto LAB_10542112;
              }
            }
            iVar2 = dispatch_lens_update_step((int)pvVar7,_cfg_38.uStack_2c,_cfg_38.uStack_18);
            if (iVar2 != 0) {
              uStack_94 = in_stack_00000014;
              goto LAB_10542112;
            }
          }
          if (_cfg_38.piStack_38[6] == _cfg_38.uStack_34) {
            _cfg_38.piStack_38[6] = _cfg_38.uStack_18;
          }
        }
        uStack_94 = in_stack_00000014 - _cfg_38.uStack_20;
        pvStack_98 = (void *)((int)pvStack_98 + _cfg_38.uStack_20);
        uVar3 = uVar3 - 1;
        uStack_90 = 0;
        if (uVar3 != 0) {
          _cfg_38.uStack_2c = _cfg_38.uStack_34;
        }
        _cfg_8c.uStack_8c = _cfg_38.uStack_34;
        _cfg_8c.uStack_88 = _cfg_38.uStack_20;
      }
      if ((uVar3 != 0) && (iVar2 = (*(code *)0x1053db52/*ROM*/)(pvVar7,&_cfg_38.uStack_14), iVar2 == 0)) {
        if (_cfg_38.uStack_14 == 0) {
          iVar2 = -0x1c;
        }
        else {
          if ((_cfg_38.uStack_14 < uVar3) && (uVar3 = _cfg_38.uStack_14, _cfg_38.uStack_14 * uVar8 < uStack_94)) {
            iStack_48 = uStack_94 - _cfg_38.uStack_14 * uVar8;
            uStack_94 = uStack_94 - iStack_48;
          }
          if (uStack_3c < uStack_40 + _cfg_8c.uStack_88 + uStack_94) {
            *piVar9 = (int)&_cfg_38.uStack_30;
            piVar9[1] = 0;
            iVar2 = send_data_chunk_with_retry(pvVar7,uVar3,(int *)&pvStack_98,(int *)&_cfg_8c.uStack_8c,(int *)*piVar9,
                                 *(byte *)((int)piVar9 + 7));
            if (iVar2 < 0) {
              if (_cfg_38.uStack_30 != 0) {
                dispatch_lens_fw_update_step_1053d138(pvVar7,_cfg_38.uStack_30,*(uint32_t *)((int)pvVar7 + 0x54),0);
              }
              _cfg_8c.uStack_8c = _cfg_38.uStack_2c;
            }
            else {
              uStack_94 = uStack_94 - _cfg_8c.uStack_88;
              iVar2 = dispatch_lens_fw_update_step_1053d138(pvVar7,_cfg_38.uStack_2c,*(uint32_t *)((int)pvVar7 + 0x54),_cfg_38.uStack_30);
            }
          }
          else {
            iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvVar7,_cfg_38.uStack_2c,1,&_cfg_38.uStack_34);
            uVar4 = _cfg_38.uStack_2c;
            uVar8 = _cfg_38.uStack_34;
            if (iVar2 == 0) {
              if (uVar3 == 1) {
                iVar2 = (*(code *)0x105429e0/*ROM*/)(pvVar7,_cfg_38.uStack_34,&pvStack_98,&_cfg_8c.uStack_88);
                if ((iVar2 < 0) && (iVar2 == -5)) {
                  iVar2 = lens_fw_get_block_ptr(pvVar7,_cfg_38.uStack_34,&_cfg_38.iStack_10);
                  if (iVar2 != 0) {
                    iVar2 = -0x389;
                    goto LAB_10542112;
                  }
                  memcpy_bytes((void *)(_cfg_38.iStack_10 + 8),pvStack_98,uStack_94);
                  iVar2 = transmit_data_block_with_retry(pvVar7,_cfg_38.iStack_10 + 8,_cfg_38.uStack_34,(int *)&_cfg_38.uStack_c);
                  clear_lens_update_entry(pvVar7,_cfg_38.uStack_34);
                  if ((iVar2 != 0) ||
                     (iVar2 = dispatch_lens_update_step((int)pvVar7,_cfg_38.uStack_2c,_cfg_38.uStack_c), iVar2 != 0))
                  goto LAB_10542112;
                  if (_cfg_38.piStack_38[6] == _cfg_38.uStack_34) {
                    _cfg_38.piStack_38[6] = _cfg_38.uStack_c;
                  }
                  _cfg_38.uStack_34 = _cfg_38.uStack_c;
                  _cfg_8c.uStack_88 = uStack_94;
                }
                _cfg_8c.uStack_8c = _cfg_38.uStack_34;
              }
              else {
                *piVar9 = (int)&pvStack_98;
                piVar9[1] = (int)&_cfg_8c.uStack_8c;
                piVar9[2] = (int)&_cfg_38.uStack_30;
                iVar2 = transfer_data_blocks_with_retry(pvVar7,uVar3,uVar4,uVar8,(int *)*piVar9,(int *)piVar9[1],
                                     (int *)piVar9[2]);
              }
              if (iVar2 != 0) {
                _cfg_8c.uStack_8c = _cfg_38.uStack_2c;
                _cfg_8c.uStack_88 = 0;
              }
              uStack_94 = uStack_94 - _cfg_8c.uStack_88;
            }
          }
        }
      }
    }
  }
LAB_10542112:
  iVar1 = (in_stack_00000014 - uStack_94) - iStack_48;
  *in_stack_00000018 = iVar1;
  if (iVar1 != 0) {
    _cfg_38.piStack_38[2] = 0;
    _cfg_38.piStack_38[7] = _cfg_38.piStack_38[7] + *in_stack_00000018;
    _cfg_38.piStack_38[8] = _cfg_8c.uStack_8c;
    uStack_54 = _cfg_38.piStack_38[7];
    if (uStack_3c < uStack_54) {
      _cfg_38.piStack_38[4] = uStack_54;
      _cfg_38.piStack_38[6] = _cfg_8c.uStack_8c;
    }
    call_single_helper_1047f97e((uint32_t)(&_cfg_8c.iStack_84));
    *(ushort *)((int)_cfg_38.piStack_38 + 0xe) =
         (ushort)(_cfg_8c.iStack_84 / 2) | (ushort)(_cfg_8c.iStack_80 << 5) | (ushort)(_cfg_8c.iStack_7c << 0xb);
    *(ushort *)(_cfg_38.piStack_38 + 3) = (_cfg_8c.sStack_72 + 1) * 0x20 | _cfg_8c.uStack_76 | (_cfg_8c.sStack_6e + -0x50) * 0x200;
  }
  return iVar2;
}
