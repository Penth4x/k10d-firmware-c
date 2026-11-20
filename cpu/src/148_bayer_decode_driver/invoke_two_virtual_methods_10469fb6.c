/* @k10d invoke_two_virtual_methods_10469fb6 @ 0x10469fb6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_10469fb6(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  (((vtbl_entry*)(iVar1))[5].fn)(*(int *)((int)param_1 + 0x23c) + (int)((vtbl_entry*)(iVar1))[5].adj);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  (((vtbl_entry*)(iVar1))[9].fn)
            (*(int *)((int)param_1 + 0x23c) + (int)((vtbl_entry*)(iVar1))[9].adj,param_2,0,0);
  return;
}
