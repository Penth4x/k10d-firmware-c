/* @k10d validate_update_parameter_block @ 0x10537d08
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a parameter block and populates a configuration structure with derived size
 *   and offset fields.
 * summary:
 *   Calls write_buffer_via_virtual_method to extract fields into a local buffer, then
 *   checks for a 'U' magic signature and version constraints. It performs arithmetic on
 *   extracted parameters using unsigned_divide for alignment or size calculations,
 *   populating the structure at param_1 with validated values. Returns 0 on success or
 *   negative error codes (e.g., -0x38e) if validation fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10537f50) overlaps instruction at (ram,0x10537f4e)
    */

int validate_update_parameter_block(uint8_t *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  uint8_t auStack_22c [11];
  uint8_t local_221;
  uint8_t uStack_220;
  byte bStack_21f;
  uint8_t local_21e;
  uint8_t uStack_21d;
  byte bStack_21c;
  uint8_t local_21b;
  uint8_t uStack_21a;
  uint8_t local_219;
  uint8_t uStack_218;
  byte bStack_217;
  uint8_t local_216;
  uint8_t uStack_215;
  uint8_t local_20c;
  uint8_t uStack_20b;
  uint8_t uStack_20a;
  uint8_t uStack_209;
  uint8_t local_208;
  uint8_t uStack_207;
  uint8_t uStack_206;
  uint8_t uStack_205;
  byte bStack_204;
  uint8_t uStack_202;
  uint8_t uStack_201;
  uint8_t uStack_200;
  uint8_t uStack_1ff;
  uint8_t uStack_1fe;
  uint8_t uStack_1fd;
  uint8_t uStack_1fc;
  uint8_t uStack_1fb;
  char cStack_2e;
  char cStack_2d;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  
  iVar2 = write_buffer_via_virtual_method(param_1,0,1,auStack_22c,&iStack_1c);
  if (iVar2 == 0) {
    if ((cStack_2e == 'U') && (cStack_2d == -0x56)) {
      if ((bStack_217 == 0xf0) || (0xf7 < bStack_217)) {
        *(uint *)(param_1 + 0xc) = (uint)CONCAT11(uStack_220,local_221);
        if (CONCAT11(uStack_220,local_221) == 0x200) {
          uVar3 = (uint)bStack_21f;
          *(uint *)(param_1 + 0x14) = uVar3;
          if (((uVar3 == 0) || (0x80 < uVar3)) || (uVar3 = log2_of_power_of_two(uVar3), (int)uVar3 < 0)) {
            iVar2 = -0x38e;
          }
          else {
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x14);
            *(uint *)(param_1 + 0x18) =
                 (uint)(*(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x14)) >> 5;
            *(uint *)(param_1 + 0x30) = (uint)CONCAT11(uStack_21d,local_21e);
            if (CONCAT11(uStack_21d,local_21e) == 0) {
              iVar2 = -0x38e;
            }
            else {
              *(uint *)(param_1 + 0x24) = (uint)bStack_21c;
              if (bStack_21c == 0) {
                iVar2 = -0x38e;
              }
              else {
                *(uint *)(param_1 + 0x1c) = (uint)CONCAT11(uStack_21a,local_21b);
                uStack_20 = unsigned_divide(((uint)CONCAT11(uStack_21a,local_21b) * 0x20 +
                                         *(uint *)(param_1 + 0xc)) - 1,*(uint *)(param_1 + 0xc));
                *(uint *)(param_1 + 0x20) = (uint)CONCAT11(uStack_218,local_219);
                if ((CONCAT11(uStack_218,local_219) == 0) &&
                   (iVar2 = CONCAT13(uStack_209,CONCAT12(uStack_20a,CONCAT11(uStack_20b,local_20c)))
                   , *(int *)(param_1 + 0x20) = iVar2, iVar2 == 0)) {
                  iVar2 = -0x38e;
                }
                else {
                  uVar3 = (uint)CONCAT11(uStack_215,local_216);
                  if (uVar3 == 0) {
                    iVar2 = CONCAT13(uStack_205,CONCAT12(uStack_206,CONCAT11(uStack_207,local_208)))
                    ;
                    *(int *)(param_1 + 0x3c) = iVar2;
                    if (iVar2 == 0) {
                      return -0x38e;
                    }
                  }
                  else {
                    *(uint *)(param_1 + 0x3c) = uVar3;
                  }
                  uVar5 = *(uint *)(param_1 + 0x20);
                  uStack_24 = *(int *)(param_1 + 0x30) +
                              *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x24) + uStack_20;
                  if (uStack_24 < uVar5) {
                    uVar4 = unsigned_divide(uVar5 - uStack_24,*(uint *)(param_1 + 0x14));
                    if (uVar4 < 0xfff5) {
                      if (uVar3 == 0) {
                        return -0x38e;
                      }
                      if (uVar4 < 0xff5) {
                        if (0x40000 < uVar5) {
                          return -0x38e;
                        }
                        *(uint32_t *)(param_1 + 0x44) = 1;
                        *(uint32_t *)(param_1 + 0x48) = 1;
                        uVar3 = unsigned_divide(*(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0xc) * 2,
                                             3);
                        *(uint *)(param_1 + 0x4c) = uVar3;
                        *(uint32_t *)(param_1 + 0x50) = 0xff7;
                        *(uint32_t *)(param_1 + 0x54) = 0xfff;
                        uVar3 = unsigned_divide((((uVar4 + 2) * 3 >> 1) + *(uint *)(param_1 + 0xc)) - 1
                                             ,*(uint *)(param_1 + 0xc));
                      }
                      else {
                        if (0x400000 < uVar5) {
                          return -0x38e;
                        }
                        if (uVar5 < 0x10000) {
                          uVar1 = 4;
                        }
                        else {
                          uVar1 = 6;
                        }
                        *(uint32_t *)(param_1 + 0x44) = uVar1;
                        *(uint32_t *)(param_1 + 0x48) = 2;
                        *(uint *)(param_1 + 0x4c) =
                             (uint)(*(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0xc)) >> 1;
                        *(uint32_t *)(param_1 + 0x50) = 0xfff7;
                        *(uint32_t *)(param_1 + 0x54) = 0xffff;
                        uVar3 = unsigned_divide(((uVar4 + 2) * 2 + *(uint *)(param_1 + 0xc)) - 1,
                                             *(uint *)(param_1 + 0xc));
                      }
                      *(uint32_t *)(param_1 + 0x28) = 0;
                      *(int *)(param_1 + 0x34) =
                           *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x24) +
                           *(int *)(param_1 + 0x30);
                      *(uint32_t *)(param_1 + 0x40) = 0;
                      *(uint32_t *)(param_1 + 0x2c) = 0;
                    }
                    else {
                      if (uVar3 != 0) {
                        return -0x38e;
                      }
                      *(uint32_t *)(param_1 + 0x44) = 0xb;
                      *(uint32_t *)(param_1 + 0x48) = 4;
                      *(uint *)(param_1 + 0x4c) =
                           (uint)(*(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0xc)) >> 2;
                      *(uint32_t *)(param_1 + 0x50) = 0xffffff7;
                      *(uint32_t *)(param_1 + 0x54) = 0xfffffff;
                      uVar3 = unsigned_divide(((uVar4 + 2) * 4 + *(uint *)(param_1 + 0xc)) - 1,
                                           *(uint *)(param_1 + 0xc));
                      uVar5 = CONCAT13(uStack_1fd,
                                       CONCAT12(uStack_1fe,CONCAT11(uStack_1ff,uStack_200)));
                      *(uint *)(param_1 + 0x28) = uVar5;
                      if ((uVar5 < 2) || (*(uint *)(param_1 + 0x4c) < uVar5)) {
                        return -0x38e;
                      }
                      *(uint32_t *)(param_1 + 0x34) = 0;
                      if ((bStack_204 & 0x8f) != 0) {
                        return -0x321;
                      }
                      *(uint *)(param_1 + 0x40) = (uint)CONCAT11(uStack_201,uStack_202);
                      *(uint *)(param_1 + 0x2c) = (uint)CONCAT11(uStack_1fb,uStack_1fc);
                      if (CONCAT11(uStack_1fb,uStack_1fc) == 0) {
                        return -0x38e;
                      }
                    }
                    if (*(uint *)(param_1 + 0x1c) == 0) {
                      if ((*(int *)(param_1 + 0x48) == 1) || (*(int *)(param_1 + 0x48) == 2)) {
                        return -0x38e;
                      }
                    }
                    else {
                      if (*(int *)(param_1 + 0x48) == 4) {
                        return -0x38e;
                      }
                      if ((*(uint *)(param_1 + 0x1c) & 0xf) != 0) {
                        *param_1 = 0x11;
                      }
                    }
                    *(uint *)(param_1 + 0x38) = uStack_24;
                    if (uVar4 + 2 < *(uint *)(param_1 + 0x4c)) {
                      *(uint *)(param_1 + 0x4c) = uVar4 + 2;
                    }
                    if (*(uint *)(param_1 + 0x3c) != uVar3) {
                      *param_1 = 0x11;
                    }
                    iVar2 = 0;
                  }
                  else {
                    iVar2 = -0x38e;
                  }
                }
              }
            }
          }
        }
        else {
          iVar2 = -0x38e;
        }
      }
      else {
        iVar2 = -0x38e;
      }
    }
    else {
      iVar2 = -0x38e;
    }
  }
  return iVar2;
}
