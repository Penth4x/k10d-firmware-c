/* @k10d ui_set_display @ 0x104927f6
 * name: verified (structural evidence: decomp: display_on_locked / display_off_locked on the global display object (0x1052b6fc))
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   UI request handler for codes 0x80/0x100: display on (param_2 != 0) or off.
 * summary:
 *   VERIFIED: decomp: display_on_locked / display_off_locked on the global display object
 *   (0x1052b6fc)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t ui_set_display(void *param_1,int param_2)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
  if (param_2 == 0) {
    display_off_locked(puVar1);
  }
  else {
    display_on_locked(puVar1);
  }
  return 1;
}
