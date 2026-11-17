/* @k10d init_stack_buffer_with_constants @ 0x104ef1a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_stack_buffer_with_constants(uint32_t param_x0)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint16_t auStack_4a [10];
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint16_t auStack_1a [9];
  
  auStack_1a[0] = 0;
  auStack_1a[1] = 0;
  auStack_1a[2] = 0;
  auStack_1a[3] = 0;
  auStack_1a[4] = 0;
  auStack_1a[5] = 0;
  auStack_1a[6] = 0;
  auStack_1a[7] = 0;
  auStack_1a[8] = 0;
  auStack_4a[0] = 0x26;
  auStack_4a[1] = 0x4b;
  auStack_4a[2] = 0xf;
  auStack_4a[3] = 0xea;
  auStack_4a[4] = 0xd6;
  auStack_4a[5] = 0x40;
  auStack_4a[6] = 0x40;
  auStack_4a[7] = 0xca;
  auStack_4a[8] = 0xf6;
  uStack_36 = 0xfe;
  uStack_34 = 0xf;
  uStack_32 = 0xfe;
  uStack_30 = 5;
  uStack_2e = 0xfe;
  uStack_2c = 5;
  uStack_2a = 0xfe;
  uStack_28 = 5;
  uStack_26 = 0xfe;
  uStack_24 = 0xf;
  uStack_22 = 0xff;
  uStack_20 = 0;
  uStack_1e = 0xff;
  uStack_1c = 0;
  iVar2 = 2;
  iVar1 = 0;
  do {
    *(uint16_t *)((int)auStack_1a + iVar1) = *(uint16_t *)((int)auStack_4a + iVar1);
    *(uint16_t *)((int)auStack_1a + iVar1 + 2) = *(uint16_t *)((int)auStack_4a + iVar1 + 2);
    iVar2 = iVar2 + -1;
    *(uint16_t *)((int)auStack_1a + iVar1 + 4) = *(uint16_t *)((int)auStack_4a + iVar1 + 4);
    iVar1 = iVar1 + 6;
  } while (-1 < iVar2);
  empty_stub_104ef29e();
  return;
}
