/* @k10d write_two_byte_pair_to_ch2 @ 0x10411c1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_two_byte_pair_to_ch2(int param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  byte *pbVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar3 = 0x38;
  }
  else {
    iVar3 = 0x34;
  }
  clear_flag_with_notify(*(void **)(iVar3 + param_1));
  pbVar2 = (byte *)(param_1 + 0x14);
  *pbVar2 = (byte)((uint)param_2 >> 8) | 0x80;
  *(char *)(param_1 + 0x15) = (char)param_2;
  ch2_buffer_xfer(param_1,pbVar2,2);
  *(byte *)(param_1 + 0x1c) = *pbVar2;
  *(uint8_t *)(param_1 + 0x1d) = *(uint8_t *)(param_1 + 0x15);
  if (param_3 == 0) {
    iVar3 = 0x38;
  }
  else {
    iVar3 = 0x34;
  }
  set_flag_with_notify(*(void **)(iVar3 + param_1));
  iVar3 = 0x34;
  if (param_3 == 0) {
    iVar3 = 0x38;
  }
  clear_flag_with_notify(*(void **)(iVar3 + param_1));
  *pbVar2 = 0;
  *(uint8_t *)(param_1 + 0x15) = 0;
  uVar1 = ch2_buffer_xfer(param_1,pbVar2,2);
  *(byte *)(param_1 + 0x1e) = *pbVar2;
  *(uint8_t *)(param_1 + 0x1f) = *(uint8_t *)(param_1 + 0x15);
  if (param_3 == 0) {
    iVar3 = 0x38;
  }
  else {
    iVar3 = 0x34;
  }
  set_flag_with_notify(*(void **)(iVar3 + param_1));
  return uVar1;
}
