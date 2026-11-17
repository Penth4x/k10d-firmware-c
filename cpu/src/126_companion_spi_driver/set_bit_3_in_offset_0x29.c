/* @k10d set_bit_3_in_offset_0x29 @ 0x1044af0a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears bit 3 of the byte at offset 0x29 in a sub-structure and sets it if param_2 has
 *   bit 1 set.
 * summary:
 *   The function writes 0 to the global DAT_00000300. It then accesses a pointer located at
 *   offset 8 of param_1, reads the byte at offset 0x29 of that structure, clears bit 3
 *   (mask 0xf1), and ORs in bit 1 of param_2 shifted to bit 3 (param_2 & 0xe). This
 *   effectively sets or clears bit 3 of the target byte based on the input parameter. No
 *   other callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit_3_in_offset_0x29(void *param_1,byte param_2)

{
  _DAT_00000300 = 0;
  *(byte *)(*(int *)((int)param_1 + 8) + 0x29) =
       *(byte *)(*(int *)((int)param_1 + 8) + 0x29) & 0xf1 | param_2 & 0xe;
  return;
}
