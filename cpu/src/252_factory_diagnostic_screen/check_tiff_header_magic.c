/* @k10d check_tiff_header_magic @ 0x104e4326
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_tiff_header_magic(uint32_t param_1,short *param_2)

{
  return *param_2 == 0x4d4d;
}
