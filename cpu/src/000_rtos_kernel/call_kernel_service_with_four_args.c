/* @k10d call_kernel_service_with_four_args @ 0x1000d51c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_kernel_service_with_four_args(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_48 [16];
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  
  puVar1 = auStack_48;
  uStack_38 = param_1;
  uStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  (*(code *)PTR_FUN_10011c70)(puVar1);
  return *(uint64_t *)(puVar1 + 0x10);
}
