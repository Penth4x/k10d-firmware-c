/* @k10d increment_decimal_string @ 0x10545f92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Increments a null-terminated decimal string in-place and returns a status code
 *   indicating success, overflow, or buffer expansion.
 * summary:
 *   The function treats the buffer pointed to by *param_1 as a decimal number string. It
 *   first normalizes the string by stripping trailing zeros and handling negative signs (if
 *   param_3 < 0). It then performs a digit-by-digit increment from the least significant
 *   digit, propagating carries. If the most significant digit overflows (e.g., 9 becomes 0
 *   with a carry), it checks if the buffer has space to insert a new '1' at the front. It
 *   returns 0 on success, 1 on overflow without space, or 2 if the buffer pointer was
 *   adjusted to accommodate the new digit. The caller format_value_into_buffer is in the
 *   lens firmware update module, suggesting this is used for incrementing a counter or
 *   version number during the update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t increment_decimal_string(int *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint32_t uVar3;
  int iVar4;
  uint8_t *puVar5;
  bool bVar6;
  
  puVar5 = (uint8_t *)*param_1;
  if (param_3 < 0) {
    *puVar5 = 0x30;
    puVar5[1] = 0x2e;
    puVar5 = puVar5 + 2;
    if (0x1f7 < param_4) {
      param_4 = 0x1f7;
    }
    iVar4 = -1 - param_3;
    if (param_4 < -1 - param_3) {
      iVar4 = param_4;
    }
    param_4 = param_4 - iVar4;
    param_3 = param_3 + iVar4 + 1;
    while (bVar6 = iVar4 != 0, iVar4 = iVar4 + -1, bVar6) {
      *puVar5 = 0x30;
      puVar5 = puVar5 + 1;
    }
    iVar4 = convert_uint_to_hex_string(puVar5,param_2,param_4);
    puVar5 = puVar5 + iVar4;
  }
  else {
    iVar4 = convert_uint_to_hex_string(puVar5,param_2,param_3 + 1);
    puVar5 = puVar5 + iVar4;
    *puVar5 = 0x2e;
    if (0x1f7 < param_3 + param_4) {
      param_4 = 0x1f7 - param_3;
    }
    iVar4 = convert_uint_to_hex_string(puVar5 + 1,param_2,param_4);
    puVar5 = puVar5 + 1 + iVar4;
    iVar4 = (int)puVar5 - *param_1;
  }
  if ((param_3 < 0) || (*param_2 < 5)) {
    uVar3 = 0;
  }
  else {
    pbVar2 = puVar5 + -1;
    do {
      if (*pbVar2 != 0x2e) {
        bVar1 = *pbVar2;
        *pbVar2 = bVar1 + 1;
        if ((byte)(bVar1 + 1) < 0x3a) break;
        *pbVar2 = 0x30;
      }
      pbVar2 = pbVar2 + -1;
    } while ((byte *)*param_1 <= pbVar2);
    if (pbVar2 < (byte *)*param_1) {
      uVar3 = 1;
    }
    else if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
      if (puVar5 + -iVar4 <= pbVar2) {
        *param_1 = (int)puVar5;
        return 0;
      }
    }
  }
  *param_1 = (int)puVar5;
  return uVar3;
}
