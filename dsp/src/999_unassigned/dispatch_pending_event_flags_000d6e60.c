/* @k10d dispatch_pending_event_flags_000d6e60 @ 0x000d6e60
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks two 8-bit flag words and calls a handler for each set bit, clearing the bit
 *   before dispatch.
 * summary:
 *   The function iterates over bits 0-7 of DAT_0003c337 and bits 0-1 of DAT_0003c336. For
 *   each set bit, it clears the bit in the flag word and invokes a corresponding handler
 *   function (e.g., FUN_000d6266 for bit 0). The bit 1 handler in DAT_0003c336 includes
 *   additional logic involving verify_buffer_checksum and polling loops on DAT_00000001. No
 *   verified callee names are available to identify the specific subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_pending_event_flags_000d6e60(void)

{
  int iVar1;
  
  if ((DAT_0003c337 & 1) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0xfe;
    FUN_000d6266();
  }
  if ((DAT_0003c337 & 2) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0xfd;
    FUN_000d6270();
  }
  if ((DAT_0003c337 & 4) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0xfb;
    FUN_000d627a();
  }
  if ((DAT_0003c337 & 8) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0xf7;
    wait_for_status_bit_clear_000e94a2();
    FUN_000d6284();
  }
  if ((DAT_0003c337 & 0x10) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0xef;
    dispatch_event_by_code_000ede2c(DAT_0003c340);
    call_d5afc_with_0xa4();
  }
  if ((DAT_0003c337 & 0x20) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0xdf;
    call_d5afc_with_0xa5();
  }
  if ((DAT_0003c337 & 0x40) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0xbf;
    FUN_000d62a2();
  }
  if ((DAT_0003c337 & 0x80) != 0) {
    DAT_0003c337 = DAT_0003c337 & 0x7f;
    DAT_0003c13c = DAT_0003c083;
    FUN_000e03e8();
    FUN_000d62ac();
  }
  if ((DAT_0003c336 & 1) != 0) {
    DAT_0003c336 = DAT_0003c336 & 0xfe;
    dispatch_mode_state_machine();
    if ((DAT_0003c336 & 1) != 0) {
      DAT_0003c336 = DAT_0003c336 & 0xfe;
      FUN_000d62b6();
    }
  }
  if ((((DAT_0003c336 & 2) != 0) && (DAT_0003c336 = DAT_0003c336 & 0xfd, (DAT_0003c126 & 0x20) != 0)
      ) && ((DAT_0003c143 & 0x40) != 0)) {
    DAT_0000000a = DAT_0000000a & 0x7f;
    call_d5afc_with_0xa9();
    iVar1 = poll_and_store_byte_stream();
    if (iVar1 == 0) {
      iVar1 = verify_buffer_checksum(0x3d000);
      if (iVar1 == 1) {
        wait_and_copy_byte_to_dat(1);
      }
      else {
        wait_and_copy_byte_to_dat(0);
      }
      DAT_0000000a = DAT_0000000a & 0x7f;
      do {
        if ((DAT_00000005 & 2) == 0) goto LAB_000d6fc2;
      } while ((_DAT_00000001 & 0x4000000) == 0);
      if ((_DAT_00000001 & 7) >> 2 == 0) {
        DAT_0003c030 = DAT_0003c030 & 0xfb;
      }
      else {
        DAT_0003c030 = DAT_0003c030 | 4;
      }
      FUN_000d5fbe();
LAB_000d6fc2:
      do {
      } while ((_DAT_00000001 & 0x4000000) == 0);
      if ((_DAT_00000001 & 7) >> 2 == 0) {
        DAT_0003c030 = DAT_0003c030 & 0xfb;
      }
      else {
        DAT_0003c030 = DAT_0003c030 | 4;
      }
      FUN_000d5fbe();
      initialize_buffer_pair();
      DAT_0003f3f2 = DAT_0003f3f2 & 0xfd;
      copy_two_byte_value();
    }
  }
  return;
}
