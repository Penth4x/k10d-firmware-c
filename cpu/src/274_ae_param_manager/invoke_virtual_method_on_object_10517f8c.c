/* @k10d invoke_virtual_method_on_object_10517f8c @ 0x10517f8c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_method_on_object_10517f8c(int param_1)

{
  int iVar1;
  
  call_subroutine_with_object_fields(__frv_reg_unset(4));
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 8);
  iVar1 = (((vtbl_entry*)(iVar1))[5].fn)
                    (*(int *)(param_1 + 0x20) + (int)((vtbl_entry*)(iVar1))[5].adj,param_1 + 0x24,
                     *(uint32_t *)(param_1 + 4));
  if (iVar1 != 0) {
    copy_two_buffers_and_pack_metadata_10517fcc(param_1);
  }
  return iVar1 != 0;
}
