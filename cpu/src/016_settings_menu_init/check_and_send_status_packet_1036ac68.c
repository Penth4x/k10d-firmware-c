/* @k10d check_and_send_status_packet_1036ac68 @ 0x1036ac68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Validates a status pointer against global constants and sends a prepared packet if
 *   conditions are met.
 * summary:
 *   Calls dispatch_event_and_return_offset to retrieve a pointer into a local variable. If
 *   the pointer is valid and matches specific global short values (0x80015d3c, 0x80015d3e)
 *   and global flags (0x80015d1c == 2, 0x80015f14 != 0), it prepares a buffer via
 *   copy_two_words_from_param2 and sends it using compare_two_int_pairs. Returns 1 if
 *   conditions are not met, 0 if send succeeds, or 2 if send fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_and_send_status_packet_1036ac68(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_1c [16];
  int iStack_c;
  
  iStack_c = 0;
  dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
  uVar2 = 1;
  if ((((iStack_c != 0) && (*(short *)(iStack_c + 4) == _DAT_80015d3c/*SDRAM*/)) &&
      (*(short *)(iStack_c + 6) == _DAT_80015d3e/*SDRAM*/)) &&
     ((_DAT_80015d1c/*SDRAM*/ == 2 && (DAT_80015f14/*SDRAM*/ != '\0')))) {
    copy_two_words_from_param2((int)auStack_1c,-0x7ffea2fc);
    iVar1 = compare_two_int_pairs((int *)(0x80018058/*SDRAM*/),(int *)(auStack_1c));
    free_heap_if_flagged_1045c402(auStack_1c,2);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}
