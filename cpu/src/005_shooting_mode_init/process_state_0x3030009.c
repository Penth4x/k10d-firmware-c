/* @k10d process_state_0x3030009 @ 0x10365ae8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 005_shooting_mode_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_state_0x3030009(void *obj)

{
  uint field_6c;
  int event_result;
  uint32_t sram_val;
  uint32_t rom_ptr;
  uint32_t dispatch_out;

  if (*(int *)((int)obj + 0x68) == 0x3030009) {
    write_second_field_of_struct(obj, 0);
    set_object_flag_and_init_state(obj);
    init_struct_with_size_and_register(obj);
    *(uint32_t *)((int)obj + 0x6c) = 0x2e;
    *(uint8_t *)((int)obj + 0xe0) = 1;
    while (event_result = register_and_activate_event((int)obj), event_result == 0xb) {
      sram_val = get_sram_field_at_offset_0x3c((uint32_t)(obj));
      register_menu_item_with_limit(0x80018060/*SDRAM*/, sram_val);
    }
    *(uint8_t *)((int)obj + 0xe0) = 0;
    if (event_result == 1) {
      register_menu_item_with_limit(0x80018060/*SDRAM*/, 100);
    }
    else if (event_result == 2) {
      event_result = 1;
    }
    check_kernel_call_success_10459fea(0x3e8);
    set_field_and_call_helper_10365e18((int)obj);
    write_second_field_of_struct(obj, 1);
    if (event_result == 1) {
      invoke_virtual_slot_two_on_four_objects_1036b766();
      dispatch_out = 0;
      event_result = dispatch_event_and_return_offset(obj, &dispatch_out, 0xffffffff);
      if (event_result == 1) {
        sram_val = get_or_create_singleton_object_1036c796();
        rom_ptr = 2;
      }
      else {
        sram_val = get_or_create_singleton_object_1036c796();
        rom_ptr = 1;
      }
    }
    else {
      sram_val = get_or_create_singleton_object_1036c796();
      rom_ptr = 1;
    }
    sram_val = read_array_element_bounded(sram_val, rom_ptr);
    field_6c = *(uint *)((int)obj + 0x6c);
    rom_ptr = _DAT_105bb5f4/*ROM*/;
    if (field_6c != 3) {
      if (field_6c < 4) {
        if ((field_6c != 0) && (field_6c != 1)) {
          return sram_val;
        }
      }
      else if ((field_6c != 7) && (field_6c != 10)) {
        if (field_6c != 0x29) {
          return sram_val;
        }
        if (DAT_800043a1/*SDRAM*/ != '\0') {
          rom_ptr = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    forward_param_to_global_offset(obj, rom_ptr);
  }
  else {
    sram_val = get_or_create_singleton_object_1036c796();
    sram_val = read_array_element_bounded(sram_val, 2);
  }
  return sram_val;
}
