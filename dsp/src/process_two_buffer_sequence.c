/* @k10d process_two_buffer_sequence @ 0x000db016
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Initializes two 256-byte buffers and processes them via helper functions based on a
 *   parameter threshold.
 * summary:
 *   The function calls set_flag_and_call_helper_000db7a8 and FUN_000db218, then invokes
 *   busy_wait_on_mode_flag with an index derived from param_1 and param_2. It sets flags in
 *   bRam00000000 and DAT_00000050/56. If param_1 < 3, it waits on DAT_00000052, processes
 *   auStack_218 and auStack_118 via write_32_shorts_via_mmio, and calls
 *   compute_16_sample_histograms; otherwise, it clears a bit in DAT_00000057 and calls
 *   FUN_000d5642. Finally, it clears bit 1 of DAT_00000057.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_two_buffer_sequence(int param_1,int param_2)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint in_ps;
  byte in_CF;
  byte in_VF;
  byte in_ZF;
  byte in_NF;
  byte bVar2;
  byte bVar3;
  uint8_t auStack_218 [256];
  uint8_t auStack_118 [256];
  
  bVar3 = 0;
  bVar2 = 0;
  puVar1 = auStack_218;
  set_flag_and_call_helper_000db7a8();
  *(uint *)(puVar1 + -4) =
       in_ps & 0xffffffc0 | (uint)(bVar3 & 1) * 0x20 | (uint)(bVar2 & 1) * 0x10 |
       (uint)(in_NF & 1) * 8 | (uint)(in_ZF & 1) * 4 | (uint)(in_VF & 1) * 2 | (uint)(in_CF & 1);
  FUN_000db218();
  busy_wait_on_mode_flag(*(uint16_t *)(&DAT_000fc1ac + param_2 * 2 + param_1 * 8));
  bRam00000000 = bRam00000000 & 0xbf | 4;
  DAT_00000050 = 0xff;
  DAT_00000056 = 3;
  call_d5678_with_0x14();
  bRam00000000 = bRam00000000 & 0xfb | 0x40;
  if (param_1 < 3) {
    do {
    } while (0xff69 < _DAT_00000052);
    write_32_shorts_via_mmio((int)auStack_218);
    do {
    } while (0xfcad < _DAT_00000052);
    write_32_shorts_via_mmio((int)auStack_118);
    compute_16_sample_histograms((int)auStack_218,(int)auStack_118,1);
    poll_and_average_status_bytes();
  }
  else {
    DAT_00000057 = DAT_00000057 & 0xfd;
    FUN_000d5642(5);
    bRam00000000 = bRam00000000 & 0xbf | 4;
    call_d5678_with_0x14();
    bRam00000000 = bRam00000000 & 0xfb | 0x40;
  }
  DAT_00000057 = DAT_00000057 & 0xfd;
  return;
}
