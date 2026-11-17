/* @k10d init_object_with_two_ids_1044a72c @ 0x1044a72c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a helper with a constant ID and setting internal
 *   fields based on subsequent virtual calls.
 * summary:
 *   Calls sdhc_send_cmd_0x61b with param_1 and constant 0x3b90100. If successful, sets a
 *   byte at offset 0xf8 to 1. Then invokes two virtual functions via pointers at 0x104473ec
 *   and 0x104473da using the object pointer at offset 0x1b4. Sets a 32-bit value at offset
 *   0xec to 26000 or 52000 depending on the results of these calls. Returns 1 if the first
 *   virtual call succeeded, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_ids_1044a72c(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_cmd_0x61b(param_1,0x3b90100);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(uint8_t *)((int)param_1 + 0xf8) = 1;
    iVar1 = (*(code *)0x104473ec/*ROM*/)((int)param_1 + 0x1b4);
    if (iVar1 != 0) {
      *(uint32_t *)((int)param_1 + 0xec) = 26000;
      iVar1 = (*(code *)0x104473da/*ROM*/)((int)param_1 + 0x1b4);
      if (iVar1 != 0) {
        *(uint32_t *)((int)param_1 + 0xec) = 52000;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
