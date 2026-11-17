/* @k10d menu_build_hw_gate @ 0x10449f20
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed sd_cmd8_check_and_fill)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends SD CMD8 and fills a 16-byte buffer with success or failure data based on the
 *   response.
 * summary:
 *   Calls sd_cmd8_send_if_cond with the voltage field from param_1+0xf2. If the command
 *   succeeds (return 0), it copies 16 bytes from 0x105a19d8 to param_1+0x1c and returns 1.
 *   If it fails, it copies 16 bytes from 0x105a1a78 to param_1+0x1c and returns 1 only if
 *   the voltage bits in param_1+0xf2 match the accepted voltage in the output parameter.
 *   This function acts as a gate for SD card initialization, determining if the card
 *   supports the required voltage.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t menu_build_hw_gate(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  ushort uStack_a;
  
  uVar2 = 0;
  uStack_a = 0;
  iVar1 = sd_cmd8_send_if_cond(param_1,(uint)*(ushort *)((int)param_1 + 0xf2),&uStack_a);
  iVar3 = 8;
  if (iVar1 == 0) {
    do {
      iVar1 = iVar3 + -4;
      *(uint32_t *)((int)param_1 + iVar3 + 0x18) = *(uint32_t *)(iVar3 + 0x105a19d8/*ROM*/);
      iVar3 = iVar1;
    } while (iVar1 != 0);
    uVar2 = 1;
  }
  else {
    do {
      iVar1 = iVar3 + -4;
      *(uint32_t *)((int)param_1 + iVar3 + 0x18) = *(uint32_t *)(iVar3 + 0x105a1a78/*ROM*/);
      iVar3 = iVar1;
    } while (iVar1 != 0);
    if ((*(ushort *)((int)param_1 + 0xf2) & uStack_a) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}
