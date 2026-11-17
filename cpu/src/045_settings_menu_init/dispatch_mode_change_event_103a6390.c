/* @k10d dispatch_mode_change_event_103a6390 @ 0x103a6390
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103a65f0) overlaps instruction at (ram,0x103a65ee)
    */

void dispatch_mode_change_event_103a6390(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  uint16_t uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  short sVar9;
  int iVar8;
  ushort uVar10;
  
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  iVar5 = (*(code *)0x103a8910/*ROM*/)(param_1,*(uint16_t *)((int)param_1 + 0x116));
  uVar4 = param_1[0x10];
  bVar2 = false;
  if (uVar4 == 5) {
    switch(param_2) {
    case 0:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0x15:
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 1:
    case 2:
    case 4:
    case 9:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x19:
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
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
      break;
    case 0xc:
      iVar5 = *(int *)param_1[0xb];
      (**(code **)(iVar5 + 0x14))(param_1[0xb] + (int)*(short *)(iVar5 + 0x10),0x1120066,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 0xf:
      send_virtual_command_0x1120065(param_1);
      if (param_1[0x12] == 2) {
        iVar5 = *(int *)(param_1[0x37] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x37] + (int)*(short *)(iVar5 + 8),0);
        iVar5 = *(int *)(param_1[0x3a] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x3a] + (int)*(short *)(iVar5 + 8),0);
        iVar5 = *(int *)(param_1[0x39] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x39] + (int)*(short *)(iVar5 + 8),1);
        iVar5 = *(int *)(param_1[0x38] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x38] + (int)*(short *)(iVar5 + 8),1);
        param_1[0x12] = 1;
      }
      break;
    case 0x10:
      send_virtual_command_0x1120065(param_1);
      if (param_1[0x12] == 1) {
        iVar5 = *(int *)(param_1[0x37] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x37] + (int)*(short *)(iVar5 + 8),1);
        iVar5 = *(int *)(param_1[0x3a] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x3a] + (int)*(short *)(iVar5 + 8),1);
        iVar5 = *(int *)(param_1[0x39] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x39] + (int)*(short *)(iVar5 + 8),0);
        iVar5 = *(int *)(param_1[0x38] + 0xc);
        (**(code **)(iVar5 + 0xc))(param_1[0x38] + (int)*(short *)(iVar5 + 8),0);
        param_1[0x12] = 2;
      }
      break;
    case 0x11:
      if (param_1[0x12] == 2) {
        (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x112000d,10)
        ;
        bVar2 = true;
        goto LAB_103a6ad8;
      }
      if (param_1[0x12] == 1) {
        (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
        bVar2 = true;
        goto LAB_103a6ad8;
      }
      break;
    case 0x18:
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120001,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 0x29:
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x112000b,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    default:
    }
    goto LAB_103a6ad6;
  }
  if (uVar4 != 4) {
    switch(param_2) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x1b:
    case 0x1c:
    case 0x25:
    case 0x26:
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 2:
    case 4:
    case 8:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
      break;
    case 9:
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x112000c,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 0xc:
      iVar5 = *(int *)param_1[0xb];
      (**(code **)(iVar5 + 0x14))(param_1[0xb] + (int)*(short *)(iVar5 + 0x10),0x1120066,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 0xf:
      if (uVar4 != 1) {
        if (uVar4 == 2) {
          send_virtual_command_0x1120065(param_1);
          goto LAB_103a6a46;
        }
        if (uVar4 == 3) {
          send_virtual_command_0x1120065(param_1);
          goto LAB_103a6a62;
        }
      }
      break;
    case 0x10:
      if (uVar4 != 1) {
        if (uVar4 == 2) {
          send_virtual_command_0x1120065(param_1);
          goto LAB_103a6a46;
        }
        if (uVar4 == 3) {
          send_virtual_command_0x1120065(param_1);
          goto LAB_103a6a62;
        }
      }
      break;
    case 0x11:
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 0x18:
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120001,0);
      bVar2 = true;
      goto LAB_103a6ad8;
    case 0x19:
      if ((uVar4 & 4) == 0) {
        if (((param_1[0x47] & 1U) != 0) && ((param_1[0x47] & 4U) == 0)) {
          send_virtual_command_0x1120065(param_1);
          activate_object_state_five(param_1);
        }
      }
      else {
        send_virtual_command_0x1120065(param_1);
        activate_object_state_once(param_1);
      }
      if ((param_1[0x47] & 2U) != 0) {
        (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
      }
      break;
    case 0x27:
      send_virtual_command_0x1120065(param_1);
      uVar4 = (uint)*(ushort *)((int)param_1 + 0x116) + (param_3 & 0xffff);
      if (0x10 < uVar4) {
        uVar4 = 0x11;
      }
      *(short *)((int)param_1 + 0x116) = (short)uVar4;
      goto LAB_103a697e;
    default:
    }
    goto LAB_103a6ad6;
  }
  sVar9 = (short)iVar5;
  switch(param_2) {
  case 0:
  case 1:
  case 3:
  case 5:
  case 7:
  case 0x15:
  case 0x1b:
  case 0x1c:
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
    bVar2 = true;
    goto LAB_103a6ad8;
  case 2:
  case 4:
  case 8:
  case 10:
  case 0xb:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    goto LAB_103a6ad6;
  case 6:
  case 0x27:
    send_virtual_command_0x1120065(param_1);
    uVar4 = (uint)*(ushort *)((int)param_1 + 0x116) + (param_3 & 0xffff);
    if (0x10 < uVar4) {
      uVar4 = 0x11;
    }
    *(short *)((int)param_1 + 0x116) = (short)uVar4;
    break;
  case 9:
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x112000c,0);
    bVar2 = true;
    goto LAB_103a6ad8;
  case 0xc:
    iVar5 = *(int *)param_1[0xb];
    (**(code **)(iVar5 + 0x14))(param_1[0xb] + (int)*(short *)(iVar5 + 0x10),0x1120066,0);
    bVar2 = true;
    goto LAB_103a6ad8;
  case 0xd:
    send_virtual_command_0x1120065(param_1);
    iVar5 = menu_item_register((int)(param_1 + 2));
    iVar6 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar6 + 8);
    uVar7 = read_byte_at_offset_8(param_1[0x28]);
    (**(code **)(iVar6 + 0xc))(iVar5 + sVar1,uVar7);
    uVar10 = *(ushort *)(param_1 + 0x46);
    if (*(ushort *)(param_1 + 0x44) < uVar10) {
      uVar10 = *(ushort *)(param_1 + 0x44) + sVar9;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
    break;
  case 0xe:
    send_virtual_command_0x1120065(param_1);
    iVar6 = menu_item_register((int)(param_1 + 2));
    iVar8 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar8 + 8);
    uVar7 = read_byte_at_offset_8(param_1[0x27]);
    (**(code **)(iVar8 + 0xc))(iVar6 + sVar1,uVar7);
    if (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x44)) {
      sVar9 = *(ushort *)(param_1 + 0x44) - sVar9;
    }
    else {
      sVar9 = 0;
    }
    *(short *)(param_1 + 0x44) = sVar9;
    break;
  case 0xf:
    send_virtual_command_0x1120065(param_1);
    iVar5 = menu_item_register((int)(param_1 + 2));
    iVar6 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar6 + 8);
    uVar7 = read_byte_at_offset_8(param_1[0x26]);
    (**(code **)(iVar6 + 0xc))(iVar5 + sVar1,uVar7);
    uVar10 = *(ushort *)((int)param_1 + 0x11a);
    if (*(ushort *)((int)param_1 + 0x112) < uVar10) {
      uVar10 = *(ushort *)((int)param_1 + 0x112) + sVar9;
    }
    *(ushort *)((int)param_1 + 0x112) = uVar10;
    break;
  case 0x10:
    send_virtual_command_0x1120065(param_1);
    iVar6 = menu_item_register((int)(param_1 + 2));
    iVar8 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar8 + 8);
    uVar7 = read_byte_at_offset_8(param_1[0x25]);
    (**(code **)(iVar8 + 0xc))(iVar6 + sVar1,uVar7);
    if (iVar5 < (int)(uint)*(ushort *)((int)param_1 + 0x112)) {
      sVar9 = *(ushort *)((int)param_1 + 0x112) - sVar9;
    }
    else {
      sVar9 = 0;
    }
    *(short *)((int)param_1 + 0x112) = sVar9;
    break;
  case 0x11:
  case 0x19:
    send_virtual_command_0x1120065(param_1);
    if ((*(char *)(param_1 + 0x11) == '\0') || (iVar5 = check_setting_0x81_is_one(param_1[10]), iVar5 == 0)) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        activate_object_state_once(param_1);
        bVar2 = true;
        goto LAB_103a6ad8;
      }
LAB_103a6a62:
      deactivate_mode_context_103a7c22(param_1);
      bVar2 = true;
      goto LAB_103a6ad8;
    }
LAB_103a6a46:
    finalize_object_state_and_release(param_1);
    bVar2 = true;
    goto LAB_103a6ad8;
  case 0x12:
  case 0x28:
    send_virtual_command_0x1120065(param_1);
    uVar10 = *(ushort *)((int)param_1 + 0x116);
    if (uVar10 == 1) {
      if ((*(char *)(param_1 + 0x11) == '\0') || (iVar5 = check_setting_0x81_is_one(param_1[10]), iVar5 == 0)) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          activate_object_state_once(param_1);
          bVar2 = true;
          goto LAB_103a6ad8;
        }
        goto LAB_103a6a62;
      }
      goto LAB_103a6a46;
    }
    if ((param_3 & 0xffff) < (uint)uVar10) {
      sVar9 = uVar10 - (short)param_3;
    }
    else {
      sVar9 = 1;
    }
    *(short *)((int)param_1 + 0x116) = sVar9;
    break;
  case 0x18:
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120001,0);
    bVar2 = true;
    goto LAB_103a6ad8;
  default:
    goto LAB_103a6ad6;
  }
LAB_103a697e:
  bVar2 = true;
LAB_103a6ad6:
  bVar2 = !bVar2;
LAB_103a6ad8:
  if (!bVar2) {
    if (param_1[0x10] != 4) {
      iVar5 = get_setting_0xce(param_1[10]);
      if (iVar5 == 0) {
        uVar3 = 1;
      }
      else if (iVar5 == 1) {
        uVar3 = 5;
      }
      else if (iVar5 == 2) {
        uVar3 = 10;
      }
      else if (iVar5 == 3) {
        uVar3 = 0xd;
      }
      else if (iVar5 == 4) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 1;
      }
      *(uint16_t *)((int)param_1 + 0x116) = uVar3;
    }
    activate_object_state_four(param_1);
  }
  return;
}
