/* @k10d process_flag_0x10_event @ 0x000e37a8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Handles a state transition triggered by bit 4 of DAT_0003c038, updating related status
 *   flags and calling helper routines.
 * summary:
 *   The function checks if bit 4 (0x10) of DAT_0003c038 is set. If so, it modifies
 *   DAT_00000501 and DAT_00000401, calls write_masked_field_and_call_two_routines and
 *   call_d5678_with_0x14, and potentially enters a loop that calls forward_byte_with_flag
 *   with values from a table at 0xfc5e0. It updates bits in DAT_0003c030 and DAT_0003c038
 *   based on the state of _DAT_00000001 and other flags. Finally, it restores the original
 *   values of DAT_00000501 and DAT_00000401 and calls
 *   write_masked_field_and_call_two_routines again.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_flag_0x10_event(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = DAT_00000501;
  bVar1 = DAT_00000401;
  iVar4 = 1;
  uVar5 = 0;
  if ((DAT_0003c038 & 0x10) != 0) {
    DAT_00000501 = DAT_00000501 | 6;
    DAT_00000401 = DAT_00000401 & 0xf9;
    write_masked_field_and_call_two_routines(6,0xf);
    call_d5678_with_0x14();
    call_d5678_with_0x14();
    FUN_000e2fc2(0);
    if (DAT_0003c3ee == '\n') {
      iVar3 = set_flag_and_call_helper_000db7a8();
      if (iVar3 != 0) {
        call_d5642_with_100();
      }
      if (((DAT_0003c038 & 0x10) != 0) && ((_DAT_00000001 & 0x4000000) == 0)) {
        while ((_DAT_00000001 & 0x2000000) != 0) {
          forward_byte_with_flag(*(ushort *)(&DAT_000fc5e0 + iVar4 * 2) & 0x7fff);
          iVar4 = iVar4 + 1;
          if (iVar4 == 0xc) {
            iVar4 = 1;
          }
          FUN_000d5642(1);
          uVar6 = uVar5 + 1;
          uVar5 = uVar6 & 0xffff;
          if ((uVar6 & 0x7f) == 0x7f) {
            FUN_000e2fc2(0);
            if (((DAT_0003c000 & 0x80) != 0) || ((_DAT_00000001 & 0x2000000) == 0)) {
              if ((_DAT_00000001 & 3) >> 1 == 0) {
                DAT_0003c030 = DAT_0003c030 & 0xfd;
              }
              else {
                DAT_0003c030 = DAT_0003c030 | 2;
              }
              FUN_000d5fbe();
            }
            if ((_DAT_00000001 & 0x4000000) != 0) {
              DAT_0003c41d = DAT_0003c41d & 0xfe;
              DAT_0003c038 = DAT_0003c038 & 0xef;
            }
            if ((DAT_0003c41d & 1) == 0) {
              DAT_0003c038 = DAT_0003c038 & 0xef;
            }
          }
          if (((DAT_0003c038 & 0x10) == 0) || ((_DAT_00000001 & 0x4000000) != 0)) break;
        }
      }
      DAT_0003c41d = DAT_0003c41d & 0xfe;
      DAT_0003c038 = DAT_0003c038 & 0xef;
      clear_state_flags_and_notify();
      write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a & 2);
    }
    else {
      DAT_0003c038 = DAT_0003c038 & 0xef;
      clear_state_flags_and_notify();
      write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a & 2);
    }
    if ((_DAT_00000001 & 7) >> 2 == 0) {
      DAT_0003c030 = DAT_0003c030 & 0xfb;
    }
    else {
      DAT_0003c030 = DAT_0003c030 | 4;
    }
    if ((_DAT_00000001 & 3) >> 1 == 0) {
      DAT_0003c030 = DAT_0003c030 & 0xfd;
    }
    else {
      DAT_0003c030 = DAT_0003c030 | 2;
    }
    DAT_00000401 = bVar1;
    DAT_00000501 = bVar2;
    write_masked_field_and_call_two_routines(6,0);
  }
  return;
}
