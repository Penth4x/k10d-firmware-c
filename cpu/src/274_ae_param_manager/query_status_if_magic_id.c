/* @k10d query_status_if_magic_id @ 0x10517472
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_status_if_magic_id(uint32_t param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (param_2 == 0xc4a5) {
    uVar2 = construct_object_with_vtable((uint16_t *)0x0,0xc4a5,7,0,0);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}
