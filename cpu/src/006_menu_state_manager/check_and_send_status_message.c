/* @k10d check_and_send_status_message @ 0x10365f38
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status pointer and global flags, then sends a message if conditions are met.
 * summary:
 *   The function calls dispatch_event_and_return_offset to retrieve a pointer into a local
 *   variable. It verifies that the pointer is non-null, that specific short values at
 *   offsets 4 and 6 match global constants, and that two other global variables have
 *   specific values. If all conditions are met, it initializes a local buffer via
 *   copy_two_words_from_param2, sends it via compare_two_int_pairs, and cleans up with
 *   free_heap_if_flagged_1045c402. It returns 1 if the check fails, 0 if the send succeeds,
 *   or 2 if the send fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_and_send_status_message(void *param_1)

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
