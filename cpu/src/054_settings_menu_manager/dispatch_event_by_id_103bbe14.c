/* @k10d dispatch_event_by_id_103bbe14 @ 0x103bbe14
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Stores an event ID in the object and dispatches to specific handlers based on the ID
 *   value.
 * summary:
 *   The function writes param_2 to offset 0x1c of the object (param_1[7]) and calls
 *   get_setting_by_index. It then branches on the value of param_1[7] (the event ID). For
 *   IDs in the range 0x1010019-0x101002b, it sets a flag at offset 0x37 and stores a byte
 *   from RAM at offset 0xd before calling render_two_objects_by_setting_103bd7be. For other
 *   specific IDs (e.g., 0x1010033, 0x101003f), it performs virtual calls via
 *   menu_item_register. For a large set of IDs (0x101005f-0x101007d), it calls
 *   apply_setting_from_table with a computed parameter and then calls one of
 *   register_menu_item_by_index_103bd0e0, dispatch_virtual_event_by_index, or
 *   dispatch_seven_virtual_commands_103bd574 with an index. The behavior is a complex
 *   switch statement on an event or command code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103bbe86) overlaps instruction at (ram,0x103bbe84)
    */

void dispatch_event_by_id_103bbe14(int *param_1,int param_2)

{
  int iVar1;
  uint8_t uVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint uVar6;
  uint uVar7;
  
  param_1[7] = param_2;
  iVar3 = get_setting_by_index((int)param_1,8);
  iVar1 = param_1[7];
  if ((((((iVar1 == 0x1010019) || (iVar1 == 0x101001b)) || (iVar1 == 0x101001d)) ||
       ((iVar1 == 0x101001f || (iVar1 == 0x1010023)))) ||
      ((iVar1 == 0x1010025 || ((iVar1 == 0x1010027 || (iVar1 == 0x1010029)))))) ||
     (iVar1 == 0x101002b)) {
    *(uint8_t *)((int)param_1 + 0x37) = 1;
  }
  iVar1 = param_1[7];
  if (iVar1 == 0x1010033) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    return;
  }
  if ((iVar1 == 0x101003f) || (iVar1 == 0x101004c)) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    if (*(char *)(param_1 + 0xe) == '\0') {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    else {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    if (*(char *)((int)param_1 + 0x3a) == '\0') {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      uVar4 = get_setting_by_index((int)param_1,6);
      uVar5 = get_setting_by_index((int)param_1,7);
      split_value_and_write_parts(param_1,uVar4,uVar5);
    }
    else {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    return;
  }
  if (iVar1 == 0x101005a) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    return;
  }
  if (iVar1 == 0x1010019) {
    param_1[9] = 0x1010019;
    uVar2 = uRam10594e61;
  }
  else if (iVar1 == 0x101001b) {
    param_1[9] = 0x101001b;
    uVar2 = uRam10594e62;
  }
  else if (iVar1 == 0x101001d) {
    param_1[9] = 0x101001d;
    uVar2 = uRam10594e63;
  }
  else if (iVar1 == 0x101001f) {
    param_1[9] = 0x101001f;
    uVar2 = uRam10594e64;
  }
  else if (iVar1 == 0x1010023) {
    param_1[9] = 0x1010023;
    uVar2 = uRam10594e65;
  }
  else {
    if (iVar1 == 0x1010025) {
      param_1[9] = 0x1010025;
      *(uint8_t *)(param_1 + 0xd) = uRam10594e66;
      goto code_r0x103bc31e;
    }
    if (iVar1 == 0x1010027) {
      param_1[9] = 0x1010027;
      *(uint8_t *)(param_1 + 0xd) = uRam10594e67;
      goto code_r0x103bc31e;
    }
    if (iVar1 == 0x1010029) {
      param_1[9] = 0x1010029;
      *(uint8_t *)(param_1 + 0xd) = uRam10594e68;
      goto code_r0x103bc31e;
    }
    if (iVar1 == 0x101002b) {
      param_1[9] = 0x101002b;
      uVar2 = uRam10594e69;
    }
    else {
      uVar2 = DAT_10594e44/*ROM*/;
      if (((iVar1 == 0x1010038) || (uVar2 = DAT_10594e45/*ROM*/, iVar1 == 0x101003a)) ||
         (uVar2 = DAT_10594e46/*ROM*/, iVar1 == 0x101003c)) {
        *(uint8_t *)(param_1 + 0xd) = uVar2;
        render_two_objects_by_setting_103bd7be(param_1);
        uVar7 = (uint)*(byte *)(param_1 + 0xd);
        uVar6 = get_setting_by_index((int)param_1,7);
code_r0x103bc2d4:
        split_value_and_write_parts(param_1,uVar7,uVar6);
        return;
      }
      uVar2 = DAT_10594e47/*ROM*/;
      if (((iVar1 == 0x1010045) || (uVar2 = DAT_10594e48/*ROM*/, iVar1 == 0x1010047)) ||
         (uVar2 = DAT_10594e49/*ROM*/, iVar1 == 0x1010049)) {
        *(uint8_t *)(param_1 + 0xd) = uVar2;
        render_two_objects_by_setting_103bd7be(param_1);
        uVar7 = get_setting_by_index((int)param_1,6);
        uVar6 = (uint)*(byte *)(param_1 + 0xd);
        goto code_r0x103bc2d4;
      }
      uVar2 = uRam10594e4a;
      if ((iVar1 != 0x1010054) && (uVar2 = uRam10594e4b, iVar1 != 0x1010052)) {
        if (iVar1 == 0x101005f) {
          apply_setting_from_table(param_1,(uint)(iVar3 != 0),(uint)bRam10594e4c);
          uVar4 = 0;
        }
        else if (iVar1 == 0x1010060) {
          apply_setting_from_table(param_1,(uint)(iVar3 != 0),(uint)bRam10594e4d);
          uVar4 = 1;
        }
        else if (iVar1 == 0x1010061) {
          apply_setting_from_table(param_1,(uint)(iVar3 != 0),(uint)bRam10594e4e);
          uVar4 = 2;
        }
        else if (iVar1 == 0x1010062) {
          apply_setting_from_table(param_1,(uint)(iVar3 != 0),(uint)bRam10594e4f);
          uVar4 = 3;
        }
        else if (iVar1 == 0x1010063) {
          apply_setting_from_table(param_1,(uint)(iVar3 != 0),(uint)bRam10594e50);
          uVar4 = 4;
        }
        else {
          iVar1 = param_1[7];
          if (iVar1 == 0x1010064) {
            apply_setting_from_table(param_1,(uint)(iVar3 != 0),(uint)bRam10594e51);
            uVar4 = 5;
          }
          else {
            if (iVar1 != 0x1010065) {
              if (iVar1 == 0x101006b) {
                if (iVar3 == 0) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = 4;
                }
                apply_setting_from_table(param_1,iVar1,(uint)bRam10594e53);
                uVar4 = 0;
              }
              else if (iVar1 == 0x101006c) {
                if (iVar3 == 0) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = 4;
                }
                apply_setting_from_table(param_1,iVar1,(uint)bRam10594e54);
                uVar4 = 1;
              }
              else if (iVar1 == 0x101006d) {
                if (iVar3 == 0) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = 4;
                }
                apply_setting_from_table(param_1,iVar1,(uint)bRam10594e55);
                uVar4 = 2;
              }
              else if (iVar1 == 0x101006e) {
                if (iVar3 == 0) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = 4;
                }
                apply_setting_from_table(param_1,iVar1,(uint)bRam10594e56);
                uVar4 = 3;
              }
              else if (iVar1 == 0x101006f) {
                if (iVar3 == 0) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = 4;
                }
                apply_setting_from_table(param_1,iVar1,(uint)bRam10594e57);
                uVar4 = 4;
              }
              else if (iVar1 == 0x1010070) {
                if (iVar3 == 0) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = 4;
                }
                apply_setting_from_table(param_1,iVar1,(uint)bRam10594e58);
                uVar4 = 5;
              }
              else {
                if (iVar1 != 0x1010071) {
                  if (iVar1 == 0x1010077) {
                    if (iVar3 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = 10;
                    }
                    apply_setting_from_table(param_1,iVar1,(uint)bRam10594e5a);
                    uVar4 = 0;
                  }
                  else if (iVar1 == 0x1010078) {
                    if (iVar3 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = 10;
                    }
                    apply_setting_from_table(param_1,iVar1,(uint)bRam10594e5b);
                    uVar4 = 1;
                  }
                  else if (iVar1 == 0x1010079) {
                    if (iVar3 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = 10;
                    }
                    apply_setting_from_table(param_1,iVar1,(uint)bRam10594e5c);
                    uVar4 = 2;
                  }
                  else if (iVar1 == 0x101007a) {
                    if (iVar3 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = 10;
                    }
                    apply_setting_from_table(param_1,iVar1,(uint)bRam10594e5d);
                    uVar4 = 3;
                  }
                  else if (iVar1 == 0x101007b) {
                    if (iVar3 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = 10;
                    }
                    apply_setting_from_table(param_1,iVar1,(uint)bRam10594e5e);
                    uVar4 = 4;
                  }
                  else if (iVar1 == 0x101007c) {
                    if (iVar3 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = 10;
                    }
                    apply_setting_from_table(param_1,iVar1,(uint)bRam10594e5f);
                    uVar4 = 5;
                  }
                  else {
                    if (iVar1 != 0x101007d) {
                      return;
                    }
                    if (iVar3 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = 10;
                    }
                    apply_setting_from_table(param_1,iVar1,(uint)bRam10594e60);
                    uVar4 = 6;
                  }
                  dispatch_seven_virtual_commands_103bd574(param_1,uVar4);
                  return;
                }
                if (iVar3 == 0) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = 4;
                }
                apply_setting_from_table(param_1,iVar1,(uint)bRam10594e59);
                uVar4 = 6;
              }
              dispatch_virtual_event_by_index(param_1,uVar4);
              return;
            }
            apply_setting_from_table(param_1,(uint)(iVar3 != 0),(uint)bRam10594e52);
            uVar4 = 6;
          }
        }
        register_menu_item_by_index_103bd0e0(param_1,uVar4);
        return;
      }
    }
  }
  *(uint8_t *)(param_1 + 0xd) = uVar2;
code_r0x103bc31e:
  render_two_objects_by_setting_103bd7be(param_1);
  return;
}
