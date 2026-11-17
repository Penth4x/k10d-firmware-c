/* @k10d write_second_field_via_helper_1036c486 @ 0x1036c486
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a pointer from get_or_create_singleton_object_10390eea and passes its second
 *   word to forward_offset_field_call along with param_2.
 * summary:
 *   The function calls get_or_create_singleton_object_10390eea to obtain a base pointer,
 *   dereferences offset +4 to get a sub-pointer, and forwards that sub-pointer plus param_2
 *   to forward_offset_field_call. It acts as a thin wrapper that routes param_2 through a
 *   two-step indirection. No camera-specific behavior is evident from the pseudocode or
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_second_field_via_helper_1036c486(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  forward_offset_field_call(*(uint32_t *)(iVar1 + 4),param_2);
  return;
}
