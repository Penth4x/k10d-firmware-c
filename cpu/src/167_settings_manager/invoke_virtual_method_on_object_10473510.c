/* @k10d invoke_virtual_method_on_object_10473510 @ 0x10473510
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_method_on_object_10473510(int param_1,uint32_t *param_2)

{
  int iVar1;
  uintptr_t sp;
  cls_105ab468 cStack_28;
  
  cls_105ab468_new(&cStack_28);
  call_with_critical_section_10481058(*(int *)(param_1 + 4),*param_2,&cStack_28);
  iVar1 = **(int **)(param_1 + 4);
  iVar1 = (((vtbl_entry*)(iVar1))[6].fn)
                    ((int)*(int **)(param_1 + 4) + (int)((vtbl_entry*)(iVar1))[6].adj,*param_2);
  if (iVar1 != 0) {
    copy_12_bytes_if_length_12(param_1 + 0x14,(void*)(&cStack_28));
    forward_param_to_callee_104766c0(*(uint32_t *)(param_1 + 8),&cStack_28);
  }
  cls_105ab468_delete(&cStack_28,2);
  return iVar1 != 0;
}
