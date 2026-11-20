/* @k10d update_apex_parameter_value @ 0x103d6258
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Increments or decrements a camera parameter (shutter, aperture, or ISO) based on
 *   direction and updates the display.
 * summary:
 *   The function stores the direction in param_1[5] and dispatches based on the parameter
 *   ID in param_1[6]. It adjusts values at offsets 0x12, 0x14, 0x2a, or 0x26 with wrap-
 *   around logic for specific IDs. It calls lookup_byte_from_table to compute a limit or
 *   display value and updates the state at offset 0x26. For specific IDs, it triggers
 *   virtual calls via menu_item_register, likely for UI updates. Finally, it calls
 *   setting_set for IDs 0x11 to persist changes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d6358) overlaps instruction at (ram,0x103d6356)
    */

cls_1059639c * update_apex_parameter_value(cls_1059639c *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  cls_1059639c *pcVar4;
  
  param_1->field_0x14 = param_2;
  if ((((param_2 == 7) || (param_2 == 0)) || (param_2 == 1)) || (pcVar4 = param_1, param_2 == 3)) {
    param_1->field_0x36 = 0x8c;
    pcVar4 = (cls_1059639c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x36 = 0x50;
    pcVar4 = (cls_1059639c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x36 = 0xb4;
    pcVar4 = (cls_1059639c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x36 = 0x8c;
    pcVar4 = (cls_1059639c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x36 = 200;
    pcVar4 = (cls_1059639c *)0x0;
  }
  iVar2 = param_1->field_0x18;
  if (((iVar2 == 0x18c0023) || (iVar2 == 0x18c0040)) || (iVar2 == 0x18c004d)) {
    if (param_1->field_0x14 == 0x10) {
      if (*(ushort *)&param_1->field_0x24 < 0x807) {
        *(ushort *)&param_1->field_0x24 = *(ushort *)&param_1->field_0x24 + 1;
      }
      else {
        *(uint16_t *)&param_1->field_0x24 = 0x7d6;
      }
    }
    else if (param_1->field_0x14 == 0xf) {
      if (*(ushort *)&param_1->field_0x24 < 0x7d7) {
        *(uint16_t *)&param_1->field_0x24 = 0x807;
      }
      else {
        *(ushort *)&param_1->field_0x24 = *(ushort *)&param_1->field_0x24 - 1;
      }
    }
    write_three_field_groups(param_1);
    bVar3 = lookup_byte_from_table(&param_1->field_0x2e,(uint)*(ushort *)&param_1->field_0x24,
                         (uint)(byte)*(uint16_t *)&param_1->field_0x28);
    if (*(ushort *)&param_1->field_0x26 <= (ushort)bVar3) goto LAB_103d65f2;
    *(ushort *)&param_1->field_0x26 = (ushort)bVar3;
  }
  else if (((iVar2 == 0x18c0028) || (iVar2 == 0x18c003b)) || (iVar2 == 0x18c0049)) {
    if (param_1->field_0x14 == 0x10) {
      if (*(short *)&param_1->field_0x28 == 0xc) {
        sVar1 = 1;
      }
      else {
        sVar1 = *(short *)&param_1->field_0x28 + 1;
      }
LAB_103d63a8:
      *(short *)&param_1->field_0x28 = sVar1;
    }
    else if (param_1->field_0x14 == 0xf) {
      if (*(short *)&param_1->field_0x28 == 1) {
        sVar1 = 0xc;
      }
      else {
        sVar1 = *(short *)&param_1->field_0x28 + -1;
      }
      goto LAB_103d63a8;
    }
    write_three_field_groups(param_1);
    bVar3 = lookup_byte_from_table(&param_1->field_0x2e,(uint)*(ushort *)&param_1->field_0x24,
                         (uint)(byte)*(uint16_t *)&param_1->field_0x28);
    if (*(ushort *)&param_1->field_0x26 <= (ushort)bVar3) goto LAB_103d65f2;
    *(ushort *)&param_1->field_0x26 = (ushort)bVar3;
  }
  else {
    if (((iVar2 != 0x18c002d) && (iVar2 != 0x18c0036)) && (iVar2 != 0x18c004b)) {
      if ((iVar2 == 0x18c0055) || (iVar2 == 0x18c005a)) {
        if (param_1->field_0x14 == 0x10) {
          if (param_1->field_0x2a == 0x17) {
            sVar1 = 0;
          }
          else {
            sVar1 = param_1->field_0x2a + 1;
          }
LAB_103d649e:
          param_1->field_0x2a = sVar1;
        }
        else if (param_1->field_0x14 == 0xf) {
          if (param_1->field_0x2a == 0) {
            sVar1 = 0x17;
            goto LAB_103d649e;
          }
          param_1->field_0x2a = param_1->field_0x2a + -1;
        }
        build_menu_with_dynamic_item(param_1);
        if (param_1->field_0x22 == '\x01') {
          if ((ushort)param_1->field_0x2a < 0xc) {
            iVar2 = menu_item_register((int)param_1->field_0x0);
            (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
            iVar2 = menu_item_register((int)param_1->field_0x0);
            (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
          }
          else if ((ushort)param_1->field_0x2a < 0x18) {
            iVar2 = menu_item_register((int)param_1->field_0x0);
            (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
            iVar2 = menu_item_register((int)param_1->field_0x0);
            (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
          }
        }
        else if (param_1->field_0x22 == '\0') {
          iVar2 = menu_item_register((int)param_1->field_0x0);
          (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
          iVar2 = menu_item_register((int)param_1->field_0x0);
          (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
        }
        goto LAB_103d65f2;
      }
      if (iVar2 != 0x18c005f) goto LAB_103d65f2;
      if (param_1->field_0x14 == 0x10) {
        if (*(short *)&param_1->field_0x2c == 0x3b) {
          sVar1 = 0;
code_r0x103d65e8:
          *(short *)&param_1->field_0x2c = sVar1;
        }
        else {
          *(short *)&param_1->field_0x2c = *(short *)&param_1->field_0x2c + 1;
        }
      }
      else if (param_1->field_0x14 == 0xf) {
        if (*(short *)&param_1->field_0x2c == 0) {
          sVar1 = 0x3b;
        }
        else {
          sVar1 = *(short *)&param_1->field_0x2c + -1;
        }
        goto code_r0x103d65e8;
      }
      build_menu_with_dynamic_item(param_1);
      goto LAB_103d65f2;
    }
    bVar3 = lookup_byte_from_table(&param_1->field_0x2e,(uint)*(ushort *)&param_1->field_0x24,
                         (uint)(byte)*(uint16_t *)&param_1->field_0x28);
    if (param_1->field_0x14 == 0x10) {
      if (*(ushort *)&param_1->field_0x26 == (ushort)bVar3) {
        *(uint16_t *)&param_1->field_0x26 = 1;
      }
      else {
        *(ushort *)&param_1->field_0x26 = *(ushort *)&param_1->field_0x26 + 1;
      }
    }
    else if (param_1->field_0x14 == 0xf) {
      if (*(short *)&param_1->field_0x26 == 1) {
        *(ushort *)&param_1->field_0x26 = (ushort)bVar3;
      }
      else {
        *(short *)&param_1->field_0x26 = *(short *)&param_1->field_0x26 + -1;
      }
    }
  }
  write_three_field_groups(param_1);
LAB_103d65f2:
  if (param_1->field_0x14 == 0xc) {
    if (param_1->field_0x21 == '>') {
      pcVar4 = (cls_1059639c *)0x0;
    }
    else {
      pcVar4 = (cls_1059639c *)get_or_init_singleton_object_103c8200();
    }
  }
  if (param_1->field_0x14 == 0x11) {
    setting_set(param_1->field_0x8,0xa3,(uint)(byte)param_1->field_0x23);
    setting_set(param_1->field_0x8,0xa4,(uint)(byte)param_1->field_0x22);
    copy_struct_to_buffer(param_1);
    init_two_magic_fields_10484960(param_1->field_0x8,1);
    if (param_1->field_0x21 == '>') {
      pcVar4 = (cls_1059639c *)0x0;
    }
    else {
      pcVar4 = (cls_1059639c *)get_or_init_singleton_object_103c8200();
    }
  }
  return pcVar4;
}
