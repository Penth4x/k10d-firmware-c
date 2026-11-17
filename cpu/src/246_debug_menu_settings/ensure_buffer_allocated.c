/* @k10d ensure_buffer_allocated @ 0x104d8024
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t ensure_buffer_allocated(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = (*(code *)0x104de4e6/*ROM*/)(param_1 + 0x2b1c,&uStack_c);
  uVar2 = 1;
  if (iVar1 == 0) {
    iVar1 = heap_alloc_2(0x10000);
    uVar2 = 0;
    if (iVar1 != 0) {
      (*(code *)0x104de01a/*ROM*/)(param_1 + 0x2b1c,iVar1,0,0x10000);
      uVar2 = 1;
    }
  }
  return uVar2;
}
