/* @k10d iterate_0x20_byte_records @ 0x1053a318
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over 0x20-byte records, skipping or processing them based on header byte
 *   flags.
 * summary:
 *   The function loops through a sequence of 0x20-byte records retrieved via
 *   write_block_with_offset_check. It inspects the first byte of each record: 0xe5 is
 *   treated as a skip marker, 0x00 terminates the loop, and other values trigger further
 *   checks on byte 0xb. Depending on flags in byte 0xb (bit 0xf or bit 8), it either skips
 *   the record or calls validate_block_sequence to process the block, potentially invoking
 *   dispatch_param2_command for larger blocks. The specific data type is not determinable
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053a4ac) overlaps instruction at (ram,0x1053a4aa)
    */

int iterate_0x20_byte_records(void *param_1)

{
  struct {
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
  } _cfg_24;
  struct {
    byte * pbStack_14;
    uint uStack_10;
    uint uStack_c;
  } _cfg_14;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint in_stack_00000010;
  uint8_t auStack_2cc [8];
  uint8_t auStack_2c4 [672];
  piVar6 = (int *)auStack_2cc;
  uVar5 = 3;
  _cfg_14.uStack_10 = in_stack_00000010;
  uVar4 = 3;
  do {
    uVar3 = _cfg_14.uStack_10;
    if (in_stack_00000010 == 0) {
      return -999;
    }
    *piVar6 = (int)&_cfg_24.uStack_18;
    piVar6[1] = (int)&_cfg_14.uStack_10;
    iVar1 = write_block_with_offset_check(param_1,uVar3,uVar4,(int *)&_cfg_14.pbStack_14,(uint32_t *)*piVar6,
                         (uint *)piVar6[1]);
    if (iVar1 != 0) {
      if (iVar1 == -2) {
        return 0;
      }
      return iVar1;
    }
    for (; _cfg_24.uStack_18 < uVar4; uVar4 = uVar4 - _cfg_24.uStack_18) {
    }
    if (0x10000 < uVar5) {
      return -0x38f;
    }
    _cfg_14.pbStack_14 = _cfg_14.pbStack_14 + (uVar4 - 1) * 0x20;
    uVar3 = _cfg_24.uStack_18 - (uVar4 - 1);
LAB_1053a3b6:
    do {
      if (*_cfg_14.pbStack_14 != 0xe5) {
        if (*_cfg_14.pbStack_14 == 0) {
          return 0;
        }
        if (_cfg_14.pbStack_14[0xb] == 0xf) {
          if ((*_cfg_14.pbStack_14 & 0x40) == 0) {
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 + 1;
            if (uVar3 < 2) break;
            uVar3 = uVar3 - 1;
            _cfg_14.pbStack_14 = _cfg_14.pbStack_14 + 0x20;
            goto LAB_1053a3b6;
          }
          uVar2 = (*_cfg_14.pbStack_14 & 0xffffffbf) + 1;
          if (0x15 < uVar2) {
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 + 1;
            if (uVar3 < 2) break;
            uVar3 = uVar3 - 1;
            _cfg_14.pbStack_14 = _cfg_14.pbStack_14 + 0x20;
            goto LAB_1053a3b6;
          }
          if (uVar3 < uVar2) {
            _cfg_24.uStack_24 = _cfg_14.uStack_10;
            _cfg_24.uStack_20 = uVar4;
            _cfg_24.uStack_1c = uVar2;
            iVar1 = dispatch_param2_command((int)param_1,(int *)&_cfg_24.uStack_24,auStack_2c4);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = validate_block_sequence(auStack_2c4,_cfg_24.uStack_1c,&_cfg_14.uStack_c);
            if (iVar1 != 0) {
              uVar5 = uVar5 + _cfg_14.uStack_c;
              uVar4 = uVar4 + _cfg_14.uStack_c;
              break;
            }
          }
          else {
            iVar1 = validate_block_sequence(_cfg_14.pbStack_14,uVar2,&_cfg_14.uStack_c);
            if (iVar1 != 0) {
              uVar5 = uVar5 + _cfg_14.uStack_c;
              uVar4 = uVar4 + _cfg_14.uStack_c;
              if (uVar3 <= _cfg_14.uStack_c) break;
              uVar3 = uVar3 - _cfg_14.uStack_c;
              _cfg_14.pbStack_14 = _cfg_14.pbStack_14 + _cfg_14.uStack_c * 0x20;
              goto LAB_1053a3b6;
            }
          }
        }
        else if ((_cfg_14.pbStack_14[0xb] & 8) != 0) {
          uVar5 = uVar5 + 1;
          if (uVar3 < 2) {
            uVar4 = uVar4 + 1;
            break;
          }
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 - 1;
          _cfg_14.pbStack_14 = _cfg_14.pbStack_14 + 0x20;
          goto LAB_1053a3b6;
        }
        return -0x27;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 - 1;
      _cfg_14.pbStack_14 = _cfg_14.pbStack_14 + 0x20;
    } while (uVar3 != 0);
  } while( true );
}
