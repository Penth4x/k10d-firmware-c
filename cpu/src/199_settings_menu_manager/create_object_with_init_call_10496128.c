/* @k10d create_object_with_init_call_10496128 @ 0x10496128
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_object_with_init_call_10496128(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = cls_105b49ec_new((uint32_t *)0x0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x84))
            (*(short *)(*(int *)(iVar1 + 0xc) + 0x80) + iVar1,param_2,0);
  return iVar1;
}
