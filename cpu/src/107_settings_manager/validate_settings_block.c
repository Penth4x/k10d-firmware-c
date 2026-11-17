/* @k10d validate_settings_block @ 0x10429902
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void validate_settings_block(void)

{
  settings_block_valid((void *)0x10004000/*ROM*/);
  return;
}
