/* @k10d parse_and_store_error_code @ 0x104b5ee4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Parses a numeric error code from a string buffer, stores the value in an output
 *   pointer, and updates an internal state object.
 * summary:
 *   The function first checks a status via read_byte_at_offset_0x18_104b5ff2. If
 *   successful, it updates fields in the object pointed to by param_1 (offsets 0x14, 0x1e0,
 *   0x1e8, 0x1ec) and calls strip_whitespace_and_check_comment. It then scans the string in
 *   param_2 for a sequence of up to 9 digits (handling case conversion for hex-like
 *   characters), extracts the numeric value into *param_3, and compacts the remaining
 *   string in param_2. If the initial status check fails, it retrieves an error code via a
 *   function pointer at 0x104b6bb4 and stores it in *param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t parse_and_store_error_code(int param_1,void *param_2,int *param_3)

{
  uint8_t *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  
  iVar6 = read_byte_at_offset_0x18_104b5ff2(__frv_reg_unset(4));
  if (iVar6 == 0) {
    (*(code *)0x104b69b4/*ROM*/)(param_1,*(uint32_t *)(param_1 + 0x1e0),param_2);
    if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x1e8)) &&
       (*(char *)(param_1 + 0x1e4) == '\x01')) {
      *(uint32_t *)(param_1 + 0x14) = *(uint32_t *)(param_1 + 0x1ec);
    }
    *(uint32_t *)(param_1 + 0x1e0) = *(uint32_t *)(param_1 + 0x14);
    iVar6 = strip_whitespace_and_check_comment((void *)param_1,param_2);
    if (iVar6 == 0) {
      return 1;
    }
    iVar3 = 0;
    iVar9 = 0;
    iVar6 = 0;
    do {
      iVar4 = 0;
      pbVar8 = (byte *)(iVar9 + 0x105b85ac/*ROM*/);
      do {
        bVar7 = *(byte *)((int)param_2 + iVar4);
        if ((0x60 < bVar7) && (bVar7 < 0x7b)) {
          bVar7 = bVar7 - 0x20;
        }
        iVar5 = iVar6;
      } while (((bVar7 == *pbVar8) && (iVar4 = iVar4 + 1, iVar5 = iVar4, pbVar8[1] != 0)) &&
              (pbVar8 = pbVar8 + 1, iVar5 = iVar6, iVar4 < 9));
      iVar4 = iVar3;
      if (iVar5 != 0) break;
      iVar9 = iVar9 + 9;
      iVar3 = iVar3 + 1;
      iVar4 = 0x1a;
      iVar6 = iVar5;
    } while (iVar9 < 0xe1);
    if (iVar4 == 0x1a) {
      return 1;
    }
    *param_3 = iVar4;
    iVar6 = 0;
    cVar2 = *(char *)((int)param_2 + iVar5);
    while (cVar2 != '\0') {
      puVar1 = (uint8_t *)((int)param_2 + iVar5);
      iVar5 = iVar5 + 1;
      *(uint8_t *)((int)param_2 + iVar6) = *puVar1;
      iVar6 = iVar6 + 1;
      cVar2 = *(char *)((int)param_2 + iVar5);
    }
    *(uint8_t *)((int)param_2 + iVar6) = 0;
    strip_whitespace_and_check_comment((void *)param_1,param_2);
  }
  else {
    iVar6 = (*(code *)0x104b6bb4/*ROM*/)();
    *param_3 = iVar6;
  }
  return 0;
}
