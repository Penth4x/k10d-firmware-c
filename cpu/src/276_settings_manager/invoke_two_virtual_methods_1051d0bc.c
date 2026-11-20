/* @k10d invoke_two_virtual_methods_1051d0bc @ 0x1051d0bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slots 2 and 1 of an object stored at param_1+0x60 and passes the results
 *   to copy_bytes_to_struct_field.
 * summary:
 *   The function dereferences a pointer at param_1+0x60 to get an object, then performs two
 *   Cfront-style virtual calls using vtable offsets 0x14 (slot 2) and 0x1c (slot 1). The
 *   return values from these calls are passed as arguments to copy_bytes_to_struct_field
 *   along with param_2. The specific roles of the virtual methods and the callee are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_1051d0bc(int param_1,int param_2)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = **(int **)(param_1 + 0x60);
  pvVar1 = (void *)(((vtbl_entry*)(iVar3))[3].fn)
                             ((int)*(int **)(param_1 + 0x60) + (int)((vtbl_entry*)(iVar3))[3].adj);
  iVar3 = **(int **)(param_1 + 0x60);
  uVar2 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x60) + (int)((vtbl_entry*)(iVar3))[2].adj);
  copy_bytes_to_struct_field(param_2,pvVar1,uVar2);
  return;
}
