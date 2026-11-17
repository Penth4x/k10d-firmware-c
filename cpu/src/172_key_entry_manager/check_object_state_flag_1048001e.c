/* @k10d check_object_state_flag_1048001e @ 0x1048001e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * purpose:
 *   Queries a virtual method on an object retrieved from a global pointer and returns true
 *   if the result is zero.
 * summary:
 *   The function calls lookup_table_entry_by_index_10482026 with the global pointer
 *   _DAT_80010030 to obtain an object handle. It then performs a virtual call to slot 10
 *   (offset 0x54) of that object's vtable, passing the object as the 'this' pointer. The
 *   return value is compared to zero, indicating a boolean check on the object's state or a
 *   specific property.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_object_state_flag_1048001e(uint32_t param_x0, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = lookup_table_entry_by_index_10482026((void *)_DAT_80010030/*SDRAM*/);
  iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x54))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x50));
  return iVar1 == 0;
}
