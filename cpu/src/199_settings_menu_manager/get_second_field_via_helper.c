/* @k10d get_second_field_via_helper @ 0x1049536a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a getter to obtain a pointer, then passes its second word to another function and
 *   returns the result.
 * summary:
 *   The function calls get_or_init_singleton_10491684 to retrieve a pointer or handle. It
 *   dereferences the pointer at offset +4 and passes that value as an argument to
 *   select_channel_by_index. The return value of select_channel_by_index is returned
 *   directly to the caller. The specific subsystem or data type is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_second_field_via_helper(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_init_singleton_10491684();
  uVar2 = select_channel_by_index((void *)(*(uint32_t *)(iVar1 + 4)));
  return uVar2;
}
