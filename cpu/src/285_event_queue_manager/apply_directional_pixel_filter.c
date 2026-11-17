/* @k10d apply_directional_pixel_filter @ 0x1052a18e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1052a1a8) overlaps instruction at (ram,0x1052a1a6)
    */

void apply_directional_pixel_filter(uint32_t param_1,uint param_2,uint param_3,uint32_t param_4,ushort param_5,
                 char param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar9;
  uint uVar8;
  uint uStack_60;
  uint uStack_5c;
  
  uStack_60 = param_2;
  uStack_5c = param_3;
  switch(param_4) {
  case 0:
    if (param_6 == '\0') {
      iVar5 = read_packed_pixel_value(param_1,param_2 - 2 & 0xffff,param_3);
      iVar2 = read_packed_pixel_value(param_1,param_2 + 2 & 0xffff,param_3);
      iVar3 = read_packed_pixel_value(param_1,param_2,param_3 - 2 & 0xffff);
      iVar4 = read_packed_pixel_value(param_1,param_2,param_3 + 2 & 0xffff);
      iVar4 = iVar5 + iVar2 + iVar3 + iVar4;
    }
    else {
      uVar1 = param_2 - 1 & 0xffff;
      uVar6 = param_3 - 1 & 0xffff;
      iVar5 = read_packed_pixel_value(param_1,uVar1,uVar6);
      uVar7 = param_3 + 1 & 0xffff;
      iVar2 = read_packed_pixel_value(param_1,uVar1,uVar7);
      uVar1 = param_2 + 1 & 0xffff;
      iVar3 = read_packed_pixel_value(param_1,uVar1,uVar6);
      iVar4 = read_packed_pixel_value(param_1,uVar1,uVar7);
      iVar4 = iVar5 + iVar2 + iVar3 + iVar4;
    }
    uVar6 = iVar4 >> 2 & 0xffff;
    goto LAB_1052a734;
  case 1:
    if ((param_6 == '\0') || (param_5 != 1)) {
      uVar9 = 0;
      if (param_5 == 0) {
        return;
      }
      uVar6 = param_3 - 1 & 0xffff;
      uVar1 = param_3 + 1 & 0xffff;
      do {
        param_6 = param_6 == '\0';
        if ((bool)param_6) {
          iVar4 = read_packed_pixel_value(param_1,uStack_60,param_3 - 2 & 0xffff);
          iVar5 = read_packed_pixel_value(param_1,uStack_60,param_3 + 2 & 0xffff);
          uVar7 = iVar4 + iVar5 >> 1;
        }
        else {
          uVar7 = uStack_60 - 1 & 0xffff;
          iVar4 = read_packed_pixel_value(param_1,uVar7,uVar6);
          iVar5 = read_packed_pixel_value(param_1,uVar7,uVar1);
          uVar7 = uStack_60 + 1 & 0xffff;
          iVar2 = read_packed_pixel_value(param_1,uVar7,uVar6);
          iVar3 = read_packed_pixel_value(param_1,uVar7,uVar1);
          uVar7 = iVar4 + iVar5 + iVar2 + iVar3 >> 2;
        }
        write_nibble_to_packed_buffer(param_1,uStack_60,param_3,uVar7 & 0xffff);
        uStack_60 = uStack_60 + 1 & 0xffff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_5);
      return;
    }
    iVar4 = read_packed_pixel_value(param_1,param_2 - 1 & 0xffff,param_3 + 1 & 0xffff);
    iVar5 = read_packed_pixel_value(param_1,param_2 + 1 & 0xffff,param_3 - 1 & 0xffff);
    uVar6 = iVar4 + iVar5 >> 1 & 0xffff;
    goto LAB_1052a734;
  case 2:
    if ((param_6 == '\0') || (param_5 != 1)) {
      uVar9 = 0;
      if (param_5 == 0) {
        return;
      }
      uVar6 = param_2 - 1 & 0xffff;
      uVar1 = param_2 + 1 & 0xffff;
      do {
        param_6 = param_6 == '\0';
        if ((bool)param_6) {
          iVar4 = read_packed_pixel_value(param_1,param_2 - 2 & 0xffff,uStack_5c);
          iVar5 = read_packed_pixel_value(param_1,param_2 + 2 & 0xffff,uStack_5c);
          uVar7 = iVar4 + iVar5 >> 1;
        }
        else {
          uVar8 = uStack_5c - 1 & 0xffff;
          iVar4 = read_packed_pixel_value(param_1,uVar6,uVar8);
          uVar7 = uStack_5c + 1 & 0xffff;
          iVar5 = read_packed_pixel_value(param_1,uVar6,uVar7);
          iVar2 = read_packed_pixel_value(param_1,uVar1,uVar8);
          iVar3 = read_packed_pixel_value(param_1,uVar1,uVar7);
          uVar7 = iVar4 + iVar5 + iVar2 + iVar3 >> 2;
        }
        write_nibble_to_packed_buffer(param_1,param_2,uStack_5c,uVar7 & 0xffff);
        uStack_5c = uStack_5c + 1 & 0xffff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_5);
      return;
    }
    iVar4 = read_packed_pixel_value(param_1,param_2 - 1 & 0xffff,param_3 - 1 & 0xffff);
    iVar5 = read_packed_pixel_value(param_1,param_2 + 1 & 0xffff,param_3 + 1 & 0xffff);
    uVar6 = iVar4 + iVar5 >> 1 & 0xffff;
    goto LAB_1052a734;
  case 3:
    if ((param_6 == '\0') || (param_5 != 1)) {
      uVar9 = 0;
      if (param_5 == 0) {
        return;
      }
      uVar6 = param_3 - 1 & 0xffff;
      uVar1 = param_3 + 1 & 0xffff;
      do {
        if (param_6 == '\0') {
          iVar4 = read_packed_pixel_value(param_1,uStack_60,param_3 - 2 & 0xffff);
          iVar5 = read_packed_pixel_value(param_1,uStack_60,param_3 + 2 & 0xffff);
          uVar7 = iVar4 + iVar5 >> 1;
        }
        else {
          uVar7 = uStack_60 - 1 & 0xffff;
          iVar4 = read_packed_pixel_value(param_1,uVar7,uVar6);
          iVar5 = read_packed_pixel_value(param_1,uVar7,uVar1);
          uVar7 = uStack_60 + 1 & 0xffff;
          iVar2 = read_packed_pixel_value(param_1,uVar7,uVar6);
          iVar3 = read_packed_pixel_value(param_1,uVar7,uVar1);
          uVar7 = iVar4 + iVar5 + iVar2 + iVar3 >> 2;
        }
        write_nibble_to_packed_buffer(param_1,uStack_60,param_3,uVar7 & 0xffff);
        uVar9 = uVar9 + 1;
        uStack_60 = uStack_60 + 2 & 0xffff;
      } while (uVar9 < param_5);
      return;
    }
    uVar6 = param_2 + 1 & 0xffff;
    iVar4 = read_packed_pixel_value(param_1,uVar6,param_3 - 1 & 0xffff);
    iVar5 = read_packed_pixel_value(param_1,uVar6,param_3 + 1 & 0xffff);
    iVar4 = iVar4 + iVar5;
    break;
  case 4:
    if ((param_6 == '\0') || (param_5 != 1)) {
      uVar9 = 0;
      if (param_5 == 0) {
        return;
      }
      uVar6 = param_2 - 1 & 0xffff;
      uVar1 = param_2 + 1 & 0xffff;
      do {
        if (param_6 == '\0') {
          iVar4 = read_packed_pixel_value(param_1,param_2 - 2 & 0xffff,uStack_5c);
          iVar5 = read_packed_pixel_value(param_1,param_2 + 2 & 0xffff,uStack_5c);
          uVar7 = iVar4 + iVar5 >> 1;
        }
        else {
          uVar8 = uStack_5c - 1 & 0xffff;
          iVar4 = read_packed_pixel_value(param_1,uVar6,uVar8);
          uVar7 = uStack_5c + 1 & 0xffff;
          iVar5 = read_packed_pixel_value(param_1,uVar6,uVar7);
          iVar2 = read_packed_pixel_value(param_1,uVar1,uVar8);
          iVar3 = read_packed_pixel_value(param_1,uVar1,uVar7);
          uVar7 = iVar4 + iVar5 + iVar2 + iVar3 >> 2;
        }
        write_nibble_to_packed_buffer(param_1,param_2,uStack_5c,uVar7 & 0xffff);
        uStack_5c = uStack_5c + 2 & 0xffff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_5);
      return;
    }
    uVar6 = param_2 - 1 & 0xffff;
    iVar4 = read_packed_pixel_value(param_1,uVar6,param_3 - 1 & 0xffff);
    iVar5 = read_packed_pixel_value(param_1,uVar6,param_3 + 1 & 0xffff);
    iVar4 = iVar4 + iVar5;
    break;
  case 5:
    if (param_6 == '\0') {
      iVar4 = read_packed_pixel_value(param_1,param_2 - 2 & 0xffff,param_3);
      iVar5 = read_packed_pixel_value(param_1,param_2 + 4 & 0xffff,param_3);
      uVar6 = (iVar4 * 2 + iVar5) / 3 & 0xffff;
      goto LAB_1052a734;
    }
    uVar6 = param_3 - 1 & 0xffff;
    iVar4 = read_packed_pixel_value(param_1,param_2 - 1 & 0xffff,uVar6);
    iVar5 = read_packed_pixel_value(param_1,param_2 + 1 & 0xffff,uVar6);
    iVar4 = iVar4 + iVar5;
    break;
  case 6:
    if (param_6 == '\0') {
      iVar4 = read_packed_pixel_value(param_1,param_2 - 4 & 0xffff,param_3);
      iVar5 = read_packed_pixel_value(param_1,param_2 + 2 & 0xffff,param_3);
      uVar6 = (iVar4 + iVar5 * 2) / 3 & 0xffff;
      goto LAB_1052a734;
    }
    uVar6 = param_3 + 1 & 0xffff;
    iVar4 = read_packed_pixel_value(param_1,param_2 - 1 & 0xffff,uVar6);
    iVar5 = read_packed_pixel_value(param_1,param_2 + 1 & 0xffff,uVar6);
    iVar4 = iVar4 + iVar5;
    break;
  default:
    return;
  }
  uVar6 = iVar4 >> 1 & 0xffff;
LAB_1052a734:
  write_nibble_to_packed_buffer(param_1,param_2,param_3,uVar6);
  return;
}
