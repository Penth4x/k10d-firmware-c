/* @k10d write_data_blocks_to_device @ 0x10540342
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes data to a device in chunks, calculating offsets and updating progress counters
 *   in an output structure.
 * summary:
 *   The function validates input parameters and retrieves a device state pointer via a
 *   helper at 0x10538c70. It iterates through data blocks, calculating offsets using
 *   helpers at 0x10544c28 and 0x10544b44, and writes data using
 *   dispatch_lens_fw_update_step_1053d2bc and dispatch_lens_fw_update. It updates progress
 *   counters in the output structure and handles errors by returning negative codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x1054042a) */

int write_data_blocks_to_device(uint32_t param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int in_stack_00000010;
  uint in_stack_00000014;
  int *in_stack_00000018;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint32_t uStack_20;
  uint uStack_1c;
  uint *puStack_18;
  uint32_t uStack_14;
  int iStack_10;
  int *piStack_c;
  
  if ((in_stack_00000010 == 0) || (in_stack_00000018 == (int *)0x0)) {
    iVar1 = -0x16;
  }
  else {
    *in_stack_00000018 = 0;
    iVar1 = (*(code *)0x10538c70/*ROM*/)(param_1,&piStack_c);
    if (iVar1 == 0) {
      if (*(int *)(*piStack_c + 8) == 2) {
        if ((*(ushort *)((int)piStack_c + 6) & 1) == 0) {
          if (((uint)piStack_c[7] < (uint)piStack_c[4]) && (piStack_c[5] != 0)) {
            if (in_stack_00000014 == 0) {
              iVar1 = 0;
            }
            else if (piStack_c[8] == 0) {
              iVar1 = -999;
            }
            else {
              iStack_10 = *(int *)(*piStack_c + 0xc);
              if (*(short *)(*(int *)(iStack_10 + 100) + 0xe) == 0) {
                iVar1 = 0;
                iStack_44 = in_stack_00000010;
                iStack_28 = 0;
                if (piStack_c[7] == 0) {
                  uStack_38 = piStack_c[5];
                  uStack_3c = 0;
                }
                else {
                  uStack_3c = compute_modulo_10544c28(piStack_c[7],*(uint *)(iStack_10 + 0x10));
                  if (uStack_3c == 0) {
                    iVar1 = dispatch_lens_fw_update_step_1053d2bc(iStack_10,piStack_c[8],1,&uStack_38);
                    if (iVar1 != 0) {
LAB_10540650:
                      *in_stack_00000018 = iStack_44 - in_stack_00000010;
                      if (iStack_44 - in_stack_00000010 == 0) {
                        return iVar1;
                      }
                      piStack_c[8] = iStack_2c;
                      piStack_c[7] = piStack_c[7] + *in_stack_00000018;
                      return iVar1;
                    }
                  }
                  else {
                    uStack_38 = piStack_c[8];
                  }
                }
                iVar4 = iStack_10;
                if ((uint)(piStack_c[4] - piStack_c[7]) < in_stack_00000014) {
                  in_stack_00000014 = piStack_c[4] - piStack_c[7];
                }
                uStack_34 = 0;
                uStack_30 = 0;
                uStack_40 = in_stack_00000014;
                uVar2 = unsigned_divide(uStack_3c + in_stack_00000014,*(uint *)(iStack_10 + 0x10));
                uVar3 = compute_modulo_10544c28(uStack_3c + uStack_40,*(uint *)(iVar4 + 0x10));
                if (uVar3 != 0) {
                  uVar2 = uVar2 + 1;
                }
                if (piStack_c[0xb] != 0) {
                  iVar4 = piStack_c[0xb];
                  uStack_14 = 0;
                  iVar5 = 0;
                  uStack_20 = 1;
                  iStack_24 = 8;
                  do {
                    if ((*(uint *)(iVar5 + iVar4) <= uStack_38) &&
                       (uStack_38 < (uint)(*(int *)(iVar4 + iVar5 + 4) + *(int *)(iVar5 + iVar4))))
                    {
                      uStack_34 = *(int *)(iVar4 + iVar5 + 4) -
                                  (uStack_38 - *(int *)(iVar5 + iVar4));
                      if (uVar2 < uStack_34) {
                        uStack_34 = uVar2;
                      }
                      iVar1 = (*(code *)0x105431d4/*ROM*/)(iStack_10,&uStack_38,&iStack_44,&iStack_2c);
                      uStack_3c = 0;
                      iStack_44 = iStack_44 + iStack_28;
                      uStack_40 = uStack_40 - iStack_28;
                      uVar2 = uVar2 - uStack_34;
                      if (iVar1 < 0) goto LAB_10540650;
                      if (uStack_40 == 0) break;
                      if (iStack_24 == 0x40) {
                        uStack_38 = piStack_c[0xc];
                        uStack_34 = 0;
                        uStack_30 = 0;
                        break;
                      }
                      if (*(int *)(iStack_24 + iVar4) == 0) {
                        iVar1 = -0x390;
                        goto LAB_10540650;
                      }
                      uStack_38 = *(uint *)(iStack_24 + iVar4);
                    }
                    iStack_24 = iStack_24 + 8;
                    iVar5 = iVar5 + 8;
                  } while (iStack_24 < 0x48);
                }
                do {
                  if (uStack_40 == 0) goto LAB_10540650;
                  uStack_1c = uStack_38;
                  if ((uStack_38 < 2) || (*(uint *)(iStack_10 + 0x4c) < uStack_38)) {
                    iVar1 = -0x390;
                    goto LAB_10540650;
                  }
                  iVar1 = dispatch_lens_fw_update(iStack_10,uVar2,&uStack_38);
                  if (iVar1 < 0) goto LAB_10540650;
                  if (uVar2 < uStack_34) {
                    uStack_34 = uVar2;
                  }
                  puStack_18 = &uStack_38;
                  iVar1 = (*(code *)0x105431d4/*ROM*/)(iStack_10,&uStack_38,&iStack_44,&iStack_2c);
                  uStack_3c = 0;
                  iStack_44 = iStack_44 + iStack_28;
                  uStack_40 = uStack_40 - iStack_28;
                  uVar2 = uVar2 - uStack_34;
                  if (iVar1 < 0) goto LAB_10540650;
                  uStack_38 = uStack_30;
                } while( true );
              }
              iVar1 = -6;
            }
          }
          else {
            iVar1 = -0x1f5;
          }
        }
        else {
          iVar1 = -0x1ff;
        }
      }
      else {
        iVar1 = -9;
      }
    }
  }
  return iVar1;
}
