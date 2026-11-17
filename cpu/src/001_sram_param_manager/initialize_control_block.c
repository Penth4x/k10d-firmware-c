/* @k10d initialize_control_block @ 0x100f1a20
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 10-word control block at 0xd60 with default values and a pointer offset.
 * summary:
 *   The function writes a fixed set of constants to the global memory region starting at
 *   0xd60. It sets _DAT_00000d68 to the value of _DAT_800482d4 plus 0x20 and stores the
 *   input parameter param_1 into _DAT_00000d6c. Other fields are set to zero or specific
 *   constants like 0x400, 0x200, and 0x804a. No other functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x100f1a86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_control_block(uint32_t param_1)

{
  _DAT_00000d62 = 0;
  _DAT_00000d60 = 0x400;
  _DAT_00000d68 = _DAT_800482d4/*SDRAM*/ + 0x20;
  _DAT_00000d6c = param_1;
  _DAT_00000d70 = 0;
  _DAT_00000d74 = 0;
  _DAT_00000d78 = 0x200;
  _DAT_00000d7c = 0;
  _DAT_00000d64 = 0x804a;
  return;
}
