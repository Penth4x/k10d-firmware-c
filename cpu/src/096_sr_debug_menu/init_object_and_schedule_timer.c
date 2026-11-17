/* @k10d init_object_and_schedule_timer @ 0x1040da9c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Initializes an object's state field via a nested query loop and schedules a 1000ms
 *   timer.
 * summary:
 *   The function calls two unknown initializers, then conditionally invokes a virtual
 *   method (slot 8) if a flag at offset 4 is zero. It computes a value for param_1[0x12] by
 *   repeatedly calling read_sysparam_store_entry with specific arguments until a match is
 *   found, mapping results to values 1-6. Finally, it calls several setup functions on the
 *   object and its sub-structure, ending with check_heap_alloc_success which likely sets a
 *   timer for 1000ms.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_schedule_timer(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  param_1[0x12] = 0;
  iVar1 = read_sysparam_store_entry(param_1[0x13],1);
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = read_sysparam_store_entry(param_1[0x13],2);
    if (iVar1 == 1) {
      iVar1 = 2;
    }
    else {
      iVar1 = read_sysparam_store_entry(param_1[0x13],2);
      if (iVar1 == 2) {
        iVar1 = 3;
      }
      else {
        iVar1 = read_sysparam_store_entry(param_1[0x13],2);
        if (iVar1 == 3) {
          iVar1 = 4;
        }
        else {
          iVar1 = read_sysparam_store_entry(param_1[0x13],3);
          if (iVar1 == 1) {
            iVar1 = 5;
          }
          else {
            iVar1 = read_sysparam_store_entry(param_1[0x13],4);
            if (iVar1 != 4) goto LAB_1040db5a;
            iVar1 = 6;
          }
        }
      }
    }
  }
  param_1[0x12] = iVar1;
LAB_1040db5a:
  piVar2 = param_1 + 2;
  dispatch_event_to_object_10492252(piVar2,param_1);
  request_ui_sync_and_set_flag(piVar2);
  request_ui_sync_with_flag_10491f5c(piVar2,1);
  register_eight_menu_items_1040dd2c(param_1);
  check_heap_alloc_success(param_1 + 0x10,1000);
  return;
}
