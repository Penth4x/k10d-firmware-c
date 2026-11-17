/* @k10d dispatch_event_by_type_103abf16 @ 0x103abf16
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Dispatches an event based on param_2, calling a virtual method with a specific code for
 *   most types.
 * summary:
 *   First calls dispatch_event_0x29_via_vtable with all three parameters. Then switches on
 *   param_2. For most values, it sets a local variable to a specific constant (mostly
 *   0x1120004) and calls a virtual method at offset 0x74 of the object pointed to by
 *   *param_1, passing the adjusted object pointer, the constant, and 0. For param_2 == 0xc,
 *   it calls a virtual method at offset 0x14 of the object at param_1[0xb]. For param_2 ==
 *   0x2b, it compares a byte at param_1+0x12 with the result of
 *   call_two_helpers_in_sequence_104f1b02(param_1[10]) and either skips the call or uses
 *   constant 0x112000b. The default case does nothing after the initial call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_by_type_103abf16(int *param_1,int param_2,uint32_t param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint32_t uVar4;
  int iVar5;
  
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  uVar4 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2c:
  case 0x2d:
    uVar4 = 0x1120004;
    bVar2 = false;
    break;
  default:
LAB_103abf98:
    bVar2 = true;
    break;
  case 9:
    uVar4 = 0x112000c;
    bVar2 = false;
    break;
  case 0xc:
    iVar5 = *(int *)param_1[0xb];
    (**(code **)(iVar5 + 0x14))(param_1[0xb] + (int)*(short *)(iVar5 + 0x10),0x1120066,0);
    bVar2 = true;
    break;
  case 0x18:
    uVar4 = 0x1120001;
    bVar2 = false;
    break;
  case 0x2b:
    bVar1 = *(byte *)(param_1 + 0x12);
    uVar3 = call_two_helpers_in_sequence_104f1b02(param_1[10]);
    if (bVar1 == uVar3) goto LAB_103abf98;
    uVar4 = 0x112000b;
    iVar5 = *param_1;
    goto LAB_103abf9e;
  }
  if (!bVar2) {
    iVar5 = *param_1;
LAB_103abf9e:
    (**(code **)(iVar5 + 0x74))((int)*(short *)(iVar5 + 0x70) + (int)param_1,uVar4,0);
  }
  return;
}
