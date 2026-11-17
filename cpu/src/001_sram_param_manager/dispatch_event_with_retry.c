/* @k10d dispatch_event_with_retry @ 0x100f187c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Modifies a parameter based on event type and state, calls two handlers, and optionally
 *   polls a helper up to 100 times.
 * summary:
 *   The function checks if the high byte of param_1 is 0x12 or 0x19 to adjust param_2 based
 *   on the state of DAT_80048094. It calls set_two_register_bits if the low two bits of
 *   param_1 are non-zero, then invokes store_value_at_dat_offset_100f1f4a and
 *   store_value_at_dat_offset_100f1f58 with the parameters. If the low two bits were set,
 *   it enters a loop calling poll_status_and_dispatch up to 100 times until it returns
 *   zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_retry(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  bool bVar3;
  uint8_t auStack_a [2];
  
  if (((int)param_1 >> 8 == 0x12) || ((int)param_1 >> 8 == 0x19)) {
    if (DAT_80048094/*SDRAM*/ == '\x01') {
      param_2 = param_2 & 0xffff | 6;
    }
    else {
      param_2 = param_2 & 0xfff9;
    }
  }
  bVar3 = (param_1 & 3) != 0;
  if (bVar3) {
    set_two_register_bits(1,0xf);
  }
  store_value_at_dat_offset_100f1f4a(param_2);
  store_value_at_dat_offset_100f1f58(param_1);
  if (bVar3) {
    iVar2 = 0;
    do {
      iVar1 = poll_status_and_dispatch((void *)auStack_a);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 100);
  }
  return;
}
