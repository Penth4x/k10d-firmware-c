/* @k10d cpucom_wait_line_clear @ 0x10466f00
 * name: verified (structural evidence: emulator: the inverse-of-request handshake model kept this set, hanging task 7)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Waits (no timeout) for the companion handshake line GPIO 0x50000106 bit 0x01 to be
 *   clear, polling via obj+0x20 flag; used by the capture task start-up (0x10506bc0).
 * summary:
 *   VERIFIED: emulator: the inverse-of-request handshake model kept this set, hanging task
 *   7
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_wait_line_clear(void *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  initialize_object_with_optional_param((int)param_1,param_2);
  bVar1 = test_flag_set_if_active(*(void **)((int)param_1 + 0x20));
  if (bVar1) {
    do {
      check_kernel_call_success_10459fea(0x1);
      cVar2 = read_byte_at_offset_0x28(param_1);
      if (cVar2 != '\0') {
        uVar3 = 2;
        break;
      }
      bVar1 = test_flag_set_if_active(*(void **)((int)param_1 + 0x20));
    } while (bVar1);
  }
  check_and_clear_object_state(param_1);
  return uVar3;
}
