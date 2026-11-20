/* @k10d check_node_in_linked_list @ 0x104e3fa0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_node_in_linked_list(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  uint32_t uVar4;
  
  pvVar2 = *(void **)(*(int *)((int)param_1 + 0x10) + 0x1c);
  uVar4 = 0;
  if (pvVar2 == 0) {
    uVar4 = 0;
  }
  else {
    pvVar3 = pvVar2;
    if (pvVar2 == param_1) {
      *(uint32_t *)(*(int *)((int)param_1 + 0x10) + 0x1c) = *(uint32_t *)((int)param_1 + 0xc);
      uVar4 = 1;
    }
    else {
      while (pvVar1 = pvVar2, pvVar1 != 0) {
        if (pvVar1 == param_1) {
          uVar4 = 1;
          *(uint32_t *)((int)pvVar3 + 0xc) = *(uint32_t *)((int)param_1 + 0xc);
          break;
        }
        pvVar3 = pvVar1;
        pvVar2 = *(void **)((int)pvVar1 + 0xc);
      }
    }
    empty_stub_104e406e();
  }
  return uVar4;
}
