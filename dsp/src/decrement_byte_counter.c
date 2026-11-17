/* @k10d decrement_byte_counter @ 0x000c7470
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Decments the byte at DAT_0003c45d by one if it is non-zero, otherwise leaves it zero.
 * summary:
 *   The function reads the global byte DAT_0003c45d. If the value is zero, it writes zero
 *   back (a no-op). If the value is non-zero, it decrements it by one and stores the
 *   result. There are no callees and no other side effects. The role of DAT_0003c45d is
 *   unknown from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int decrement_byte_counter(void)

{
  int iVar1;
  
  if (DAT_0003c45d == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_0003c45d - 1;
  }
  DAT_0003c45d = (char)iVar1;
  return iVar1;
}
