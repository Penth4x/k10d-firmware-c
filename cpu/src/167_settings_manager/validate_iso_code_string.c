/* @k10d validate_iso_code_string @ 0x10478936
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates a 4-8 char ISO code string and extracts the numeric ISO value into param_3.
 * summary:
 *   Checks the first 4 characters of param_2 against a lookup table via
 *   check_key_state_bit, then verifies characters 4-7 against a bitmask table at
 *   DAT_106220f1. If a '.' is found at index 8, it parses the following digits as a 4-digit
 *   number (e.g., 100, 200, 400) and stores it in *param_3 if valid (1-9999). Returns 1 on
 *   success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_iso_code_string(uint32_t param_1,void *param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = check_key_state_bit(param_1,*(uint8_t *)((int)param_2 + iVar3));
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  for (; iVar3 < 8; iVar3 = iVar3 + 1) {
    if (((&DAT_106220f1)[*(byte *)((int)param_2 + iVar3)] & 0x20) == 0) {
      return 0;
    }
  }
  if (*(char *)((int)param_2 + iVar3) == '.') {
    do {
      iVar3 = iVar3 + 1;
      if (0xb < iVar3) {
        uVar1 = (*(byte *)((int)param_2 + 4) - 0x30) * 1000 +
                (*(byte *)((int)param_2 + 5) - 0x30) * 100 +
                (*(byte *)((int)param_2 + 6) - 0x30) * 10 + (*(byte *)((int)param_2 + 7) - 0x30);
        if (param_3 != (ushort *)0x0) {
          *param_3 = uVar1;
        }
        if ((uVar1 != 0) && (uVar1 < 10000)) {
          return 1;
        }
        return 0;
      }
      iVar2 = check_key_state_bit(param_1,*(uint8_t *)((int)param_2 + iVar3));
    } while (iVar2 != 0);
  }
  return 0;
}
