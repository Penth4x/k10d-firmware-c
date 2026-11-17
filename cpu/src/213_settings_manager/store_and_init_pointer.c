/* @k10d store_and_init_pointer @ 0x104ace92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a pointer returned by a helper into the object at offset 4 and calls an
 *   initializer on it.
 * summary:
 *   The function calls get_or_init_ram_buffer_104aba0c to obtain a byte pointer, stores it
 *   in the first field of the object pointed to by param_1 (at offset 4), and then calls
 *   initialize_exposure_metering_state on that pointer. It returns 1. The specific roles of
 *   the callees are unknown, so the operation is described mechanically as storing and
 *   initializing a pointer member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_and_init_pointer(void *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)get_or_init_ram_buffer_104aba0c();
  *(byte **)((int)param_1 + 4) = pbVar1;
  initialize_exposure_metering_state(pbVar1);
  return 1;
}
