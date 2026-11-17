/* @k10d process_32_byte_record_stream_10539f74 @ 0x10539f74
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over a stream of 32-byte records, dispatching each by its first byte and flags
 *   to skip, copy, or process the payload.
 * summary:
 *   The function loops over a buffer of 0x20-byte records (pbStack_14 += 0x20). It inspects
 *   the first byte of each record: 0xe5 is a marker that advances the index, 0x00 triggers
 *   a completion/return path, and other values are processed based on flags in byte 0xb
 *   (bit 0xf and bit 8). For non-trivial records it calls validate_block_sequence to
 *   determine a length, then either match_lens_fw_info_fields or swap_lens_info_fields to
 *   handle the data, updating counters in in_stack_00000018. It returns -0x11 after
 *   processing a batch, 0 on success, or various negative error codes on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053a096) overlaps instruction at (ram,0x1053a094)
    */

int process_32_byte_record_stream_10539f74(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  void *in_stack_00000010;
  uint in_stack_00000014;
  uint *in_stack_00000018;
  uint8_t auStack_2dc [8];
  byte abStack_2d4 [672];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  byte *pbStack_14;
  uint uStack_10;
  uint uStack_c;
  
  piVar6 = (int *)auStack_2dc;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uVar3 = 1;
  if (in_stack_00000014 != *(uint *)((int)in_stack_00000010 + 0x28)) {
    uVar3 = 3;
  }
  uStack_10 = in_stack_00000014;
  uVar4 = uVar3;
  do {
    uVar1 = uStack_10;
    if (in_stack_00000014 == 0) {
      if ((*(uint *)((int)in_stack_00000010 + 0x48) & 3) == 0) {
        return -999;
      }
      pbStack_14 = abStack_2d4;
      iStack_1c = validate_and_dispatch_lens_write(in_stack_00000010,uVar4,&pbStack_14,&uStack_18);
      uVar1 = compute_modulo_10544c28(uVar4 - 1,uStack_18);
    }
    else {
      *piVar6 = (int)&uStack_18;
      piVar6[1] = (int)&uStack_10;
      iStack_1c = write_block_with_offset_check(in_stack_00000010,uVar1,uVar3,(int *)&pbStack_14,
                               (uint32_t *)*piVar6,(uint *)piVar6[1]);
      for (; uStack_18 < uVar3; uVar3 = uVar3 - uStack_18) {
      }
      uVar1 = uVar3 - 1;
    }
    if (iStack_1c != 0) {
      if (iStack_1c != -2) {
        return iStack_1c;
      }
code_r0x1053a2ae:
      if (uStack_28 == 0) {
        if (uStack_20 == 0) {
          uStack_20 = uVar4;
        }
        if ((in_stack_00000014 == 0) &&
           (uStack_24 + ((*(int *)((int)in_stack_00000010 + 0x1c) + 1) - uVar4) <
            in_stack_00000018[2])) {
          return -0x32a;
        }
        uStack_28 = uStack_20;
        if (0x10001 < in_stack_00000018[2] + uStack_20) {
          return -0x1c;
        }
      }
      *in_stack_00000018 = in_stack_00000014;
      in_stack_00000018[1] = uStack_28;
      return 0;
    }
    if (0x10000 < uVar4) {
      return -0x38f;
    }
    pbStack_14 = pbStack_14 + uVar1 * 0x20;
    uVar1 = uStack_18 - uVar1;
LAB_1053a07c:
    do {
      if (*pbStack_14 != 0xe5) {
        if (*pbStack_14 == 0) goto code_r0x1053a2ae;
        if (((uStack_28 == 0) && (uStack_20 != 0)) && (in_stack_00000018[2] <= uStack_24)) {
          uStack_28 = uStack_20;
        }
        uStack_20 = 0;
        uStack_24 = 0;
        if (pbStack_14[0xb] == 0xf) {
          if ((*pbStack_14 & 0x40) == 0) {
            uVar4 = uVar4 + 1;
            if (uVar1 < 2) {
              uVar3 = uVar3 + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
            pbStack_14 = pbStack_14 + 0x20;
            goto LAB_1053a07c;
          }
          uVar5 = (*pbStack_14 & 0xffffffbf) + 1;
          if (0x15 < uVar5) {
            uVar4 = uVar4 + 1;
            if (uVar1 < 2) {
              uVar3 = uVar3 + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
            pbStack_14 = pbStack_14 + 0x20;
            goto LAB_1053a07c;
          }
          if (uVar1 < uVar5) {
            uStack_34 = uStack_10;
            uStack_30 = uVar3;
            uStack_2c = uVar5;
            iStack_1c = dispatch_param2_command((int)in_stack_00000010,(int *)&uStack_34,abStack_2d4);
            if (iStack_1c != 0) {
              return iStack_1c;
            }
            iVar2 = validate_block_sequence(abStack_2d4,uVar5,&uStack_c);
            if (iVar2 != 0) {
              uVar4 = uVar4 + uStack_c;
              uVar3 = uVar3 + uStack_c;
              break;
            }
            iVar2 = match_lens_fw_info_fields(in_stack_00000018,abStack_2d4,uVar5);
            if (iVar2 == -1) {
              uVar4 = uVar4 + uVar5;
              uVar3 = uVar3 + uVar5;
              break;
            }
            swap_lens_info_fields(abStack_2d4,uVar5,in_stack_00000018);
          }
          else {
            iStack_1c = validate_block_sequence(pbStack_14,uVar5,&uStack_c);
            if (iStack_1c != 0) {
              uVar4 = uVar4 + uStack_c;
              uVar3 = uVar3 + uStack_c;
              if (uVar1 <= uStack_c) break;
              uVar1 = uVar1 - uStack_c;
              pbStack_14 = pbStack_14 + uStack_c * 0x20;
              goto LAB_1053a07c;
            }
            iVar2 = match_lens_fw_info_fields(in_stack_00000018,pbStack_14,uVar5);
            if (iVar2 == -1) {
              uVar4 = uVar4 + uVar5;
              uVar3 = uVar3 + uVar5;
              if (uVar1 <= uVar5) break;
              uVar1 = uVar1 - uVar5;
              pbStack_14 = pbStack_14 + uVar5 * 0x20;
              goto LAB_1053a07c;
            }
            swap_lens_info_fields(pbStack_14,uVar5,in_stack_00000018);
          }
        }
        else {
          if ((pbStack_14[0xb] & 8) != 0) {
            uVar4 = uVar4 + 1;
            if (uVar1 < 2) {
              uVar3 = uVar3 + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
            pbStack_14 = pbStack_14 + 0x20;
            goto LAB_1053a07c;
          }
          uVar5 = 1;
          iVar2 = match_lens_fw_info_fields(in_stack_00000018,pbStack_14,1);
          if (iVar2 == -1) {
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + 1;
            if (uVar1 < 2) break;
            uVar1 = uVar1 - 1;
            pbStack_14 = pbStack_14 + 0x20;
            goto LAB_1053a07c;
          }
          swap_lens_info_fields(pbStack_14,1,in_stack_00000018);
        }
        *in_stack_00000018 = in_stack_00000014;
        in_stack_00000018[1] = uVar4;
        in_stack_00000018[2] = uVar5;
        return -0x11;
      }
      if (uStack_20 == 0) {
        uStack_20 = uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
      uStack_24 = uStack_24 + 1;
      uVar1 = uVar1 - 1;
      pbStack_14 = pbStack_14 + 0x20;
    } while (uVar1 != 0);
  } while( true );
}
