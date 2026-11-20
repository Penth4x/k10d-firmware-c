/* @k10d allocate_and_init_object_1049618c @ 0x1049618c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object via cls_105b989c_new and invokes its virtual constructor with
 *   param_2.
 * summary:
 *   Calls cls_105b989c_new(0) to obtain a pointer to a newly allocated object. Dereferences
 *   the vtable pointer at offset 0xc of the object and calls virtual slot 10 (offset 0x84)
 *   with the object pointer (adjusted by the this-adjustment at offset 0x80) and param_2.
 *   Returns the object pointer in r4. The specific class or subsystem is not identifiable
 *   from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1049618c(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = cls_105b989c_new((cls_105b989c *)0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].fn)
            (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].adj + iVar1,param_2,0);
  return iVar1;
}
