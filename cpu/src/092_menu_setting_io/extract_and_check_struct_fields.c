/* @k10d extract_and_check_struct_fields @ 0x1040acea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool extract_and_check_struct_fields(int param_1,uint8_t *param_2,uint *param_3,uint32_t *param_4,
                 uint16_t *param_5,uint16_t *param_6)

{
  ushort uVar1;
  uint32_t uVar2;
  int iVar3;
  
  *param_2 = *(uint8_t *)(param_1 + 0x71);
  *param_3 = (uint)*(ushort *)(param_1 + 0x6e);
  uVar2 = (*(code *)0x104df4fc/*ROM*/)(param_1 + 0x48);
  *param_4 = uVar2;
  *param_5 = *(uint16_t *)(param_1 + 0x6a);
  uVar1 = *(ushort *)(param_1 + 0x6c);
  *param_6 = uVar1;
  iVar3 = initialize_object_subfield((void *)param_1,(uint)(ushort)*param_5,(uint)uVar1);
  return iVar3 == 1;
}
