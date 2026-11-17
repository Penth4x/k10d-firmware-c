/* @k10d check_and_send_status_packet_10364e9e @ 0x10364e9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status pointer for specific magic values and sends a prepared packet if
 *   conditions are met.
 * summary:
 *   Calls dispatch_event_and_return_offset to retrieve a pointer into a local variable. If
 *   the pointer is valid and contains specific short values at offsets 4 and 6, and global
 *   flags DAT_80015d1c and DAT_80015f14 are set, it prepares a buffer via
 *   copy_two_words_from_param2 and sends it using compare_two_int_pairs. Returns 1 if no
 *   action was taken, 0 if the send succeeded, or 2 if the send failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_and_send_status_packet_10364e9e(void *param_1)

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
    iVar1 = compare_two_int_pairs((void *)0x80018058/*SDRAM*/,(void *)auStack_1c);
    free_heap_if_flagged_1045c402(auStack_1c,2);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}
