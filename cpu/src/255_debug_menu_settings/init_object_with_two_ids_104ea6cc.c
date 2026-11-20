/* @k10d init_object_with_two_ids_104ea6cc @ 0x104ea6cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helper functions and storing the result at offset
 *   0x10.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to get a pointer, passes it to
 *   read_table_entry_field with argument 0x7f, and stores the result in the object at
 *   offset 0x10. It then calls clear_flag3_with_notify and set_flag2_with_notify with the
 *   stored pointer. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_ids_104ea6cc(cls_105c2120 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  pvVar1 = (void *)read_table_entry_field(pvVar1,0x7f);
  param_1->field_0x10 = (uintptr_t)(pvVar1);
  clear_flag3_with_notify(pvVar1);
  set_flag2_with_notify((char*)(param_1) ->field_0x10);
  return 1;
}
