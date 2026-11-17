/* @k10d allocate_and_init_0x21c_struct @ 0x104b7148
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_0x21c_struct(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x21c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    param_1[7] = 0;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint16_t *)((int)param_1 + 0x22) = 0xff;
    *(uint16_t *)(param_1 + 9) = 7;
    param_1[10] = 0;
    param_1[0xb] = 0x32;
    param_1[0xc] = 0x32;
    param_1[0xd] = 0;
    param_1[0x78] = 0;
    *(uint8_t *)(param_1 + 0x79) = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    *(uint8_t *)(param_1 + 0x85) = 0;
    *(uint8_t *)((int)param_1 + 0x215) = 0;
    param_1[0x86] = 0;
    uVar3 = initialize_sram_object_once_104b743a();
    *param_1 = uVar3;
    uVar3 = get_or_init_ram_block();
    param_1[1] = uVar3;
    iVar2 = 0xc;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x38) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x3c) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 8;
    } while (-1 < iVar2);
    iVar2 = 0xf;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0xa0) = 0xffffffff;
      *(uint32_t *)((int)param_1 + iVar1 + 0xa4) = 0xffffffff;
      *(uint32_t *)((int)param_1 + iVar1 + 0xa8) = 0xffffffff;
      *(uint32_t *)((int)param_1 + iVar1 + 0xac) = 0xffffffff;
      *(uint32_t *)((int)param_1 + iVar1 + 0xb0) = 0xffffffff;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar2);
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 500) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x1f8) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x1fc) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x200) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
