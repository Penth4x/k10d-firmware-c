/* @k10d init_object_with_heap_buffer_104aa552 @ 0x104aa552
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 208_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_heap_buffer_104aa552(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint32_t uVar4;
  
  wait_flg_obj((void *)((int)param_1 + 0x1c),0);
  iVar2 = initialize_singleton_object_1045d6a0();
  pvVar3 = *(void **)(iVar2 + 0x24);
  *(void **)((int)param_1 + 0x10) = pvVar3;
  find_and_set_first_empty_slot(pvVar3,(int)param_1 + 4);
  uVar4 = heap_alloc_2(6);
  *(uint32_t *)((int)param_1 + 0xc) = uVar4;
  iVar2 = 0;
  iVar1 = 1;
  do {
    *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar2) = 0;
    *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar2 + 1) = 0;
    *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar2 + 2) = 0;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 3;
  } while (-1 < iVar1);
  return 1;
}
