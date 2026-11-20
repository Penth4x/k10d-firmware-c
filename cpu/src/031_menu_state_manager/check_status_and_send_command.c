/* @k10d check_status_and_send_command @ 0x10370cdc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status pointer for specific short values and global flags, then sends a
 *   command via helper functions if conditions are met.
 * summary:
 *   The function calls dispatch_event_and_return_offset to retrieve a pointer into a local
 *   variable. It verifies that the pointer is non-null, that two short values at offsets 4
 *   and 6 match specific constants, and that two global variables (DAT_80015d1c == 2 and
 *   DAT_80015f14 != 0) are set. If all conditions pass, it initializes a local buffer with
 *   copy_two_words_from_param2, calls compare_two_int_pairs with a fixed address and the
 *   buffer, and finally calls free_heap_if_flagged_1045c402. It returns 1 if the initial
 *   check fails, 0 if the command sequence succeeds, or 2 if compare_two_int_pairs returns
 *   non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_status_and_send_command(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_1c [16];
  int iStack_c;
  
  iStack_c = 0;
  dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
  uVar2 = 1;
  if ((((iStack_c != 0) && (*(short *)(iStack_c + 4) == _DAT_80015d3c/*SDRAM*/)) && (*(short *)(iStack_c + 6) == _DAT_80015d3e/*SDRAM*/)) && ((_DAT_80015d1c/*SDRAM*/ == 2 && (DAT_80015f14/*SDRAM*/ != '\0')))) {
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
