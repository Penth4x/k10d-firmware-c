/* @k10d dispatch_on_flag_and_index @ 0x000c45be
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects and calls one of three routines based on two flag bits and an index value.
 * summary:
 *   Checks bit 0 of DAT_0003c588 and bit 0 of DAT_0003c589. If the first flag is clear and
 *   the second is set, it either calls empty_stub_000c4620 when DAT_0003c492 is 0xff, or
 *   calls update_status_byte_bits followed by a function pointer from the table at
 *   PTR_FUN_000f9ba4 indexed by DAT_0003c492. If the first flag is set, it only calls
 *   update_status_byte_bits. The role of the flags and index is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_and_index(void)

{
  if ((DAT_0003c588 & 1) == 0) {
    if ((DAT_0003c589 & 1) != 0) {
      if (DAT_0003c492 == 0xff) {
        empty_stub_000c4620();
      }
      else {
        update_status_byte_bits();
        (*(code *)(&PTR_FUN_000f9ba4)[DAT_0003c492])();
      }
    }
  }
  else {
    update_status_byte_bits();
  }
  return;
}
