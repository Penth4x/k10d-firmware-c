/* @k10d write_second_field_via_helper_1036c4c2 @ 0x1036c4c2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a pointer from get_or_create_singleton_object_10390eea and passes its second
 *   word to dispatch_event_to_object_1039091a with param_2.
 * summary:
 *   The function calls get_or_create_singleton_object_10390eea to obtain a base pointer,
 *   dereferences offset +4 to get a sub-pointer, and forwards it along with param_2 to
 *   dispatch_event_to_object_1039091a. param_1 is unused. The specific subsystem is not
 *   determinable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_second_field_via_helper_1036c4c2(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  dispatch_event_to_object_1039091a(*(uint32_t *)(iVar1 + 4),param_2);
  return;
}
