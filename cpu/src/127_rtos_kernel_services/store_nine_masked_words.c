/* @k10d store_nine_masked_words @ 0x10457dfe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_nine_masked_words(int param_1,ushort *param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x38) = *param_2 & 0x3ff;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x3a) = param_2[1] & 0x3ff;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x3c) = param_2[2] & 0x3ff;
  *(uint16_t *)(*(int *)(param_1 + 0x10) + 0x3e) = 0;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x40) = param_2[3] & 0x3ff;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x42) = param_2[4] & 0x3ff;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x44) = param_2[5] & 0x3ff;
  *(uint16_t *)(*(int *)(param_1 + 0x10) + 0x46) = 0;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x48) = param_2[6] & 0x3ff;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x4a) = param_2[7] & 0x3ff;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x4c) = param_2[8] & 0x3ff;
  *(uint16_t *)(*(int *)(param_1 + 0x10) + 0x4e) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x10) + 0x50) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x10) + 0x52) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x10) + 0x54) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x10) + 0x56) = 0;
  return;
}
