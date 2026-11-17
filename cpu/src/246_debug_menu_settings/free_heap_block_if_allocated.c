/* @k10d free_heap_block_if_allocated @ 0x104d8076
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_allocated(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = (*(code *)0x104de4e6/*ROM*/)(param_1 + 0x2b1c,&uStack_c);
  if (iVar1 != 0) {
    heap_free_2(iVar1);
    (*(code *)0x104de008/*ROM*/)(param_1 + 0x2b1c,0,0,0x10000);
  }
  return;
}
