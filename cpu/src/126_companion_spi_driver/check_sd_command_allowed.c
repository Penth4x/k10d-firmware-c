/* @k10d check_sd_command_allowed @ 0x10447fee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a boolean indicating whether an SD command with the given flags is permitted
 *   based on host state.
 * summary:
 *   Reads a state flag from the SDHCI host object at offset 0x110 via
 *   check_flag_bit_in_nested_struct. If that flag is set, it checks the command flags in
 *   param_2: if the low 2 bits are zero or the high 2 bits (0xc0) are set, it returns 1;
 *   otherwise it queries a second state via check_bit1_of_nested_ptr and returns that
 *   result. If the initial flag is clear, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_sd_command_allowed(void *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = check_flag_bit_in_nested_struct(*(void **)((int)param_1 + 0x110));
  uVar2 = 0;
  if (bVar1) {
    if (((param_2 & 3) == 0) || ((param_2 & 0xc0) != 0)) {
      uVar2 = 1;
    }
    else {
      bVar1 = check_bit1_of_nested_ptr(*(void **)((int)param_1 + 0x110));
      uVar2 = (uint)bVar1;
    }
  }
  return uVar2;
}
