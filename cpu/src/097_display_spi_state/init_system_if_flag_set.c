/* @k10d init_system_if_flag_set @ 0x10414152
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Performs one-time system initialization gated by a RAM flag, calling setup helpers and
 *   clearing the flag.
 * summary:
 *   Checks if cRam8000fb94 is non-zero. If so, calls get_sysparam_store_instance,
 *   initialize_sysparam_flag_if_empty, populate_sequential_config_tables, and
 *   init_object_state_once with param_1. If param_2 is 0, it also calls
 *   init_mode_state_and_check. Finally, it clears cRam8000fb94 to 0 to prevent re-
 *   initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_system_if_flag_set(uint32_t param_1,int param_2)

{
  if (cRam8000fb94 != '\0') {
    get_sysparam_store_instance();
    initialize_sysparam_flag_if_empty((char *)(uint32_t)param_1);
    populate_sequential_config_tables(param_1);
    init_object_state_once(param_1);
    if (param_2 == 0) {
      init_mode_state_and_check(param_1);
    }
    cRam8000fb94 = '\0';
  }
  return;
}
