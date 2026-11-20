/* @k10d configure_and_wait_status_flags @ 0x000e873a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Modifies multiple global flag registers and waits for specific bits in a status word
 *   before calling a handler.
 * summary:
 *   The function performs a series of bitwise operations on global variables (DAT_0000000a,
 *   DAT_0000040a, etc.) to set or clear specific control bits. It then enters a busy-wait
 *   loop polling bit 9 (0x200) of _DAT_00000003. Depending on the state of other flags, it
 *   calls either clear_and_set_flag_bits_000d59c4 or branch_on_flag_bit7. The specific
 *   hardware or subsystem context is not identifiable from the provided pseudocode and
 *   unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000e8812) */
/* WARNING: Removing unreachable block (ram,0x000e8824) */
/* WARNING: Removing unreachable block (ram,0x000e87e0) */
/* WARNING: Removing unreachable block (ram,0x000e87f2) */
/* WARNING: Removing unreachable block (ram,0x000e8860) */
/* WARNING: Removing unreachable block (ram,0x000e8872) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_and_wait_status_flags(void)

{
  DAT_0000000a = DAT_0000000a & 0x3f;
  DAT_0000040a = DAT_0000040a | 0x40;
  DAT_0000042a = DAT_0000042a & 0xbf;
  DAT_00000405 = DAT_00000405 & 0xfe;
  DAT_000000d1 = DAT_000000d1 & 0xfe;
  DAT_00000402 = DAT_00000402 & 0x7f;
  if ((DAT_0003c035 & 0x80) == 0) {
    _DAT_00000003 = CONCAT13((char)_DAT_00000004,_DAT_00000004) & 0xfdffffff;
  }
  else {
    _DAT_00000003 = CONCAT13((char)_DAT_00000004,_DAT_00000004) & 0xfcffffff;
  }
  if ((DAT_0003c035 & 0x80) == 0) {
    _DAT_00000003 = _DAT_00000003 | 0x1000000;
    DAT_0003c069 = 0xf;
  }
  else {
    DAT_0003c069 = 5;
  }
  DAT_00000403 = DAT_00000403 | 3;
  DAT_00000423 = 0;
  DAT_0000048c = 6;
  DAT_0003c066 = DAT_0003c066 & 0xfd;
  if ((DAT_0003c020 & 2) == 0) {
    do {
    } while ((_DAT_00000003 & 0x200) == 0);
  }
  else {
    do {
    } while ((_DAT_00000003 & 0x200) == 0);
  }
  if (((DAT_0003c020 & 2) == 0) || ((_DAT_00000003 & 0x100) == 0)) {
    DAT_0000000a = DAT_0000000a | 0x80;
    do {
    } while ((_DAT_00000003 & 0x200) != 0);
    clear_and_set_flag_bits_000d59c4();
    DAT_0000000a = DAT_0000000a & 0x7f;
  }
  else {
    branch_on_flag_bit7();
  }
  if ((DAT_0003c066 & 2) != 0) {
    DAT_0000000a = DAT_0000000a & 0xfd;
  }
  return;
}
