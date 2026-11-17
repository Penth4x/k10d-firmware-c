/* @k10d write_integer_as_four_ascii_digits @ 0x10475fcc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Formats a 32-bit integer into four ASCII digit characters at a given buffer offset.
 * summary:
 *   The function takes an integer value (param_3) and writes its decimal representation as
 *   four ASCII characters into the buffer pointed to by param_2, starting at offset 4. It
 *   performs standard integer-to-ASCII conversion by dividing by powers of 10 and adding
 *   the '0' character constant. The first parameter (param_1) is unused in the visible
 *   code. No callees are invoked, and no MMIO or camera-specific registers are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_integer_as_four_ascii_digits(uint32_t param_1,int param_2,int param_3)

{
  char cVar1;
  
  *(char *)(param_2 + 4) = (char)(param_3 / 1000) + '0';
  *(char *)(param_2 + 5) = (char)(param_3 / 100) + (char)((param_3 / 100) / 10) * -10 + '0';
  cVar1 = (char)(param_3 / 10);
  *(char *)(param_2 + 6) = cVar1 + (char)((param_3 / 10) / 10) * -10 + '0';
  *(char *)(param_2 + 7) = (char)param_3 + '0' + cVar1 * -10;
  return;
}
