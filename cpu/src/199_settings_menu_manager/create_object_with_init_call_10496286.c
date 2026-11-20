/* @k10d create_object_with_init_call_10496286 @ 0x10496286
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object via cls_105b4cbc_new and invokes its virtual initialization
 *   method with param_2.
 * summary:
 *   The function calls cls_105b4cbc_new(0) to allocate a new instance. It then performs a
 *   virtual call on the newly created object, specifically invoking the method at offset
 *   0x84 in the vtable (slot 16) with param_2 and 0 as arguments. The pointer to the new
 *   object is returned in r4. The specific role of the object or the initialization logic
 *   is not determinable from the provided pseudocode and lack of named callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_object_with_init_call_10496286(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(cls_105b4cbc_new((cls_105b4cbc *)0x0));
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].fn)
            (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].adj + iVar1,param_2,0);
  return iVar1;
}
