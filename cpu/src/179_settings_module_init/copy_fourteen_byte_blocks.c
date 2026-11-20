/* @k10d copy_fourteen_byte_blocks @ 0x104860e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 179_settings_module_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b2b70": ignoring overlapping field "field_0x8" */

uint32_t copy_fourteen_byte_blocks(cls_105b2b70 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    (&param_1->field_0x5f)[iVar2] = *(uint8_t *)(iVar1 + param_2 + 4);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)&param_1->field_0x6c + iVar2 + 2) = *(uint8_t *)(iVar1 + param_2 + 0x13)
    ;
    iVar2 = iVar1;
  } while (iVar1 != 0);
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)&param_1->field_0x7c + iVar2 + 1) = *(uint8_t *)(iVar1 + param_2 + 0x22)
    ;
    iVar2 = iVar1;
  } while (iVar1 != 0);
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)&param_1->field_0x8c + iVar2) = *(uint8_t *)(iVar1 + param_2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  set_flg_obj(&param_1->field_0x48);
  return 1;
}
