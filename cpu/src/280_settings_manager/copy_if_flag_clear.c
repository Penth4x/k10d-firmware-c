/* @k10d copy_if_flag_clear @ 0x10522300
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_if_flag_clear(int param_1,void *param_2,uint32_t param_3,int param_4)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x20) == '\0') && (param_4 != 0)) {
    iVar2 = extract_bitfield_with_offset(param_3,4,0);
    iVar3 = extract_bitfield_with_offset(param_4 + 3,4,0);
    copy_struct_array(*(int *)(param_1 + 8),param_2,iVar3,iVar2);
    uVar1 = 1;
  }
  return uVar1;
}
