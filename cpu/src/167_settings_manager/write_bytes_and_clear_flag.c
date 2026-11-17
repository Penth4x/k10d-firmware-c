/* @k10d write_bytes_and_clear_flag @ 0x104756ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 bytes to a struct offset and clears a byte at offset 0xc.
 * summary:
 *   The function calls an external routine at 0x1054534e to copy 8 bytes from param_2 to
 *   the memory location at param_1 + 4. It then writes 0 to the byte at param_1 + 0xc. No
 *   other operations are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_bytes_and_clear_flag(int param_1,void *param_2)

{
  (*(code *)0x1054534e/*ROM*/)(param_1 + 4,param_2,8);
  *(uint8_t *)(param_1 + 0xc) = 0;
  return;
}
