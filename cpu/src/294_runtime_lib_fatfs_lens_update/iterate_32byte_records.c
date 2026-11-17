/* @k10d iterate_32byte_records @ 0x10539a66
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Walks a buffer of 32-byte records, validating header bytes and dispatching each record
 *   to a helper.
 * summary:
 *   The function loops over a stream of 0x20-byte records pointed to by param_2. It checks
 *   the first byte for 0xe5 (skipping it) or 0x00 (returning an error), and inspects byte
 *   offset 0xb to determine the record type. Based on the type, it either increments
 *   counters, calls validate_block_sequence to process the record, or invokes a function at
 *   0x1053ab02 to transmit the record data. The function updates the offset and count
 *   fields in param_2 as it progresses through the buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10539b9e) overlaps instruction at (ram,0x10539b9c)
    */

int iterate_32byte_records(uint32_t param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  int *piVar4;
  void *in_stack_00000010;
  uint32_t in_stack_00000014;
  uint8_t auStack_2c8 [8];
  byte abStack_2c0 [672];
  int iStack_20;
  uint32_t uStack_1c;
  uint uStack_18;
  uint uStack_14;
  byte *pbStack_10;
  uint uStack_c;
  
  piVar4 = (int *)auStack_2c8;
  do {
    if (*(int *)(param_2 + 0x14) == 0) {
      if ((*(uint *)((int)in_stack_00000010 + 0x48) & 3) == 0) {
        return -999;
      }
      pbStack_10 = abStack_2c0;
      iVar2 = validate_and_dispatch_lens_write(in_stack_00000010,*(uint32_t *)(param_2 + 0x1c),&pbStack_10,&uStack_14)
      ;
      uVar1 = compute_modulo_10544c28(*(int *)(param_2 + 0x1c) - 1,uStack_14);
    }
    else {
      uVar1 = *(uint *)(param_2 + 0x20);
      iVar2 = *(int *)(param_2 + 0x24);
      *piVar4 = (int)&uStack_14;
      piVar4[1] = param_2 + 0x20;
      iVar2 = write_block_with_offset_check(in_stack_00000010,uVar1,iVar2,(int *)&pbStack_10,(uint32_t *)*piVar4,
                           (uint *)piVar4[1]);
      while (uStack_14 < *(uint *)(param_2 + 0x24)) {
        *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) - uStack_14;
      }
      uVar1 = *(int *)(param_2 + 0x24) - 1;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (0x10000 < *(uint *)(param_2 + 0x1c)) {
      return -0x38f;
    }
    pbStack_10 = pbStack_10 + uVar1 * 0x20;
    uVar1 = uStack_14 - uVar1;
LAB_10539b4a:
    do {
      if (*pbStack_10 != 0xe5) {
        if (*pbStack_10 == 0) {
          return -2;
        }
        if (pbStack_10[0xb] == 0xf) {
          if ((*pbStack_10 & 0x40) == 0) {
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            iVar2 = *(int *)(param_2 + 0x24) + 1;
            if (uVar1 < 2) {
              *(int *)(param_2 + 0x24) = iVar2;
              break;
            }
            *(int *)(param_2 + 0x24) = iVar2;
            uVar1 = uVar1 - 1;
            pbStack_10 = pbStack_10 + 0x20;
            goto LAB_10539b4a;
          }
          uVar3 = (*pbStack_10 & 0xffffffbf) + 1;
          if (0x15 < uVar3) {
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            iVar2 = *(int *)(param_2 + 0x24) + 1;
            if (uVar1 < 2) {
              *(int *)(param_2 + 0x24) = iVar2;
              break;
            }
            *(int *)(param_2 + 0x24) = iVar2;
            uVar1 = uVar1 - 1;
            pbStack_10 = pbStack_10 + 0x20;
            goto LAB_10539b4a;
          }
          if (uVar1 < uVar3) {
            iStack_20 = *(int *)(param_2 + 0x20);
            uStack_1c = *(uint32_t *)(param_2 + 0x24);
            uStack_18 = uVar3;
            iVar2 = dispatch_param2_command((int)in_stack_00000010,&iStack_20,abStack_2c0);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = validate_block_sequence(abStack_2c0,uVar3,&uStack_c);
            if (iVar2 != 0) {
              *(uint *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + uStack_c;
              *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + uStack_c;
              break;
            }
            (*(code *)0x1053ab02/*ROM*/)(abStack_2c0,uVar3,in_stack_00000014);
          }
          else {
            iVar2 = validate_block_sequence(pbStack_10,uVar3,&uStack_c);
            if (iVar2 != 0) {
              *(uint *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + uStack_c;
              *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + uStack_c;
              if (uVar1 <= uStack_c) break;
              uVar1 = uVar1 - uStack_c;
              pbStack_10 = pbStack_10 + uStack_c * 0x20;
              goto LAB_10539b4a;
            }
            (*(code *)0x1053ab02/*ROM*/)(pbStack_10,uVar3,in_stack_00000014);
          }
          *(uint *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + uVar3;
          *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + uVar3;
        }
        else {
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
          if ((pbStack_10[0xb] & 8) != 0) {
            if (uVar1 < 2) break;
            uVar1 = uVar1 - 1;
            pbStack_10 = pbStack_10 + 0x20;
            goto LAB_10539b4a;
          }
          (*(code *)0x1053ab02/*ROM*/)(pbStack_10,1,in_stack_00000014);
        }
        return 0;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
      uVar1 = uVar1 - 1;
      pbStack_10 = pbStack_10 + 0x20;
    } while (uVar1 != 0);
  } while( true );
}
