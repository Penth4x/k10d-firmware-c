/* @k10d initialize_lens_update_object @ 0x1054707a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Initializes a lens firmware update object by delegating to fill_byte_array with a
 *   zeroed middle parameter.
 * summary:
 *   This function is a thin wrapper that calls fill_byte_array with param_1, 0, and
 *   param_2. It is called by constructors of several classes in the lens_firmware_update
 *   module, suggesting it performs standard object initialization for lens firmware update
 *   components. The specific behavior depends on fill_byte_array, which is not yet named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_lens_update_object(void *param_1,int param_2)

{
  fill_byte_array(param_1,0,param_2);
  return;
}
