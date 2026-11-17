/* @k10d init_two_heap_objects_10521ec0 @ 0x10521ec0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_two_heap_objects_10521ec0(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = heap_alloc((void *)0x1c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105d77cc_new((void *)iVar1);
  }
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = heap_alloc((void *)0x30);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105d7b7c_new((void *)iVar1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 != 0) {
    *(uint32_t *)(iVar1 + 0x28) = *(uint32_t *)(param_1 + 0xc);
  }
  uVar2 = get_shared_sram_buffer();
  if (*(int *)(param_1 + 0x10) != 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x1c) = uVar2;
  }
  return 1;
}
