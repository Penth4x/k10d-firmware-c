/* @k10d send_twenty_identical_entries @ 0x1046a65a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Loops four times, sending five identical entries per iteration via a helper function.
 * summary:
 *   The function iterates four times (controlled by iStack_c). In each iteration, it
 *   initializes a local struct with a pointer from _DAT_800042c8 and two 0xff values, then
 *   calls iterate_byte_list_and_call_helper five times with incrementing indices (0-4, 5-9,
 *   10-14, 15-19). The callee receives param_1, a constant address &DAT_105a8548, zero, the
 *   index, and the struct fields. The total number of calls to
 *   iterate_byte_list_and_call_helper is 20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_twenty_identical_entries(void *param_1)

{
  short sVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t auStack_2c [12];
  int iStack_c;
  
  piVar2 = (int *)auStack_2c;
  sVar1 = 0;
  iStack_c = 1;
  do {
    *piVar2 = _DAT_800042c8/*SDRAM*/;
    *(uint16_t *)((int)piVar2 + 6) = 0xff;
    *(uint16_t *)((int)piVar2 + 10) = 0xff;
    iterate_byte_list_and_call_helper(param_1,(void *)&DAT_105a8548/*ROM*/,0,sVar1,*piVar2,*(uint16_t *)((int)piVar2 + 6),
                 *(uint16_t *)((int)piVar2 + 10));
    *piVar2 = _DAT_800042c8/*SDRAM*/;
    *(uint16_t *)((int)piVar2 + 6) = 0xff;
    *(uint16_t *)((int)piVar2 + 10) = 0xff;
    iterate_byte_list_and_call_helper(param_1,(void *)&DAT_105a8548/*ROM*/,0,sVar1 + 1,*piVar2,*(uint16_t *)((int)piVar2 + 6),
                 *(uint16_t *)((int)piVar2 + 10));
    *piVar2 = _DAT_800042c8/*SDRAM*/;
    *(uint16_t *)((int)piVar2 + 6) = 0xff;
    *(uint16_t *)((int)piVar2 + 10) = 0xff;
    iterate_byte_list_and_call_helper(param_1,(void *)&DAT_105a8548/*ROM*/,0,sVar1 + 2,*piVar2,*(uint16_t *)((int)piVar2 + 6),
                 *(uint16_t *)((int)piVar2 + 10));
    *piVar2 = _DAT_800042c8/*SDRAM*/;
    *(uint16_t *)((int)piVar2 + 6) = 0xff;
    *(uint16_t *)((int)piVar2 + 10) = 0xff;
    iterate_byte_list_and_call_helper(param_1,(void *)&DAT_105a8548/*ROM*/,0,sVar1 + 3,*piVar2,*(uint16_t *)((int)piVar2 + 6),
                 *(uint16_t *)((int)piVar2 + 10));
    *piVar2 = _DAT_800042c8/*SDRAM*/;
    *(uint16_t *)((int)piVar2 + 6) = 0xff;
    *(uint16_t *)((int)piVar2 + 10) = 0xff;
    iterate_byte_list_and_call_helper(param_1,(void *)&DAT_105a8548/*ROM*/,0,sVar1 + 4,*piVar2,*(uint16_t *)((int)piVar2 + 6),
                 *(uint16_t *)((int)piVar2 + 10));
    iStack_c = iStack_c + -1;
    sVar1 = sVar1 + 5;
  } while (-1 < iStack_c);
  return;
}
