/* @k10d set_mode_state_flag @ 0x1041846c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Sets a state byte at offset 0x151f in the mode object based on input parameters and a
 *   global status flag.
 * summary:
 *   The function reads a status byte from a global object (via
 *   get_or_create_sram_object_1039fa94) and branches on param_2. If param_2 is 0, it may
 *   call eventflag_clr_flg and dispatch_mode_event_request with specific arguments and set
 *   the byte at param_1+0x151f to 0. If param_2 is non-zero, it calls similar helpers and
 *   sets the byte to 1. The logic depends on the value of the global status byte and
 *   param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mode_state_flag(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = get_or_create_sram_object_1039fa94();
  cVar1 = *(char *)(*(int *)(iVar2 + 4) + 0x35);
  if (param_2 == 0) {
    if (((cVar1 == '\x01') || (param_3 != 0)) && (iVar2 = call_single_helper_104185ec(), iVar2 == 0)) {
      eventflag_clr_flg((uint32_t *)(param_1 + 0x1540),8);
      dispatch_mode_event_request((cls_105c2050 *)(param_1 + 0x60),0x130002);
      eventflag_wai_flg((uint32_t *)(param_1 + 0x1540),8,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
      *(uint8_t *)(param_1 + 0x151f) = 0;
    }
  }
  else if ((cVar1 == '\0') || (param_3 != 0)) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x1540),4);
    dispatch_mode_event_request((cls_105c2050 *)(param_1 + 0x60),0x130001);
    eventflag_wai_flg((uint32_t *)(param_1 + 0x1540),4,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    *(uint8_t *)(param_1 + 0x151f) = 1;
  }
  return;
}
