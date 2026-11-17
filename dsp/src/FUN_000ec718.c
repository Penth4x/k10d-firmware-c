/* @k10d FUN_000ec718 @ 0x000ec718
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ec718(void)

{
  byte bVar1;
  byte bVar2;
  
  if (((DAT_0003c493 != -1) && ((DAT_0003c036 & 1) == 0)) && (_DAT_0003c6ee != 0)) {
    DAT_00000050 = (char)_DAT_0003c6ee << 1;
    DAT_00000056 = 0x12;
    if (_DAT_0003c6ee < 0x5dc) {
      DAT_0003c00c = DAT_0003c00c | 0x40;
      write_masked_field_and_call_two_routines(0x1b,DAT_0003c00c);
      while (bVar2 = DAT_00000057 | 1, (DAT_00000057 & 4) == 0) {
        if (((DAT_000000cf & 4) != 0) && ((DAT_00000002 & 2) != 0)) {
          DAT_000000cf = DAT_000000cf & 0xfb;
          if (_DAT_0003c1e0 == 0) {
            DAT_00000002 = DAT_00000002 & 0xfd;
          }
          else {
            _DAT_0003c1e0 = _DAT_0003c1e0 + -1;
          }
        }
      }
    }
    else {
      if ((DAT_0003c589 & 0x40) != 0) {
        DAT_000000c8 = 0xd0;
        DAT_000000ce = 0x12;
        DAT_000000cf = DAT_000000cf | 1;
      }
      DAT_0003c00c = DAT_0003c00c | 0x40;
      write_masked_field_and_call_two_routines(0x1b,DAT_0003c00c);
      bVar2 = DAT_00000057 | 1;
      bVar1 = DAT_00000057;
      while (DAT_00000057 = bVar2, bVar2 = DAT_00000057, (bVar1 & 4) == 0) {
        if (((DAT_000000cf & 4) != 0) && ((DAT_00000002 & 2) != 0)) {
          DAT_000000cf = DAT_000000cf & 0xfb;
          if (_DAT_0003c1e0 == 0) {
            DAT_00000002 = DAT_00000002 & 0xfd;
          }
          else {
            _DAT_0003c1e0 = _DAT_0003c1e0 + -1;
          }
        }
        bVar1 = DAT_00000057;
        if ((DAT_0000004f & 4) != 0) {
          DAT_0000004f = DAT_0000004f & 0xfb;
          update_status_flags_and_counters_000de274(1000);
          bVar2 = DAT_00000057;
          bVar1 = DAT_00000057;
        }
      }
    }
    DAT_00000057 = bVar2;
    DAT_0003c00c = DAT_0003c00c & 0xbf;
    write_masked_field_and_call_two_routines(0x1b,DAT_0003c00c);
    DAT_00000057 = DAT_00000057 & 0xfe;
  }
  DAT_0000012a = 0xc0;
  DAT_0000012c = 0x2f;
  return;
}
