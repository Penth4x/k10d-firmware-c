/* @k10d get_or_init_cached_value @ 0x1042feea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a cached value from an object, initializing it via a helper if the cache slot
 *   is empty.
 * summary:
 *   Calls read_struct_field_by_index_1042fea4 to obtain a pointer to an object. If the
 *   object exists and the field at offset 0x14 is zero, it calls app_screen_create_all with
 *   parameters derived from param_1 and param_2 to compute a value, stores it in that
 *   field, and returns it. Otherwise, it returns the existing value from offset 0x14.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_or_init_cached_value(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = read_struct_field_by_index_1042fea4(param_1,param_2);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x14), iVar2 == 0)) {
    iVar2 = app_screen_create_all(*(uint32_t *)(param_1 + 0xcc),param_2);
    *(int *)(iVar1 + 0x14) = iVar2;
  }
  return iVar2;
}
