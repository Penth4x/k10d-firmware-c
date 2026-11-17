/* @k10d dispatch_mode_change_event_1036c884 @ 0x1036c884
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_mode_change_event_1036c884(void *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  void *pvVar4;
  
  *(void **)((int)param_1 + 0x18) = param_1;
  sync_object_state_via_virtual_call((void *)__frv_reg_unset(4));
  iVar1 = *param_2;
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 != 4)) goto LAB_1036cae4;
  if (*(int *)((int)param_1 + 0x244) != 0) {
    if (*(int *)((int)param_1 + 0x244) != 1) goto LAB_1036cae4;
    switch(param_2[1]) {
    case 0xc:
    case 0x11:
    case 0x18:
      *(uint32_t *)((int)param_1 + 0x244) = 0;
      call_helper_on_struct_field_1036c46c();
      pvVar4 = *(void **)((int)param_1 + 0x70);
      goto LAB_1036ca22;
    case 0xd:
      *(uint32_t *)((int)param_1 + 0x244) = 0;
      if (*(char *)((int)param_1 + 0x6c) == '\x02') {
LAB_1036caac:
        release_object_field_0x70(param_1);
        goto LAB_1036cae4;
      }
      *(uint8_t *)((int)param_1 + 0x6c) = 2;
      set_setting_0x71((void *)0x800158d4/*SDRAM*/,2);
      iVar1 = process_object_state_transition_1036d23a(param_1);
      break;
    case 0xe:
      *(uint32_t *)((int)param_1 + 0x244) = 0;
      if (*(char *)((int)param_1 + 0x6c) == '\x01') goto LAB_1036caac;
      *(uint8_t *)((int)param_1 + 0x6c) = 1;
      set_setting_0x71((void *)0x800158d4/*SDRAM*/,1);
      iVar1 = process_object_state_transition_1036d23a(param_1);
      break;
    default:
      goto LAB_1036cae4;
    case 0x10:
      *(uint32_t *)((int)param_1 + 0x244) = 0;
      if (*(char *)((int)param_1 + 0x6c) == '\0') goto LAB_1036caac;
      *(uint8_t *)((int)param_1 + 0x6c) = 0;
      set_setting_0x71((void *)0x800158d4/*SDRAM*/,0);
      iVar1 = process_object_state_transition_1036d23a(param_1);
    }
    goto joined_r0x1036ca92;
  }
  switch(param_2[1]) {
  case 5:
  case 9:
  case 0x11:
  case 0x27:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 2;
    goto LAB_1036cad8;
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto LAB_1036cae4;
  case 0xc:
    *(uint8_t *)((int)param_1 + 0x15) = 1;
    goto LAB_1036cae4;
  case 0xd:
    iVar1 = dispatch_mode_change_event_1036d3de(param_1,3);
    break;
  case 0xe:
    iVar1 = dispatch_mode_change_event_1036d3de(param_1,2);
    break;
  case 0xf:
    iVar1 = dispatch_mode_change_event_1036d3de(param_1,1);
    break;
  case 0x10:
    iVar1 = dispatch_mode_change_event_1036d3de(param_1,0);
    break;
  case 0x18:
    *(uint32_t *)((int)param_1 + 0x244) = 1;
    call_helper_on_struct_field_1036c46c();
    pvVar4 = (void *)((int)param_1 + 0x21c);
LAB_1036ca22:
    call_helper_on_struct_field_1036c41a(param_1,pvVar4,1);
    goto LAB_1036cae4;
  case 0x19:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 7;
    goto LAB_1036cad8;
  case 0x25:
    iVar1 = dispatch_mode_change_event_1036d3de(param_1,5);
    break;
  case 0x26:
    iVar1 = dispatch_mode_change_event_1036d3de(param_1,4);
    break;
  case 0x28:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 0xc;
    goto LAB_1036cad8;
  default:
    goto LAB_1036cae4;
  }
joined_r0x1036ca92:
  if (iVar1 == 0) {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 1;
LAB_1036cad8:
    uVar2 = read_array_element_bounded(uVar2,uVar3);
    *(uint32_t *)((int)param_1 + 0x18) = uVar2;
  }
LAB_1036cae4:
  if (*(int *)((int)param_1 + 0x244) == 0) {
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
    }
  }
  else {
    *(uint8_t *)((int)param_1 + 0x14) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
  }
  return *(uint32_t *)((int)param_1 + 0x18);
}
