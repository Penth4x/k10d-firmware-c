/* @k10d reset_state_by_mode @ 0x000ecede
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Resets a block of state variables and calls mode-specific routines based on param_2.
 * summary:
 *   The function stores param_1 into DAT_0003c25a and checks a flag in DAT_0003f3f2. If the
 *   flag is clear, it resets counters DAT_0003c24c and DAT_0003c24e to 4, clears other
 *   state variables, and sets bit 7 of DAT_0003c00b. It branches on param_2 (0, 1, or 2) to
 *   call update_state_and_wait or wait_and_update_state_flags and sets DAT_0003c25b
 *   accordingly. It then adjusts offsets in DAT_0003c228-22a based on flags and calls
 *   select_value_by_index and select_index_from_flags. Finally, it clears bit 7 of
 *   DAT_0003c00b and calls write_masked_field_and_call_two_routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int reset_state_by_mode(uint16_t param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  short sStack_1e;
  
  sStack_1e = 4;
  DAT_0003c25a = (uint8_t)param_1;
  if ((DAT_0003f3f2 & 1) == 0) {
    if ((param_2 == 0) || (param_2 == 1)) {
      DAT_0003c24d = DAT_0003c24c;
      DAT_0003c24c = 4;
    }
    if ((param_2 == 0) || (param_2 == 2)) {
      DAT_0003c24f = DAT_0003c24e;
      DAT_0003c24e = 4;
    }
    DAT_0003c1ec = DAT_0003c1ec & 0x1f;
    DAT_0003c256 = 0;
    DAT_0003c257 = 0;
    DAT_0003c252 = '\0';
    DAT_0003c253 = '\0';
    DAT_0003c00b = DAT_0003c00b | 0x80;
    write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    if (param_2 == 0) {
      DAT_0003c25b = 0;
      update_state_and_wait();
      wait_and_update_state_flags();
    }
    else if (param_2 == 1) {
      DAT_0003c25b = 1;
      update_state_and_wait();
    }
    else {
      DAT_0003c25b = 2;
      wait_and_update_state_flags();
    }
    if ((DAT_0003c02b & 0x80) == 0) {
      dispatch_state_transition_000ed122(param_2);
      DAT_0003c251 = DAT_0003ce0a - DAT_0003c02d;
      if ((DAT_0003c066 & 1) == 0) {
        DAT_0003c252 = '\x02';
        DAT_0003c253 = '\x02';
      }
      if ((((DAT_0003c022 & 0x20) != 0) && ((DAT_0003c036 & 1) == 0)) && ((DAT_0003c066 & 1) == 0))
      {
        DAT_0003c252 = DAT_0003c252 + -1;
        DAT_0003c253 = DAT_0003c253 + -1;
      }
    }
    DAT_0003c00b = DAT_0003c00b & 0x7f;
    write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    write_masked_field_and_call_two_routines(0xf,0);
    if ((param_2 == 0) || (param_2 == 2)) {
      DAT_0003c25b = 2;
      compute_sixteen_byte_table();
      select_value_by_index(param_1);
      cVar1 = DAT_0003c228 + DAT_0003c253;
      DAT_0003c228 = cVar1 + -8;
      cVar2 = DAT_0003c229 + DAT_0003c253;
      DAT_0003c229 = cVar2 + -8;
      DAT_0003c22a = DAT_0003c22a + DAT_0003c253 + -8;
      if ((DAT_0003c020 & 0x20) == 0) {
        DAT_0003c228 = cVar1 + -0xb;
        DAT_0003c229 = cVar2 + -0xb;
      }
      if ((DAT_0003c1ec & 2) != 0) {
        DAT_0003c228 = DAT_0003c228 + -2;
        DAT_0003c229 = DAT_0003c229 + -2;
      }
      sStack_1e = select_index_from_flags();
    }
    if ((param_2 == 0) || (param_2 == 1)) {
      DAT_0003c25b = 1;
      compute_sixteen_byte_table();
      select_value_by_index(param_1);
      cVar1 = DAT_0003c228 + DAT_0003c252;
      DAT_0003c228 = cVar1 + -7;
      cVar2 = DAT_0003c229 + DAT_0003c252;
      DAT_0003c229 = cVar2 + -7;
      DAT_0003c22a = DAT_0003c22a + DAT_0003c252 + -7;
      if ((DAT_0003c020 & 0x20) == 0) {
        DAT_0003c228 = cVar1 + -10;
        DAT_0003c229 = cVar2 + -10;
      }
      if ((DAT_0003c1ec & 2) != 0) {
        DAT_0003c228 = DAT_0003c228 + -2;
        DAT_0003c229 = DAT_0003c229 + -2;
      }
      sStack_1e = select_index_from_flags();
    }
    iVar3 = (int)sStack_1e;
  }
  else {
    DAT_0003c24c = 4;
    DAT_0003c24e = 4;
    iVar3 = 4;
  }
  return iVar3;
}
