/* @k10d alloc_sysparam_store_if_null @ 0x10534bc6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_sysparam_store_if_null(int param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}
