/* @k10d poll_until_flag_clear_10369650 @ 0x10369650
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x2bd and repeatedly calls a helper until a condition at offset
 *   0x2c2 is met or the flag clears.
 * summary:
 *   The function sets byte 0x2bd of the object to 1. If byte 0x2bf is initially zero, it
 *   enters a loop calling check_and_dispatch_virtual_call as long as byte 0x2bd is non-
 *   zero, the helper returns non-zero, and byte 0x2c2 is zero. If byte 0x2bf is non-zero,
 *   it calls the helper once and clears byte 0x2bf. Returns the last result from the
 *   helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_until_flag_clear_10369650(void *param_1,uint32_t param_2)

{
  char cVar1;
  int iVar2;
  
  *(uint8_t *)((int)param_1 + 0x2bd) = 1;
  iVar2 = 0;
  if (*(char *)((int)param_1 + 0x2bf) == '\0') {
    cVar1 = *(char *)((int)param_1 + 0x2bd);
    while (((cVar1 != '\0' && (iVar2 = check_and_dispatch_virtual_call(param_1,param_2), iVar2 != 0)) &&
           (*(char *)((int)param_1 + 0x2c2) == '\0'))) {
      cVar1 = *(char *)((int)param_1 + 0x2bd);
    }
  }
  else {
    iVar2 = check_and_dispatch_virtual_call(param_1,param_2);
    *(uint8_t *)((int)param_1 + 0x2bf) = 0;
  }
  return iVar2;
}
