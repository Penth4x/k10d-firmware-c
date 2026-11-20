/* @k10d dispatch_event_by_type_and_code_1036840e @ 0x1036840e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 010_capture_menu_init (unit names are model-proposed)
 * purpose:
 *   Dispatches an event based on a type field in param_2, handling type 1 with a counter
 *   decrement and type 4 with a code-filtered call.
 * summary:
 *   Reads the first int of param_2 as a type. If type is 1, stores param_2[1] at offset
 *   0x114 of param_1 and calls a virtual method at offset 0x6c, decrementing the result via
 *   set_index_and_dispatch_event if non-zero. If type is 4, it validates param_2[1] against
 *   a set of allowed codes (0,1,2,4,5,6,7,10,12,41) and selects a data pointer from
 *   _DAT_105bb5f4 or _DAT_105bb5f8 (based on code and DAT_800043a1), then calls
 *   forward_param_to_global_offset with param_1 and the selected pointer. For code 12, it
 *   sets bytes at offsets 0x14 and 0x15 of param_1 to 1 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_type_and_code_1036840e(cls_10557a18 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    param_1->field_0x114 = param_2[1];
    iVar1 = (*(code *)0x1038202a/*ROM*/)(&param_1->field_0x6c);
    if (iVar1 != 0) {
      set_index_and_dispatch_event((cls_10558e74 *)&param_1->field_0x6c,iVar1 + -1);
    }
  }
  else if ((iVar1 != 2) && (iVar1 == 4)) {
    uVar2 = param_2[1];
    uVar3 = _DAT_105bb5f4/*ROM*/;
    if (uVar2 != 7) {
      if (uVar2 < 8) {
        if (((uVar2 != 0) && (uVar2 != 1)) && (uVar2 != 3)) {
          return;
        }
      }
      else if (uVar2 != 10) {
        if (uVar2 == 0xc) {
          param_1->field_0x14 = 1;
          param_1->field_0x15 = 1;
          return;
        }
        if (uVar2 != 0x29) {
          return;
        }
        if (DAT_800043a1/*SDRAM*/ != '\0') {
          uVar3 = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    forward_param_to_global_offset(param_1,uVar3);
  }
  return;
}
