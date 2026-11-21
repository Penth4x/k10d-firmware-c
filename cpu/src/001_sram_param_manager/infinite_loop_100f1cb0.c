/* @k10d infinite_loop_100f1cb0 @ 0x100f1cb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * note: B-7 misnomer — a coprocessor command+single-ack handshake. Writes cmd 0x672->*0x58,
 *   0x213->*0x5e, waits once for *0x5e & 4 (ack from the vec31 IRQ), then clears *0x5e. The
 *   decompiler collapsed the ack poll into __halt() and dropped the continuation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void infinite_loop_100f1cb0(void)

{
  volatile unsigned short *reg58 = (volatile unsigned short *)0x58;
  volatile unsigned short *reg5e = (volatile unsigned short *)0x5e;

  *reg5e = 0;
  *reg58 = 0x672;
  *reg5e = 0x213;
  while ((*reg5e & 4) == 0) {
    /* wait for coprocessor ack (bit 2 of 0x5e) */
  }
  *reg5e = 0;
}
