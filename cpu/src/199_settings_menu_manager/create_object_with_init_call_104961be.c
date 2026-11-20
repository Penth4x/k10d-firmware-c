/* @k10d create_object_with_init_call_104961be @ 0x104961be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_object_with_init_call_104961be(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = cls_105b4bbc_new((cls_105b4bbc *)0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].fn)
            (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[16].adj + iVar1,param_2,0);
  return iVar1;
}
