/* @k10d store_mapped_status_byte @ 0x1049be4e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_status_byte(int param_1,int param_2)

{
  uint32_t uVar1;
  char cVar2;
  
  cVar2 = read_byte_from_struct_offset_104a8c54(param_2,0);
  if (cVar2 == '\0') {
    uVar1 = 1;
  }
  else if (cVar2 == '\x01') {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x5c) = uVar1;
  return;
}
