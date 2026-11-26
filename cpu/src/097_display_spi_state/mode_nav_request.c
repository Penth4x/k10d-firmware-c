/* @k10d mode_nav_request @ 0x10413566
 * name: verified (structural evidence: decomp + emulator: MENU -> screen 0x10002 parked here)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Navigator request handler: event 0x130066 parks the target screen id at obj+0x1528
 *   (gated by obj+0x151d/0x151e), 0x50001 stores the launcher, 0x13006d toggles a flag;
 *   posts the mode task flag (obj+0x1538).
 * summary:
 *   VERIFIED: decomp + emulator: MENU -> screen 0x10002 parked here
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t mode_nav_request(cls_1059c10c *param_1,int param_2,int param_3)

{
  if (param_2 != 0x130068) {
    if (param_2 < 0x130069) {
      if (param_2 == 0x50001) {
        *(int *)&param_1[1].field_0x5a8 = param_3;
        return 1;
      }
      if (param_2 == 0x130064) {
        set_flag_and_toggle_state((int)(param_1),(int)(1));
        return 1;
      }
      if (param_2 == 0x130065) {
        set_flag_and_toggle_state((int)(param_1),(int)(0));
        return 1;
      }
      if (param_2 != 0x130066) {
        return 1;
      }
      if (param_1[1].field_0x565 != '\0') {
        return 1;
      }
      if (param_1[1].field_0x566 != '\0') {
        return 1;
      }
      *(int *)&param_1[1].field_0x570 = param_3;
    }
    else if (param_2 != 0x13006b) {
      if (param_2 < 0x13006c) {
        if ((param_2 != 0x130069) && (param_2 != 0x13006a)) {
          return 1;
        }
      }
      else {
        if (param_2 == 0x13006d) {
          param_1[1].field_0x569 = param_3 != 0;
          return 1;
        }
        if (param_2 != 0x13006e) {
          return 1;
        }
      }
    }
  }
  set_flg_obj((uint32_t *)&param_1[1].field_0x580, 0x80000000);
  return 1;
}
