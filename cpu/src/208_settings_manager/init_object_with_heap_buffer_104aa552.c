/* @k10d init_object_with_heap_buffer_104aa552 @ 0x104aa552
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 208_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_heap_buffer_104aa552(cls_105b6e5c *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  wait_flg_obj(&param_1->field_0x1c,0);
  iVar2 = initialize_singleton_object_1045d6a0();
  pvVar3 = *(void **)(iVar2 + 0x24);
  param_1->field_0x10 = (uint32_t)pvVar3;
  find_and_set_first_empty_slot(pvVar3,(uint32_t)&param_1->field_0x4);
  iVar2 = heap_alloc_2(6);
  param_1->field_0xc = (uint32_t)iVar2;
  iVar2 = 0;
  iVar1 = 1;
  do {
    *(uint8_t *)((uint32_t)param_1->field_0xc + iVar2) = 0;
    *(uint8_t *)((uint32_t)param_1->field_0xc + iVar2 + 1) = 0;
    *(uint8_t *)((uint32_t)param_1->field_0xc + iVar2 + 2) = 0;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 3;
  } while (-1 < iVar1);
  return 1;
}
