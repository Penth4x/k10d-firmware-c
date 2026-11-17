/* @k10d send_exposure_timer_command @ 0x10418028
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Computes a 32-bit exposure/timer value from object fields and sends it via a
 *   communication helper.
 * summary:
 *   Reads two integers at offsets 0x14e4 and 0x14e8, taking the minimum. If a flag at
 *   0x1564 is set, it overrides the value to 9999. It constructs a 32-bit word by shifting
 *   the value left 16 bits and ORing it with the lower 16 bits of the first field,
 *   conditionally setting bit 31 based on a flag at 0x1508. It calls
 *   get_or_init_singleton_object_1051d40e to get a pointer and update_camera_state_flags to
 *   send the constructed word with ID 0x19. If a byte at 0x1520 is non-zero, it calls a
 *   sequence of helpers (test_mode_config_singleton, a function pointer at 0x1052482c,
 *   apply_setting_pair_to_target) and clears the byte.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_exposure_timer_command(int param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x14e4) < *(int *)(param_1 + 0x14e8)) {
    iVar5 = *(int *)(param_1 + 0x14e4);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14e8);
  }
  if (*(int *)(param_1 + 0x1564) == 1) {
    iVar5 = 9999;
  }
  if ((*(uint *)(param_1 + 0x1508) & 0x2000000) == 0) {
    pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
    uVar4 = iVar5 << 0x10 | *(uint *)(param_1 + 0x14e4);
  }
  else {
    pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
    uVar4 = iVar5 << 0x10 | 0x80000000U | *(uint *)(param_1 + 0x14e4);
  }
  update_camera_state_flags(pvVar1,0x19,uVar4);
  if (*(char *)(param_1 + 0x1520) != '\0') {
    uVar2 = test_mode_config_singleton();
    test_mode_config_singleton();
    uVar3 = (*(code *)0x1052482c/*ROM*/)();
    apply_setting_pair_to_target(uVar2,uVar3,0);
    *(uint8_t *)(param_1 + 0x1520) = 0;
  }
  return;
}
