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

void configure_timer_event_handler(cls_1056ac8c *param_1,int param_2)

{
  int iVar1;
  uint8_t *puVar2;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  puVar2 = &param_1->field5_0x8;
  param_1->field_0x34 = 15000;
  iVar1 = menu_item_register((int)puVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 - 1U < 0x65) {
    *(int *)&param_1->field_0x40 = param_2;
    switch(param_2) {
    case 1:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 2:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 3:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 4:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 5:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 6:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 7:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 8:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 9:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 10:
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 100:
      param_1->field_0x34 = 60000;
      iVar1 = menu_item_register((int)puVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      break;
    case 0x65:
      register_menu_item_with_label_103b85e0(param_1);
    default:
code_r0x103b7de0:
    }
    dispatch_event_to_object_10492252((cls_105b4254 *)puVar2,param_1);
    request_ui_sync_and_set_flag((cls_105b4254 *)puVar2);
    request_ui_sync_with_flag_10491f5c(puVar2,1);
    if (param_2 == 10) {
      iVar1 = *(int *)(param_1->field_0x2c);
      (((vtbl_entry*)(iVar1))[2].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120069,2);
      iVar1 = query_object_property_via_temp_104f2570(param_1->field_0x28);
      if (iVar1 == 0) {
        wait_for_flag_then_cleanup(param_1->field_0x38);
        iVar1 = *(int *)(param_1->field_0x2c);
        (((vtbl_entry*)(iVar1))[2].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x112006b,0);
      }
      else {
        iVar1 = *(int *)(param_1->field_0x2c);
        (((vtbl_entry*)(iVar1))[2].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x112006d,0);
      }
      iVar1 = *(int *)(param_1->field_0x2c);
      (((vtbl_entry*)(iVar1))[2].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120069,0);
      (((vtbl_entry*)(param_1->field_0x0))[14].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
    }
    return;
  }
  *(int *)&param_1->field_0x40 = param_2;
  goto code_r0x103b7de0;
}
