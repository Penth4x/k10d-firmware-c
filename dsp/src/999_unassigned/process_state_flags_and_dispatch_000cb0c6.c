/* @k10d process_state_flags_and_dispatch_000cb0c6 @ 0x000cb0c6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Copies a 16-byte constant block and branches on multiple flag bits to call various
 *   handler functions.
 * summary:
 *   The function first copies 16 bytes from DAT_0003c4b0 to address 0x3c4c0. It then
 *   evaluates a complex set of conditions based on flags in DAT_0003c396, DAT_0003c41d,
 *   DAT_0003c491, DAT_0003c066, DAT_0003c030, DAT_0003c02f, and DAT_0003c000. Depending on
 *   these flags, it calls one of several functions (update_status_byte_flags_000f661c,
 *   dispatch_state_machine_000cb1a0, dispatch_nibble_table_entries) and often calls
 *   compare_four_byte_blocks. It also modifies bits in DAT_0003c4bf and DAT_0003c4da.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_state_flags_and_dispatch_000cb0c6(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 4;
  do {
    *(uint8_t *)(iVar1 + 0x3c4c0) = (&DAT_0003c4b0)[iVar1];
    *(uint8_t *)(iVar1 + 0x3c4c1) = (&DAT_0003c4b1)[iVar1];
    *(uint8_t *)(iVar1 + 0x3c4c2) = (&DAT_0003c4b2)[iVar1];
    *(uint8_t *)(iVar1 + 0x3c4c3) = (&DAT_0003c4b3)[iVar1];
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (0 < iVar2);
  if (((DAT_0003c396 & 4) == 0) &&
     (((DAT_0003c41d & 2) == 0 || (iVar1 = dispatch_mode_transition_000f6b70(), iVar1 != 1)))) {
    clear_state_flags_and_set_bit();
    if ((DAT_0003c491 & 1) == 0) {
      if (((DAT_0003c066 & 1) == 0) || ((DAT_0003c066 & 0x10) != 0)) {
        if (((DAT_0003c030 & 4) == 0) && (((DAT_0003c02f & 1) != 0 && ((DAT_0003c000 & 8) != 0)))) {
          update_status_byte_flags_000f661c();
        }
        else {
          DAT_0003c4bf = DAT_0003c4bf & 0xf7;
          DAT_0003c4da = DAT_0003c4da & 0x7f;
        }
      }
      else if ((DAT_0003c396 & 8) == 0) {
        dispatch_state_machine_000cb1a0();
      }
      else {
        DAT_0003c4da = DAT_0003c4da & 0x7f;
      }
      compare_four_byte_blocks();
    }
    else {
      dispatch_nibble_table_entries();
      compare_four_byte_blocks();
      dispatch_mode_transition_000dfc72(1,0);
    }
  }
  return;
}
