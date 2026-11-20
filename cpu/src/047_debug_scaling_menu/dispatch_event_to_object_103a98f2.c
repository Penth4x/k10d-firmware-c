/* @k10d dispatch_event_to_object_103a98f2 @ 0x103a98f2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Routes a specific event ID to a virtual method on an object based on a switch
 *   statement.
 * summary:
 *   The function first calls dispatch_event_0x29_via_vtable with the provided arguments. It
 *   then evaluates param_2 against a series of integer values (0x0f, 0x07, 0x09, etc.). For
 *   specific values, it sets a local variable uVar2 to a constant (e.g., 0x1120003) and
 *   invokes a virtual method at offset 0x74 on the object pointed to by *param_1, passing
 *   uVar2 as an argument. For other values, it returns early without invoking the virtual
 *   method. One branch (param_2 == 0xc) invokes a different virtual method at offset 0x14
 *   on a sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_object_103a98f2(cls_10565468 *param_1,uint param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  void *puVar4;
  
  uVar2 = 0;
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  if (param_2 == 0xf) {
    uVar2 = 0x1120003;
    bVar1 = false;
    goto LAB_103a99de;
  }
  if (param_2 < 0x10) {
    if (param_2 == 7) goto LAB_103a9976;
    if (param_2 < 8) {
      if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 3)) goto LAB_103a9976;
      bVar1 = true;
    }
    else if (param_2 == 9) {
      uVar2 = 0x112000c;
      bVar1 = false;
    }
    else if (param_2 == 0xc) {
      iVar3 = *(uint32_t *)(param_1->field_0x2c);
      (((vtbl_entry*)(iVar3))[2].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120066,0);
      bVar1 = true;
    }
    else {
      if (param_2 == 0xd) {
        if (param_1->field_0x40 != '\f') {
          uVar2 = 0x1120002;
          puVar4 = (void *)(param_1->field_0x0);
          goto LAB_103a99e2;
        }
        goto LAB_103a99dc;
      }
      if (param_2 == 0xe) {
        uVar2 = 0x1120007;
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
  }
  else {
    if (param_2 != 0x19) {
      if (param_2 < 0x1a) {
        if (param_2 == 0x10) {
          uVar2 = 0x1120005;
          bVar1 = false;
        }
        else {
          if (((param_2 == 0x11) || (param_2 == 0x13)) || (param_2 == 0x18)) goto LAB_103a9976;
          bVar1 = true;
        }
      }
      else {
        if ((((param_2 == 0x1a) || (param_2 == 0x1b)) || (param_2 == 0x1c)) || (param_2 == 0x2c))
        goto LAB_103a9976;
LAB_103a99dc:
        bVar1 = true;
      }
      goto LAB_103a99de;
    }
LAB_103a9976:
    uVar2 = 0x1120004;
    bVar1 = false;
  }
LAB_103a99de:
  if (bVar1) {
    return;
  }
  puVar4 = (void *)(param_1->field_0x0);
LAB_103a99e2:
  (((vtbl_entry*)(puVar4))[14].fn)((int)&param_1->field_0x0 + (int)((vtbl_entry*)(puVar4))[14].adj,uVar2,0);
  return;
}
