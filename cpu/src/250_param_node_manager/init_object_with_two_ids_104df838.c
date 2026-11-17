/* @k10d init_object_with_two_ids_104df838 @ 0x104df838
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a helper, allocating a resource if needed, and setting
 *   state fields.
 * summary:
 *   Calls release_object_members on the input pointer. Checks if the first field's offset 8
 *   is zero; if so, calls get_object_field_at_offset_0x14 to get a value, and if that is
 *   zero, calls initialize_linked_struct_fields with 0x201d. Otherwise, stores the value in
 *   param_1[6] and the first field's offset 8. Sets global _DAT_80010908 and a field at
 *   param_1[1]+0x34 to 5. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_with_two_ids_104df838(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  release_object_members(param_1);
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 8) == 0) {
    iVar2 = get_object_field_at_offset_0x14(__frv_reg_unset(4));
    if (iVar2 == 0) {
      initialize_linked_struct_fields(param_1,0x201d);
    }
    else {
      param_1[6] = iVar2;
      *(int *)(*param_1 + 8) = iVar2;
      _DAT_80010908/*SDRAM*/ = *(uint32_t *)(*param_1 + 0xc);
      *(uint32_t *)(param_1[1] + 0x34) = 5;
    }
  }
  else {
    uVar1 = get_object_field_at_offset_0x14(iVar2);
    *(uint32_t *)(iVar2 + 8) = uVar1;
    _DAT_80010908/*SDRAM*/ = *(uint32_t *)(*param_1 + 0xc);
    *(uint32_t *)(param_1[1] + 0x34) = 5;
  }
  return 1;
}
