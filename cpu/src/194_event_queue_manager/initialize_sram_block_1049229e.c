/* @k10d initialize_sram_block_1049229e @ 0x1049229e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Initializes two SDRAM regions and allocates a heap object, returning success.
 * summary:
 *   Calls wait_flg_obj to zero or initialize the 4-byte region at 0x80048f20. Calls
 *   forward_three_args_to_helper_10459d64 to initialize the region at 0x80048f28 with
 *   parameters 1 and 0x1f. Allocates an object via get_ui_root_object and passes it to
 *   process_two_entry_state_array, likely for construction or registration. Returns 1 to
 *   indicate success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_sram_block_1049229e(void)

{
  void *pvVar1;
  
  wait_flg_obj((void *)0x80048f20/*SDRAM*/,0);
  forward_three_args_to_helper_10459d64((void *)0x80048f28/*SDRAM*/,1,0x1f);
  pvVar1 = (void *)get_ui_root_object();
  process_two_entry_state_array(pvVar1);
  return 1;
}
