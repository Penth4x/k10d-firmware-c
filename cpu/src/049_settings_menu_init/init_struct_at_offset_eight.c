/* @k10d init_struct_at_offset_eight @ 0x103b022c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Initializes a structure at param_1+8 by calling two helper functions with that address.
 * summary:
 *   The function takes a base pointer in param_1 and passes param_1+8 to two callees. The
 *   first callee reset_flag_and_sync_ui is called with the offset address, and the second
 *   callee dispatch_event_to_object_10492252 is called with the same address and a NULL
 *   pointer. It returns 0. The specific role of the structure or the helpers is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_struct_at_offset_eight(int param_1)

{
  reset_flag_and_sync_ui(param_1 + 8);
  dispatch_event_to_object_10492252((void *)(param_1 + 8),(void *)0x0);
  return 0;
}
