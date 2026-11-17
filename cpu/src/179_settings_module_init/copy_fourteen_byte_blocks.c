/* @k10d copy_fourteen_byte_blocks @ 0x104860e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 179_settings_module_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_fourteen_byte_blocks(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0xf;
  do {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + param_1 + 0x60) = *(uint8_t *)(iVar1 + param_2 + 4);
  } while (iVar1 != 0);
  iVar1 = 0xf;
  do {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + param_1 + 0x6f) = *(uint8_t *)(iVar1 + param_2 + 0x13);
  } while (iVar1 != 0);
  iVar1 = 0xf;
  do {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + param_1 + 0x7e) = *(uint8_t *)(iVar1 + param_2 + 0x22);
  } while (iVar1 != 0);
  iVar1 = 0xf;
  do {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + param_1 + 0x8d) = *(uint8_t *)(iVar1 + param_2 + 0x31);
  } while (iVar1 != 0);
  set_flg_obj((uint32_t *)(param_1 + 0x48));
  return 1;
}
