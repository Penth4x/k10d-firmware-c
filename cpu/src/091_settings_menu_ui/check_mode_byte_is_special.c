/* @k10d check_mode_byte_is_special @ 0x1040822a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns 1 if the byte at offset 0x54 of the given structure is 0x0c, 0x0d, or 0x0e,
 *   else 0.
 * summary:
 *   Reads a single byte from param_1 + 0x54 and compares it against three specific values
 *   (12, 13, 14). Returns 1 if any match, 0 otherwise. No callees or side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_byte_is_special(void *param_1)

{
  char cVar1;
  uint32_t uVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x54);
  uVar2 = 0;
  if (((cVar1 == '\f') || (cVar1 == '\r')) || (cVar1 == '\x0e')) {
    uVar2 = 1;
  }
  return uVar2;
}
