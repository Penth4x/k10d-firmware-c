/* @k10d set_flag_and_halt @ 0x100f1c5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * note: B-7 misnomer — a coprocessor command+ack handshake (sibling of set_error_flag_and_halt,
 *   different mailbox offsets/command). Writes cmd 0x80e->*0x58, 0x813->*0x5e, then waits param_1
 *   times for *0x5e & 4 (ack from the vec31 IRQ), clearing it each time, then clears *0x5e. The
 *   decompiler collapsed the ack poll into __halt() and dropped the continuation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_halt(int param_1)

{
  volatile unsigned short *reg58 = (volatile unsigned short *)0x58;
  volatile unsigned short *reg5e = (volatile unsigned short *)0x5e;
  int i;

  if (param_1 == 0) {
    return;
  }
  *reg5e = 0;
  *reg58 = 0x80e;
  *reg5e = 0x813;
  for (i = 0; i < param_1; i++) {
    while ((*reg5e & 4) == 0) {
      /* wait for coprocessor ack (bit 2 of 0x5e) */
    }
    *reg5e = (unsigned short)(*reg5e & 0xfffb);  /* consume the ack */
  }
  *reg5e = 0;
}
