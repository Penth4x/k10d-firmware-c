/* @k10d call_helper_and_clear_offset_0x14 @ 0x1040b6e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_clear_offset_0x14(int param_1)

{
  empty_noop_stub_1040b790();
  *(uint8_t *)(param_1 + 0x14) = 0;
  return;
}
