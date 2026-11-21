/* @k10d set_error_flag_and_halt @ 0x100f0a1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * note: the "halt" name is a decompiler misnomer. This issues a command via the low-memory
 *   coprocessor mailbox (0x48/0x4e) and waits for param_1 hardware acks (bit 2 of 0x4e, raised
 *   by the vec31 coprocessor IRQ), clearing the ack each time, then clears the mailbox. The
 *   decompiler collapsed the ack poll-wait into __halt() and dropped the continuation
 *   ("Removing unreachable block (ram,0x100f0a58)"), which hangs the recompile forever.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_error_flag_and_halt(int param_1)

{
  volatile unsigned short *reg48 = (volatile unsigned short *)0x48;
  volatile unsigned short *reg4e = (volatile unsigned short *)0x4e;
  int i;

  if (param_1 == 0) {
    return;
  }
  *reg4e = 0;
  *reg48 = 0x80d;
  *reg4e = 0x813;
  /* param_1 < 0 falls straight through to the final clear (the loop body never runs). */
  for (i = 0; i < param_1; i++) {
    while ((*reg4e & 4) == 0) {
      /* spin until the coprocessor sets the ack bit (vec31 IRQ handler) */
    }
    *reg4e = (unsigned short)(*reg4e & 0xfffb);  /* consume the ack */
  }
  *reg4e = 0;
}
