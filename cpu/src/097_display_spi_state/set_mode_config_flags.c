/* @k10d set_mode_config_flags @ 0x10410460
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Selects configuration values based on a mode index and a state flag, then writes them
 *   to an object.
 * summary:
 *   The function checks a byte at offset 0xbd in the object pointed to by param_1.
 *   Depending on this flag and the value of param_2 (0, 1, 2, or other), it selects
 *   specific 16-bit and 32-bit values. It writes the 16-bit value to offset 0xca. If the
 *   flag is non-zero, it calls two helper functions and potentially sets bit 9 (0x200) in
 *   the values if the second helper returns non-zero. It also sets bit 4 (0x10) in the
 *   value at 0xca if a byte at offset 0xc7 is non-zero. Finally, it calls
 *   send_two_byte_pairs_over_ch2 with the object, a constant 0x44, and the selected values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_mode_config_flags(cls_1059be70 *param_1,int param_2)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1->field_0xbd == '\0') {
    if (param_2 == 0) {
      param_1->field_0xca = 0x6100;
      uVar5 = 0x720;
      uVar4 = 0x20;
    }
    else if (param_2 == 1) {
      param_1->field_0xca = 0x7100;
      uVar5 = 0x723;
      uVar4 = 0x23;
    }
    else if (param_2 == 2) {
      param_1->field_0xca = 0x8100;
      uVar5 = 0x727;
      uVar4 = 0x27;
    }
    else {
      param_1->field_0xca = 0x6100;
      uVar4 = 0x20;
      uVar5 = 0x720;
    }
  }
  else {
    if (param_2 == 0) {
      uVar1 = 0x3100;
      uVar5 = 0x3881;
      uVar4 = 0x81;
    }
    else if (param_2 == 1) {
      uVar1 = 0x4100;
      uVar5 = 0x3883;
      uVar4 = 0x83;
    }
    else if (param_2 == 2) {
      uVar1 = 0x5100;
      uVar5 = 0x3885;
      uVar4 = 0x85;
    }
    else {
      uVar1 = 0x3100;
      uVar4 = 0x81;
      uVar5 = 0x3881;
    }
    param_1->field_0xca = uVar1;
    uVar2 = get_sysparam_store_instance();
    iVar3 = get_sysparam_store_byte((uint8_t *)(uVar2),(uint32_t)(0xe));
    if (iVar3 != 0) {
      uVar4 = uVar4 | 0x200;
      uVar5 = uVar5 | 0x200;
    }
    if (param_1->field_0xc7 != '\0') {
      param_1->field_0xca = param_1->field_0xca | 0x10;
    }
  }
  send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x44),(int)(uVar4),(int)(uVar5));
  return;
}
