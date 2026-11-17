/* @k10d poll_object_until_flag_set @ 0x1044a8ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Repeatedly calls a helper on an object until it returns zero or a specific flag bit is
 *   set.
 * summary:
 *   The function enters a loop calling sdhc_send_cmd_0xd1a with the object pointer and a
 *   16-bit value at offset 0xe0. If the helper returns 0, the function returns 0. If a byte
 *   at offset 0xdc is non-zero, it breaks and returns 0. Otherwise, if bits 11-13 of the
 *   32-bit value at offset 0x3c8 equal 0x800 (bit 11 set, bits 12-13 clear), it returns 1.
 *   The loop continues until one of these conditions is met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_object_until_flag_set(void *param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = sdhc_send_cmd_0xd1a(param_1,*(uint16_t *)((int)param_1 + 0xe0));
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)((int)param_1 + 0xdc) != '\0') break;
    if ((*(uint *)((int)param_1 + 0x3c8) & 0x1e00) == 0x800) {
      return 1;
    }
  }
  return 0;
}
