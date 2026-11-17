/* @k10d menu_build_substep0 @ 0x10449fdc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed retry_sd_card_app_cmd)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Retries an SD card application command up to 200 times until a status check passes.
 * summary:
 *   Gated by bit 0 of the object field at offset 0xf2, the function initializes a local
 *   structure via two helpers, then loops up to 200 times. Each iteration calls a query
 *   function and a check function on the object; if both succeed, it breaks. On failure, it
 *   calls an unknown helper and sends an SD CMD55 APP_CMD with argument 0. If the loop
 *   times out, it sets the object field at offset 0x120 to 3 and returns false; otherwise
 *   it returns true.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool menu_build_substep0(void *param_1)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  bool bVar4;
  uint8_t auStack_c [4];
  
  bVar4 = false;
  if ((*(ushort *)((int)param_1 + 0xf2) & 1) != 0) {
    init_four_byte_struct(auStack_c);
    set_two_byte_flags(auStack_c);
    sVar1 = 200;
    do {
      uVar2 = return_r4_passthrough_1044b8ce();
      iVar3 = p67_query_check(param_1,(void *)uVar2);
      if ((iVar3 != 0) && (iVar3 = test_bit_7_of_byte((void *)((int)param_1 + 0x161)), iVar3 != 0)) break;
      write_buffer_via_virtual_io(param_1,5);
      sd_cmd55_app_cmd(param_1,0);
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    bVar4 = sVar1 != 0;
    if (!bVar4) {
      *(uint32_t *)((int)param_1 + 0x120) = 3;
    }
    free_heap_if_flagged_1044b898(auStack_c,2);
  }
  return bVar4;
}
