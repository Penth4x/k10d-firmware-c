/* @k10d process_key_event @ 0x000da51a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Handles a key input event by reading a value from a lookup table and updating state
 *   flags.
 * summary:
 *   The function checks a status flag in DAT_0003c4de. If clear, it initializes state. If
 *   set, it uses DAT_0003c493 to index into a table at 0x000fc1ac, retrieves a short value,
 *   and calls busy_wait_on_mode_flag with an offset. It then waits on a timer/counter
 *   (DAT_00000052), calls write_32_shorts_via_mmio to process data into stack buffers, and
 *   finally calls compute_16_sample_histograms with the results. The logic suggests
 *   handling a specific input or state transition based on the value in DAT_0003c493.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_key_event(void)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t auStack_218 [256];
  uint8_t auStack_118 [256];
  
  uVar3 = 0;
  if ((DAT_0003c4de & 0x10) == 0) {
    FUN_000dab1c();
    DAT_00000050 = 0xff;
    DAT_00000056 = 3;
  }
  else {
    if (DAT_0003c493 == '\b') {
      iVar2 = 0;
    }
    else if (DAT_0003c493 == '\t') {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    sVar1 = *(short *)(&DAT_000fc1ac + (uint)DAT_0003c49e * 2 + iVar2 * 8);
    FUN_000db218();
    busy_wait_on_mode_flag(sVar1 + -0xbe);
    bRam00000000 = bRam00000000 & 0xbf;
    FUN_000dab1c();
    DAT_00000050 = 0xff;
    DAT_00000056 = 3;
    FUN_000db218();
  }
  do {
  } while (0xff69 < _DAT_00000052);
  write_32_shorts_via_mmio((int)auStack_218);
  if ((((DAT_0003c492 == '\x03') || (DAT_0003c492 == '\x05')) || (DAT_0003c493 == '\b')) ||
     (DAT_0003c493 == '\n')) {
    do {
    } while (0xfcad < _DAT_00000052);
    write_32_shorts_via_mmio((int)auStack_118);
    uVar3 = 1;
  }
  DAT_00000057 = DAT_00000057 & 0xfd;
  compute_16_sample_histograms((int)auStack_218,(int)auStack_118,uVar3);
  poll_and_average_status_bytes();
  return;
}
