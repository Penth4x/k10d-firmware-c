/* @k10d clear_flag_if_set_103968b2 @ 0x103968b2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a byte at offset 0x81 in the object and, if non-zero, calls a helper and clears
 *   the byte.
 * summary:
 *   The function reads the byte at param_1 + 0x81. If it is non-zero, it calls
 *   call_two_unnamed_helpers_103946a4 (purpose unknown) and then writes 0 to that same
 *   byte. If the byte is already zero, it does nothing. This is a simple conditional flag-
 *   clearing routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_set_103968b2(int param_1)

{
  if (*(char *)(param_1 + 0x81) != '\0') {
    call_two_unnamed_helpers_103946a4();
    *(uint8_t *)(param_1 + 0x81) = 0;
  }
  return;
}
