/* @k10d read_byte_from_struct_offset_104a8c54 @ 0x104a8c54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_struct_offset_104a8c54(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = param_1 + 8;
  }
  return *(uint8_t *)(iVar1 + param_2);
}
