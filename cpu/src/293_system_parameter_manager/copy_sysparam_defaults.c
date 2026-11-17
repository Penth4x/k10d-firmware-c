/* @k10d copy_sysparam_defaults @ 0x10534f14
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Copies two 32-bit default values from ROM into the system parameter store structure.
 * summary:
 *   The function writes the 32-bit values at ROM addresses 0x105b8d14 and 0x105b8d18 into
 *   the SDRAM locations 0x8005b158 and 0x8005b15c. It has no callees and performs no
 *   conditional logic. Given the module context (system_parameter_store) and the
 *   neighboring function initialize_sysparam_flag_if_empty, this likely initializes
 *   specific fields of the system parameter configuration structure with factory defaults.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_sysparam_defaults(void)

{
  _DAT_8005b158/*SDRAM*/ = _DAT_105b8d14/*ROM*/;
  _DAT_8005b15c/*SDRAM*/ = _DAT_105b8d18/*ROM*/;
  return;
}
