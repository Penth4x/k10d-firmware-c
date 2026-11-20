/* @k10d dispatch_virtual_by_byte_match @ 0x1042ba7e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Returns the result of a virtual call selected by matching a byte at param_3+0x858
 *   against two bytes in param_1.
 * summary:
 *   Reads a signed char from param_3+0x858. If it is not -1, it compares it to the bytes at
 *   param_1+5 and param_1+6. On a match, it performs a Cfront-style virtual call using the
 *   vtable pointer at *param_1 and the this-adjustment shorts at *param_1+0x20 or
 *   *param_1+0x28. If no match or the byte is -1, it returns 0x81. No known callees are
 *   provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_by_byte_match(int *param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  uint32_t uVar2;
  
  cVar1 = *(char *)(param_3 + 0x858);
  uVar2 = 0x81;
  if (cVar1 != -1) {
    if (cVar1 == *(char *)((int)param_1 + 5)) {
      uVar2 = (((vtbl_entry*)(*param_1))[4].fn)((int)((vtbl_entry*)(*param_1))[4].adj + (int)param_1);
    }
    else if (cVar1 == *(char *)((int)param_1 + 6)) {
      uVar2 = (((vtbl_entry*)(*param_1))[5].fn)((int)((vtbl_entry*)(*param_1))[5].adj + (int)param_1);
    }
    else {
      uVar2 = 0x81;
    }
  }
  return uVar2;
}
