/* @k10d dispatch_event_if_flag_clear_103b68e6 @ 0x103b68e6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Checks a byte flag at offset 0x57 and dispatches an event via a virtual call or direct
 *   function call if the flag is zero.
 * summary:
 *   The function first checks if the byte at param_1 + 0x57 is zero. If so, and if param_2
 *   is 0x1a, it sets the flag to 1 and invokes a virtual method (slot 0x74/8) with
 *   arguments 0x1120004 and 0. It then unconditionally calls the function at 0x1039fe1a
 *   with the original parameters. The specific role of the event or subsystem is not
 *   determinable from the provided pseudocode and lack of named callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_if_flag_clear_103b68e6(cls_10566724 *param_1,int param_2)

{
  if (param_1->field_0x57 == '\0') {
    if (param_2 == 0x1a) {
      param_1->field_0x57 = '\x01';
      (((vtbl_entry*)(param_1->field_0x0))[14].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
    }
    (*(code *)0x1039fe1a/*ROM*/)(param_1,param_2);
  }
  return;
}
