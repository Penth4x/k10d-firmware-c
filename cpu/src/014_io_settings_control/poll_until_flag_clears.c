/* @k10d poll_until_flag_clears @ 0x103696a8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x2be and repeatedly calls a helper until a condition at offset
 *   0x2c2 clears or the flag is reset.
 * summary:
 *   The function sets byte 0x2be of the object to 1. If byte 0x2c0 is initially zero, it
 *   enters a loop calling check_and_invoke_virtual_slot while byte 0x2be is non-zero, the
 *   helper returns non-zero, and byte 0x2c2 is zero. If byte 0x2c0 is non-zero, it calls
 *   the helper once and clears byte 0x2c0. Returns the last return value from the helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_until_flag_clears(void *param_1,uint32_t param_2)

{
  char cVar1;
  int iVar2;
  
  *(uint8_t *)((int)param_1 + 0x2be) = 1;
  iVar2 = 0;
  if (*(char *)((int)param_1 + 0x2c0) == '\0') {
    cVar1 = *(char *)((int)param_1 + 0x2be);
    while (((cVar1 != '\0' && (iVar2 = check_and_invoke_virtual_slot(param_1,param_2), iVar2 != 0)) &&
           (*(char *)((int)param_1 + 0x2c2) == '\0'))) {
      cVar1 = *(char *)((int)param_1 + 0x2be);
    }
  }
  else {
    iVar2 = check_and_invoke_virtual_slot(param_1,param_2);
    *(uint8_t *)((int)param_1 + 0x2c0) = 0;
  }
  return iVar2;
}
