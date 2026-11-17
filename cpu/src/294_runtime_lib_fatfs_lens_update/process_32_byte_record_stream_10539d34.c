/* @k10d process_32_byte_record_stream_10539d34 @ 0x10539d34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates through a stream of 32-byte records, validating headers and dispatching
 *   payloads based on flag bits.
 * summary:
 *   The function processes an array of 0x20-byte records obtained from
 *   validate_and_dispatch_lens_write or write_block_with_offset_check. It skips records
 *   with header 0xe5, errors on 0x00, and processes others based on flags at offset 0xb and
 *   bit 6 of the header. It calls validate_block_sequence to determine payload lengths and
 *   memcpy_bytes to transmit data blocks. The specific protocol semantics (e.g., lens
 *   firmware) are not verifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10539e74) overlaps instruction at (ram,0x10539e72)
    */

int process_32_byte_record_stream_10539d34(void *param_1,int param_2,uint param_3,int *param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_23c [8];
  byte abStack_234 [512];
  int iStack_34;
  uint uStack_30;
  byte *pbStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  piVar5 = (int *)auStack_23c;
  uStack_28 = param_2;
  uVar4 = param_3;
  do {
    uVar2 = uStack_28;
    if (param_2 == 0) {
      if ((*(uint *)((int)param_1 + 0x48) & 3) == 0) {
        return -999;
      }
      pbStack_2c = abStack_234;
      iStack_34 = validate_and_dispatch_lens_write(param_1,uVar4,&pbStack_2c,&uStack_30);
      uVar2 = compute_modulo_10544c28(uVar4 - 1,uStack_30);
    }
    else {
      *piVar5 = (int)&uStack_30;
      piVar5[1] = (int)&uStack_28;
      iStack_34 = write_block_with_offset_check(param_1,uVar2,param_3,(int *)&pbStack_2c,(uint32_t *)*piVar5,
                               (uint *)piVar5[1]);
      for (; uStack_30 < param_3; param_3 = param_3 - uStack_30) {
      }
      uVar2 = param_3 - 1;
    }
    if (iStack_34 != 0) {
      return iStack_34;
    }
    if (0x10000 < uVar4) {
      return -0x38f;
    }
    pbStack_2c = pbStack_2c + uVar2 * 0x20;
    uVar2 = uStack_30 - uVar2;
LAB_10539e00:
    do {
      if (*pbStack_2c != 0xe5) {
        if (*pbStack_2c == 0) {
          return -2;
        }
        *param_4 = param_2;
        param_4[1] = uVar4;
        if (pbStack_2c[0xb] == 0xf) {
          if ((*pbStack_2c & 0x40) == 0) {
            uVar4 = uVar4 + 1;
            param_3 = param_3 + 1;
            if (uVar2 < 2) break;
            uVar2 = uVar2 - 1;
            pbStack_2c = pbStack_2c + 0x20;
            goto LAB_10539e00;
          }
          uVar1 = (*pbStack_2c & 0xffffffbf) + 1;
          param_4[2] = uVar1;
          if (0x15 < uVar1) {
            uVar4 = uVar4 + 1;
            if (uVar2 < 2) {
              param_3 = param_3 + 1;
              break;
            }
            param_3 = param_3 + 1;
            uVar2 = uVar2 - 1;
            pbStack_2c = pbStack_2c + 0x20;
            goto LAB_10539e00;
          }
          if (uVar2 < (uint)param_4[2]) {
            iStack_34 = dispatch_param2_command((int)param_1,param_4,param_5);
            if (iStack_34 != 0) {
              return iStack_34;
            }
            iVar3 = validate_block_sequence(param_5,param_4[2],&uStack_24);
            if (iVar3 != 0) {
              uVar4 = uVar4 + uStack_24;
              param_3 = param_3 + uStack_24;
              break;
            }
          }
          else {
            iStack_34 = validate_block_sequence(pbStack_2c,param_4[2],&uStack_24);
            if (iStack_34 != 0) {
              uVar4 = uVar4 + uStack_24;
              param_3 = param_3 + uStack_24;
              if (uVar2 <= uStack_24) break;
              uVar2 = uVar2 - uStack_24;
              pbStack_2c = pbStack_2c + uStack_24 * 0x20;
              goto LAB_10539e00;
            }
            memcpy_bytes(param_5,pbStack_2c,param_4[2] << 5);
          }
        }
        else {
          if ((pbStack_2c[0xb] & 8) != 0) {
            uVar4 = uVar4 + 1;
            if (uVar2 < 2) {
              param_3 = param_3 + 1;
              break;
            }
            param_3 = param_3 + 1;
            uVar2 = uVar2 - 1;
            pbStack_2c = pbStack_2c + 0x20;
            goto LAB_10539e00;
          }
          param_4[2] = 1;
          memcpy_bytes(param_5,pbStack_2c,param_4[2] << 5);
        }
        return 0;
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 1;
      uVar2 = uVar2 - 1;
      pbStack_2c = pbStack_2c + 0x20;
    } while (uVar2 != 0);
  } while( true );
}
