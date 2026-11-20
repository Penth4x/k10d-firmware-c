/* @k10d query_object_via_virtual_call_10480050 @ 0x10480050
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object from a global pointer and invokes a virtual method to return a
 *   boolean result.
 * summary:
 *   The function calls lookup_table_entry_by_index_10482026 with the global _DAT_80010030
 *   as an argument to obtain an object pointer. It then performs a virtual function call on
 *   this object, specifically accessing the vtable at offset 0x4c (slot 9) and applying a
 *   this-adjustment from offset 0x48. The return value of this virtual call is tested
 *   against zero and returned as a boolean.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool query_object_via_virtual_call_10480050(uint32_t param_x0, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = lookup_table_entry_by_index_10482026((void*)(_DAT_80010030/*SDRAM*/));
  iVar1 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[9].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 4)))[9].adj);
  return iVar1 != 0;
}
