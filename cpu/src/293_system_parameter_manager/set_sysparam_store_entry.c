/* @k10d set_sysparam_store_entry @ 0x10535046
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value into a bounded array field of the system parameter store struct.
 * summary:
 *   The function checks if param_2 is less than 10 and, if so, stores param_3 at offset
 *   0x44 plus param_2*4 within the structure pointed to by param_1. It belongs to the
 *   system_parameter_store module, which manages configuration data parsed from
 *   SYSPARAM.TXT. The specific field at offset 0x44 is likely one of the store
 *   configuration arrays (e.g., STOREPREBAYER, STOREGEN, etc.), but the exact semantic
 *   meaning of the index is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_sysparam_store_entry(int param_1,int param_2,uint32_t param_3)

{
  if (param_2 < 10) {
    *(uint32_t *)(param_1 + 0x44 + param_2 * 4) = param_3;
  }
  return;
}
