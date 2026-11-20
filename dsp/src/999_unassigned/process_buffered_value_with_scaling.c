/* @k10d process_buffered_value_with_scaling @ 0x000d0d76
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Reads a value from a buffer, optionally scales it, and passes the result to an output
 *   function.
 * summary:
 *   The function checks several state flags (DAT_0003ce62, DAT_0003c036, DAT_0003ce08)
 *   before proceeding. It retrieves a value from DAT_0003f2db, potentially scales it using
 *   a factor from DAT_0003f4b1 and a value returned by unsigned_divide, and then calls
 *   FUN_000d0fa6 with the result. It increments an index (DAT_0003ce63) and sets a flag
 *   (bit 5 of DAT_0003cf0e) if the index reaches a limit. If the processed value is zero,
 *   it clears a flag and calls configure_timer_channels.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_buffered_value_with_scaling(void)

{
  int iVar1;
  uint uVar2;
  
  if ((DAT_0003ce62 & 1) != 0) {
    if ((DAT_0003c036 & 1) == 0) {
      if ((DAT_0003ce08 & 2) == 0) {
        DAT_0003ce17 = DAT_0003f2db;
        uVar2 = (uint)DAT_0003f2da;
        if (DAT_0003f4b5 >> 4 != 0) {
          iVar1 = unsigned_divide(DAT_0003ce63, __frv_reg_unset(5));
          DAT_0003ce17 = (DAT_0003f4b1 & 0xf) * (char)iVar1 + DAT_0003ce17;
          uVar2 = uVar2 + (DAT_0003f4b5 & 0xf) * iVar1;
        }
        FUN_000d0fa6(uVar2);
        DAT_0003ce63 = DAT_0003ce63 + 1;
        if ((uint)DAT_0003ce63 == (DAT_0003f2dd + 8) - (uint)DAT_0003ce67) {
          DAT_0003cf0e = DAT_0003cf0e | 0x20;
        }
        if ((DAT_0003ce62 & 2) == 0) {
          set_bit1_of_dat_0003ce62(1);
        }
        DAT_0003ce08 = DAT_0003ce08 | 2;
      }
      if (DAT_0003ce17 == '\0') {
        DAT_0003ce08 = DAT_0003ce08 & 0xfd;
        configure_timer_channels();
      }
    }
    else {
      DAT_0003ce01 = DAT_0003ce01 & 0x7f;
      DAT_0003ce62 = DAT_0003ce62 & 0xfe;
      DAT_0003ce08 = DAT_0003ce08 & 0xfd;
    }
  }
  return;
}
