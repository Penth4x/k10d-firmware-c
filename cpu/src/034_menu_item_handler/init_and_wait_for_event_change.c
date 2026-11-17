/* @k10d init_and_wait_for_event_change @ 0x103731b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 034_menu_item_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * init_and_wait_for_event_change(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint32_t uVar4;
  uint8_t uVar5;
  bool bVar6;
  uintptr_t sp;
  int iStack_c;
  
  *(uint8_t *)((int)param_1 + 0x14) = 0;
  *(uint8_t *)((int)param_1 + 0x15) = 0;
  *(uint8_t *)((int)param_1 + 0x1f) = 0;
  iVar3 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if ((iVar3 == 0) && (iVar3 = process_event_and_return_field_1036bb6e(param_1,0xffffffff), iVar3 == 1)) {
    write_second_field_of_struct(param_1,0);
    *(uint16_t *)((int)param_1 + 0x2c) = 0;
    *(uint16_t *)((int)param_1 + 0x2e) = 0;
    uVar4 = get_setting_timeout_ms((void *)0x800158d4/*SDRAM*/);
    *(uint32_t *)((int)param_1 + 0x18) = uVar4;
    uVar5 = check_and_refresh_setting_0x80((void *)0x800158d4/*SDRAM*/);
    *(uint8_t *)((int)param_1 + 0x1c) = uVar5;
    *(uint32_t *)((int)param_1 + 0x20) = 0;
    register_ten_menu_items_1038f916((int)param_1 + 0x464);
    init_struct_with_offset_field_10373690(param_1);
    *(uint8_t *)((int)param_1 + 0x28) = 0;
    write_second_field_via_helper_1036c486(param_1,1000);
    *(uint8_t *)((int)param_1 + 0x29) = 0;
    *(uint8_t *)((int)param_1 + 0x2a) = 0;
    *(uint16_t *)((int)param_1 + 0x2c) = 0;
    *(uint16_t *)((int)param_1 + 0x2e) = 0;
    *(uint16_t *)((int)param_1 + 0x30) = 0;
    *(uint16_t *)((int)param_1 + 0x32) = 0;
    *(uint32_t *)((int)param_1 + 0x34) = 0;
    *(uint32_t *)((int)param_1 + 0x38) = 0;
    toggle_pointer_between_two_offsets((int)param_1);
    iStack_c = 0;
    dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
    if (iStack_c != 0) {
      uVar1 = *(ushort *)(iStack_c + 4);
      uVar2 = *(ushort *)(iStack_c + 6);
      do {
        if (*(char *)((int)param_1 + 0x14) != '\0') break;
        bVar6 = call_virtual_method_on_param1((int)param_1);
        if (bVar6) {
          *(int *)((int)param_1 + 0x34) = iStack_c;
          *(uint16_t *)((int)param_1 + 0x2c) = *(uint16_t *)(iStack_c + 4);
          *(uint16_t *)((int)param_1 + 0x2e) = *(uint16_t *)(*(int *)((int)param_1 + 0x34) + 6);
          break;
        }
        iVar3 = dispatch_event_and_return_field(param_1,0xffffffff);
        if (iVar3 != 1) break;
        dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
      } while (((uint)*(ushort *)(iStack_c + 4) != (uint)uVar1) ||
              ((uint)*(ushort *)(iStack_c + 6) != (uint)uVar2));
      if (*(int *)((int)param_1 + 0x34) == 0) {
        dispatch_three_params_and_return_offset(param_1,(uint)uVar1,(uint)uVar2);
      }
    }
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
    }
  }
  else {
    uVar4 = get_or_create_singleton_object_1036c796();
    param_1 = (void *)read_array_element_bounded(uVar4,1);
  }
  return param_1;
}
