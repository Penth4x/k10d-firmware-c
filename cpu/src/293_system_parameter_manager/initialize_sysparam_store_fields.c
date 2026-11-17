/* @k10d initialize_sysparam_store_fields @ 0x10535ec8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a system parameter store object by setting three fields via a helper and
 *   zeroing two others.
 * summary:
 *   The function takes a pointer to a structure (param_1) and calls zero_memory_region
 *   three times to initialize fields at offsets 0, 8, and 4 with values 0x1f, 0xd, and 0x10
 *   respectively. It then explicitly sets the fields at offsets 12 and 16 to zero. Given
 *   the module context 'system_parameter_store', this appears to be an initialization
 *   routine for a configuration or parameter object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_sysparam_store_fields(uint32_t *param_1)

{
  zero_memory_region((void *)*param_1,0x1f,0);
  zero_memory_region((void *)param_1[2],0x10,0);
  zero_memory_region((void *)param_1[1],0xd,0);
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}
