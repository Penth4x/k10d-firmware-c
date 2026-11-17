/* @k10d query_status_code_and_map @ 0x1051deea
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status field in param_3 and maps the return value of
 *   read_u16_from_struct_array to a small integer code stored in param_2.
 * summary:
 *   The function first checks if the short at offset 2 of param_3 equals 3. If so, it calls
 *   read_u16_from_struct_array with param_3 and 0. The return value is mapped: 7 or 6
 *   becomes 1, 1 becomes 0, 0x8005 becomes 2, 0xffff becomes 3, and other values < 8 become
 *   -1 (0xffffffff). This result is written to offset 0x1c of param_2. The function returns
 *   1 if the initial check passed, otherwise 0. The specific meaning of the status codes
 *   and the role of read_u16_from_struct_array are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_status_code_and_map(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (*(short *)(param_3 + 2) == 3) {
    uVar2 = read_u16_from_struct_array(param_3,0);
    uVar1 = 0xffffffff;
    if (uVar2 == 7) {
      uVar1 = 1;
    }
    else if (uVar2 < 8) {
      if (uVar2 == 1) {
        uVar1 = 0;
      }
      else if (uVar2 == 6) {
        uVar1 = 1;
      }
    }
    else if (uVar2 == 0x8005) {
      uVar1 = 2;
    }
    else if (uVar2 == 0xffff) {
      uVar1 = 3;
    }
    *(uint32_t *)(param_2 + 0x1c) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}
