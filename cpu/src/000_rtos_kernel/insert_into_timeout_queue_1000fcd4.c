/* @k10d insert_into_timeout_queue_1000fcd4 @ 0x1000fcd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1000fd10) overlaps instruction at (ram,0x1000fd0e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void insert_into_timeout_queue_1000fcd4(uint32_t *param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (_DAT_6a0036bc == (uint32_t)((uint32_t *)&DAT_6a0036bc)) {
    *param_1 = (uintptr_t)(&DAT_6a0036bc);
    param_1[1] = (uintptr_t)(&DAT_6a0036bc);
    _DAT_6a0036bc = (uintptr_t)(param_1);
    _DAT_6a0036c0 = (uintptr_t)(param_1);
  }
  else {
    puVar1 = (uint32_t *)((uintptr_t)(_DAT_6a0036bc));
    if (_DAT_6a0036bc != (uint32_t)((uint32_t *)&DAT_6a0036bc)) {
      uVar2 = param_1[2];
      do {
        uVar3 = puVar1[2];
        if (uVar2 < uVar3) {
          puVar1[2] = uVar3 - uVar2;
          break;
        }
        uVar2 = uVar2 - uVar3;
        param_1[2] = uVar2;
        puVar1 = (uint32_t *)*puVar1;
      } while (puVar1 != (uint32_t *)&DAT_6a0036bc);
    }
    *param_1 = (uintptr_t)(puVar1);
    param_1[1] = puVar1[1];
    *(uint32_t **)puVar1[1] = param_1;
    puVar1[1] = (uintptr_t)(param_1);
  }
  return;
}
