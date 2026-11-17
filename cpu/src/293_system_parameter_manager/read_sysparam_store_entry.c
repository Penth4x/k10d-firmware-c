/* @k10d read_sysparam_store_entry @ 0x10535056
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from a fixed-offset array in the SYSPARAM config struct, returning
 *   0 if the index is out of range.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). If the index is
 *   less than 10, it returns the 32-bit value at offset 0x44 + index*4 from the base
 *   pointer. Otherwise, it returns 0. It is part of the system_parameter_store module,
 *   which manages factory engineering settings parsed from SYSPARAM.TXT.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_sysparam_store_entry(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 10) {
    uVar1 = *(uint32_t *)(param_1 + 0x44 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
