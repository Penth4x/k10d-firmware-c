/* @k10d build_substep_371a @ 0x1044a1e2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed sd_read_scr_register)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Issues SD CMD55/ACMD51 to read the 8-byte SCR register from the card.
 * summary:
 *   Calls sd_cmd55_app_cmd with the RCA stored at param_1+0xe0 to prefix the application
 *   command. If that succeeds, it obtains a buffer pointer from module_method_beac_stub and
 *   calls sd_acmd51_read_scr to fetch the SCR data. Returns 1 on success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_substep_371a(void *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  iVar1 = sd_cmd55_app_cmd(param_1,(uint)*(ushort *)((int)param_1 + 0xe0));
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = (uint32_t *)module_method_beac_stub();
    iVar1 = sd_acmd51_read_scr(param_1,puVar2);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}
