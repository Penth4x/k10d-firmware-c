/* @k10d fill_buffer_with_repeated_byte @ 0x104952ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_buffer_with_repeated_byte(uint32_t param_1,int param_2,int param_3,int param_4,ushort param_5,byte param_6
                 )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    console_printf((void *)0x105b4ed8/*ROM*/,(void *)param_2,(void *)0x0,(void *)param_4);
  }
  uVar2 = (uint)param_6;
  if (0 < param_4) {
    iVar1 = (int)(((uint)(param_3 >> 1) >> 0x1e) + param_3) >> 2;
    iVar5 = 0;
    iVar4 = 0;
    do {
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          iVar6 = param_2 + iVar3;
          iVar3 = iVar3 + 4;
          *(uint *)(iVar6 + iVar4) = uVar2 | uVar2 << 8 | uVar2 << 0x10 | uVar2 << 0x18;
        } while (iVar3 < iVar1 * 4);
      }
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + (param_5 & 0xfffffffc);
    } while (iVar5 < param_4 * 4);
  }
  return;
}
