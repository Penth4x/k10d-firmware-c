/* @k10d allocate_string_buffer @ 0x1049c442
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * allocate_string_buffer(uint16_t *param_1)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint8_t uStack_9;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x18), param_1 != (uint16_t *)0x0)) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(uint32_t *)(param_1 + 10) = 0;
    *param_1 = 4;
    param_1[1] = 6;
    param_1[2] = 0;
    param_1[3] = 4;
    param_1[4] = 6;
    heap_alloc_one_byte_1045926e((int)&uStack_9);
    pcVar2 = (char *)return_pentax_string_ptr((uint32_t)(&uStack_9));
    iVar3 = count_string_bytes(pcVar2);
    uVar4 = (iVar3 + 1U & 0xffff) + 3;
    param_1[5] = (ushort)uVar4 & 0xfffc;
    pvVar5 = (void *)heap_alloc_2(uVar4 & 0xfffc);
    *(void **)(param_1 + 10) = pvVar5;
    fill_byte_array(pvVar5,0x20,(uint)(ushort)param_1[5]);
    iVar7 = *(int *)(param_1 + 10);
    iVar6 = (uintptr_t)(return_pentax_string_ptr((uint32_t)(&uStack_9)));
    pcVar2 = (char *)return_pentax_string_ptr((uint32_t)(&uStack_9));
    iVar3 = count_string_bytes(pcVar2);
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      *(uint8_t *)(iVar3 + iVar7) = *(uint8_t *)(iVar3 + iVar6);
    }
    *(uint8_t *)(((ushort)param_1[5] - 1) + *(int *)(param_1 + 10)) = 0;
    sVar1 = param_1[5] + 2;
    param_1[6] = sVar1;
    param_1[7] = 0;
    param_1[8] = param_1[5];
    param_1[9] = sVar1;
    heap_free_if_flagged(&uStack_9,2);
  }
  return param_1;
}
