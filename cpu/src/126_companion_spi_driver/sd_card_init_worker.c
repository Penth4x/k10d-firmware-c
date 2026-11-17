/* @k10d sd_card_init_worker @ 0x10449ec8
 * name: verified (structural evidence: decomp: sd_cmd55_app_cmd(host,0) selects FUN_10449f7e (SD table, includes sd_select_bus_width) vs FUN_1044a516 (8-step table))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Card initialisation: probes with CMD55; if it answers, runs the SD init step table
 *   (host+0x1c: CMD8, ACMD41, CID/RCA, CSD, SCR, bus width…), else the MMC step table
 *   (host+0x7c); records the result at host+0xdd.
 * summary:
 *   VERIFIED: decomp: sd_cmd55_app_cmd(host,0) selects menu_build_pathB_substep_driver (SD
 *   table, includes sd_select_bus_width) vs menu_build_path_A (8-step table)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_card_init_worker(void *param_1)

{
  int iVar1;
  uint32_t extraout_r4;
  uint32_t uVar2;
  
  set_flag_and_notify_object(param_1,1);
  write_buffer_via_virtual_io(param_1,1);
  sdhc_send_cmd0(param_1);
  iVar1 = menu_build_hw_gate(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = sd_cmd55_app_cmd(param_1,0);
    if (iVar1 == 0) {
      uVar2 = menu_build_path_A((int)param_1);
    }
    else {
      menu_build_pathB_substep_driver(param_1);
      uVar2 = extraout_r4;
    }
    *(char *)((int)param_1 + 0xdd) = (char)uVar2;
  }
  set_flag_and_notify_object(param_1,0);
  return uVar2;
}
