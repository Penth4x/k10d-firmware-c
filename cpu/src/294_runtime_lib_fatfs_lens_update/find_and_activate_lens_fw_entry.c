/* @k10d find_and_activate_lens_fw_entry @ 0x1053e4f6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Searches a 20-entry array for a matching lens firmware record and activates it.
 * summary:
 *   Checks if the global pointer _DAT_800149fc is null; if so, returns an error code
 *   (0xfffffda7). Otherwise, it calls store_result_of_helper_call_1047f986 to obtain a key
 *   value, then iterates through up to 20 (0x14) entries of 28 bytes (0x1c) each. It looks
 *   for an entry where the first field is 1 and the second field matches the key. If found,
 *   it calls reset_lens_update_context with the entry pointer and returns 0. The module
 *   context 'lens_firmware_update' suggests this manages lens CPU firmware states or
 *   entries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t find_and_activate_lens_fw_entry(void)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uintptr_t sp;
  int iStack_c;
  
  if (_DAT_800149fc/*SDRAM*/ == 0) {
    uVar1 = 0xfffffda7;
  }
  else {
    store_result_of_helper_call_1047f986(&iStack_c);
    uVar2 = 0;
    iVar3 = 0;
    do {
      piVar4 = (int *)((char*)_DAT_800149fc/*SDRAM*/ + iVar3);
      if ((*piVar4 == 1) && (piVar4[1] == iStack_c)) {
        reset_lens_update_context(piVar4);
        break;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar2 < 0x14);
    uVar1 = 0;
  }
  return uVar1;
}
