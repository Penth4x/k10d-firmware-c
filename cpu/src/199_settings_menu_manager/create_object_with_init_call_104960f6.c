/* @k10d create_object_with_init_call_104960f6 @ 0x104960f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object via a constructor and invokes a virtual method on it.
 * summary:
 *   Calls cls_105b48dc_new with a null argument to allocate an object. It then performs a
 *   virtual call on the allocated object, passing param_2 and 0 as arguments. Returns the
 *   pointer to the newly created object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_object_with_init_call_104960f6(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = cls_105b48dc_new((cls_105b48dc *)0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].fn)
            (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].adj + iVar1,param_2,0);
  return iVar1;
}
