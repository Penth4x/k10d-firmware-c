/* @k10d configure_timer_event_handler @ 0x103b7b72
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a timer object with a timeout value and dispatches a virtual call to set
 *   its state based on the input parameter.
 * summary:
 *   The function calls two initialization helpers, then sets a timeout field (param_1[0xd])
 *   to 15000 or 60000 depending on the input. It retrieves a timer object via
 *   menu_item_register and invokes a virtual method (slot 3) to configure it. A switch
 *   statement on param_2 handles specific cases (1-10, 100, 0x65) with similar virtual
 *   calls. For param_2 == 10, it performs additional virtual calls with specific constants
 *   (0x1120069, etc.) and checks a status via query_object_property_via_temp_104f2570.
 *   Finally, it calls three cleanup/finalization functions on the timer object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103b7bea) overlaps instruction at (ram,0x103b7be8)
    */

void configure_timer_event_handler(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  piVar2 = param_1 + 2;
  param_1[0xd] = 15000;
  iVar1 = menu_item_register((int)piVar2);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 - 1U < 0x65) {
    param_1[0x10] = param_2;
    switch(param_2) {
    case 1:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 2:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 3:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 4:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 5:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 6:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 7:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 8:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 9:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 10:
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 100:
      param_1[0xd] = 60000;
      iVar1 = menu_item_register((int)piVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 0x65:
      register_menu_item_with_label_103b85e0(param_1);
    default:
code_r0x103b7de0:
    }
    dispatch_event_to_object_10492252(piVar2,param_1);
    request_ui_sync_and_set_flag(piVar2);
    request_ui_sync_with_flag_10491f5c(piVar2,1);
    if (param_2 == 10) {
      iVar1 = *(int *)param_1[0xb];
      (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x1120069,2);
      iVar1 = query_object_property_via_temp_104f2570(param_1[10]);
      if (iVar1 == 0) {
        wait_for_flag_then_cleanup(param_1[0xe]);
        iVar1 = *(int *)param_1[0xb];
        (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x112006b,0);
      }
      else {
        iVar1 = *(int *)param_1[0xb];
        (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x112006d,0);
      }
      iVar1 = *(int *)param_1[0xb];
      (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x1120069,0);
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
    }
    return;
  }
  param_1[0x10] = param_2;
  goto code_r0x103b7de0;
}
