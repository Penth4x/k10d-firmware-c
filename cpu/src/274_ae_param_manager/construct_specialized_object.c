/* @k10d construct_specialized_object @ 0x10517196
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint construct_specialized_object(uint32_t param_1,int param_2)

{
  ushort uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  
  if (param_2 == 0xfe) {
    uVar2 = 0xfe;
    uVar3 = 4;
  }
  else {
    if (param_2 != 0xff) {
      return 0;
    }
    uVar2 = 0xff;
    uVar3 = 3;
  }
  uVar1 = construct_object_with_vtable((uint16_t *)0x0,uVar2,uVar3,1,0);
  return (uint)uVar1;
}
