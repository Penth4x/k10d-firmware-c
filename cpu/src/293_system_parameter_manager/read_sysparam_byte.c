/* @k10d read_sysparam_byte @ 0x10534f9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_sysparam_byte(uint8_t *param_1)

{
  return *param_1;
}
