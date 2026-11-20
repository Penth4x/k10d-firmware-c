/* @k10d step_mode_parameter_value @ 0x10371dde
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Increments or decrements a parameter field selected by a mode index, with range checks
 *   and mode-specific wrapping.
 * summary:
 *   Dispatches on the 32-bit value at offset 0x54 of the object to select one of eight
 *   parameter fields (offsets 0x64-0x6b). Uses param_2 as a direction flag (non-zero for
 *   increment, zero for decrement) to step the selected field's value. Calls
 *   read_field_at_offset_0x4a8 for validation in mode 2, and
 *   set_setting_0x82/set_setting_0x83/set_setting_0x84 to propagate changes for modes 0, 1,
 *   and 3 respectively. Returns 1 on successful modification, 0 if the value is at its
 *   boundary.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10371df4) overlaps instruction at (ram,0x10371df2)
    */

uint32_t step_mode_parameter_value(void *param_1,int param_2)

{
  uint8_t uVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 != 0) {
    switch(*(uint32_t *)((int)param_1 + 0x54)) {
    case 0:
      cVar2 = *(char *)((int)param_1 + 100);
      if (cVar2 == '\0') {
        uVar1 = 1;
      }
      else if (cVar2 == '\x01') {
        uVar1 = 2;
      }
      else {
        if (cVar2 != '\x02') goto LAB_10372010;
        uVar1 = 0;
      }
      *(uint8_t *)((int)param_1 + 100) = uVar1;
      goto LAB_10372010;
    case 1:
      cVar2 = *(char *)((int)param_1 + 0x65);
      if (cVar2 == '\0') {
        uVar1 = 1;
      }
      else if (cVar2 == '\x01') {
        uVar1 = 2;
      }
      else {
        if (cVar2 != '\x02') goto LAB_10372052;
        uVar1 = 0;
      }
      *(uint8_t *)((int)param_1 + 0x65) = uVar1;
      goto LAB_10372052;
    case 2:
      iVar3 = read_field_at_offset_0x4a8((int)param_1);
      if (iVar3 == 0) {
        if (*(char *)((int)param_1 + 0x5e) == '\x0f') {
          switch(*(uint8_t *)((int)param_1 + 0x66)) {
          case 0:
            uVar1 = 1;
            break;
          case 1:
            uVar1 = 2;
            break;
          case 2:
            uVar1 = 3;
            break;
          case 3:
            uVar1 = 4;
            break;
          case 4:
            uVar1 = 5;
            break;
          case 5:
            uVar1 = 6;
            break;
          case 6:
            uVar1 = 7;
            break;
          case 7:
            uVar1 = 8;
            break;
          case 8:
            uVar1 = 9;
            break;
          case 9:
          case 10:
          case 0xb:
            uVar1 = 0xc;
            break;
          case 0xc:
            uVar1 = 0xd;
            break;
          case 0xd:
            uVar1 = 0xe;
            break;
          case 0xe:
            uVar1 = 0xf;
            break;
          case 0xf:
            uVar1 = 0;
            break;
          default:
            return 1;
          }
        }
        else {
          switch(*(uint8_t *)((int)param_1 + 0x66)) {
          case 0:
            uVar1 = 1;
            break;
          case 1:
            uVar1 = 2;
            break;
          case 2:
            uVar1 = 3;
            break;
          case 3:
            uVar1 = 4;
            break;
          case 4:
            uVar1 = 5;
            break;
          case 5:
            uVar1 = 6;
            break;
          case 6:
            uVar1 = 7;
            break;
          case 7:
            uVar1 = 8;
            break;
          case 8:
            uVar1 = 9;
            break;
          case 9:
          case 10:
          case 0xb:
            uVar1 = 0xc;
            break;
          case 0xc:
            uVar1 = 0xd;
            break;
          case 0xd:
            uVar1 = 0xe;
            break;
          case 0xe:
            uVar1 = 0;
            break;
          default:
            return 1;
          }
        }
        *(uint8_t *)((int)param_1 + 0x66) = uVar1;
        return 1;
      }
      return 0;
    case 3:
      if (3 < *(byte *)((int)param_1 + 0x67)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x67) + 1;
      goto LAB_1037213e;
    case 4:
      if (*(char *)((int)param_1 + 0x68) == '\0') {
        *(uint8_t *)((int)param_1 + 0x68) = 1;
        return 1;
      }
      if (*(char *)((int)param_1 + 0x68) == '\x01') {
        *(uint8_t *)((int)param_1 + 0x68) = 0;
        return 1;
      }
      return 1;
    case 5:
      if (5 < *(byte *)((int)param_1 + 0x69)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x69) + 1;
      iVar3 = 0x69;
      break;
    case 6:
      if (5 < *(byte *)((int)param_1 + 0x6a)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x6a) + 1;
      iVar3 = 0x6a;
      break;
    case 7:
      if (*(byte *)((int)param_1 + 0x6b) < 6) {
        *(byte *)((int)param_1 + 0x6b) = *(byte *)((int)param_1 + 0x6b) + 1;
        return 1;
      }
      return 0;
    default:
      return 0;
    }
    goto LAB_10371f94;
  }
  switch(*(uint32_t *)((int)param_1 + 0x54)) {
  case 0:
    cVar2 = *(char *)((int)param_1 + 100);
    if (cVar2 == '\0') {
      *(uint8_t *)((int)param_1 + 100) = 2;
    }
    else if (cVar2 == '\x01') {
      *(uint8_t *)((int)param_1 + 100) = 0;
    }
    else if (cVar2 == '\x02') {
      *(uint8_t *)((int)param_1 + 100) = 1;
    }
LAB_10372010:
    set_setting_0x82((int *)(0x800158d4/*SDRAM*/),(uint32_t)(*(uint8_t *)((int)param_1 + 100)));
    return 1;
  case 1:
    cVar2 = *(char *)((int)param_1 + 0x65);
    if (cVar2 == '\0') {
      *(uint8_t *)((int)param_1 + 0x65) = 2;
    }
    else if (cVar2 == '\x01') {
      *(uint8_t *)((int)param_1 + 0x65) = 0;
    }
    else if (cVar2 == '\x02') {
      *(uint8_t *)((int)param_1 + 0x65) = 1;
    }
LAB_10372052:
    set_setting_0x83((int *)(0x800158d4/*SDRAM*/),(uint32_t)(*(uint8_t *)((int)param_1 + 0x65)));
    return 1;
  case 2:
    iVar3 = read_field_at_offset_0x4a8((int)param_1);
    if (iVar3 != 0) {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x5e) != '\x0f') {
      switch(*(uint8_t *)((int)param_1 + 0x66)) {
      case 0:
        uVar1 = 0xe;
        break;
      case 1:
        uVar1 = 0;
        break;
      case 2:
        uVar1 = 1;
        break;
      case 3:
        uVar1 = 2;
        break;
      case 4:
        uVar1 = 3;
        break;
      case 5:
        uVar1 = 4;
        break;
      case 6:
        uVar1 = 5;
        break;
      case 7:
        uVar1 = 6;
        break;
      case 8:
        uVar1 = 7;
        break;
      case 9:
      case 10:
      case 0xb:
        uVar1 = 8;
        break;
      case 0xc:
        uVar1 = 9;
        break;
      case 0xd:
        uVar1 = 0xc;
        break;
      case 0xe:
        uVar1 = 0xd;
        break;
      default:
        goto LAB_103721ae;
      }
      goto LAB_1037212e;
    }
    break;
  case 3:
    if (*(char *)((int)param_1 + 0x67) == '\0') {
      return 0;
    }
    cVar2 = *(char *)((int)param_1 + 0x67) + -1;
LAB_1037213e:
    *(char *)((int)param_1 + 0x67) = cVar2;
    set_setting_0x84((int *)(0x800158d4/*SDRAM*/),(uint32_t)(cVar2));
    return 1;
  case 4:
    if (*(char *)((int)param_1 + 0x68) == '\0') {
      *(uint8_t *)((int)param_1 + 0x68) = 1;
      return 1;
    }
    if (*(char *)((int)param_1 + 0x68) == '\x01') {
      *(uint8_t *)((int)param_1 + 0x68) = 0;
      return 1;
    }
    return 1;
  case 5:
    if (*(char *)((int)param_1 + 0x69) == '\0') {
      return 0;
    }
    cVar2 = *(char *)((int)param_1 + 0x69) + -1;
    iVar3 = 0x69;
    goto LAB_10371f94;
  case 6:
    if (*(char *)((int)param_1 + 0x6a) == '\0') {
      return 0;
    }
    cVar2 = *(char *)((int)param_1 + 0x6a) + -1;
    iVar3 = 0x6a;
LAB_10371f94:
    *(char *)(iVar3 + (int)param_1) = cVar2;
    return 1;
  case 7:
    if (*(char *)((int)param_1 + 0x6b) != '\0') {
      *(char *)((int)param_1 + 0x6b) = *(char *)((int)param_1 + 0x6b) + -1;
      return 1;
    }
    return 0;
  default:
    return 0;
  }
  switch(*(uint8_t *)((int)param_1 + 0x66)) {
  case 0:
    *(uint8_t *)((int)param_1 + 0x66) = 0xf;
    return 1;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 1;
    goto LAB_1037212e;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 3;
    goto LAB_1037212e;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 5;
    break;
  case 7:
    uVar1 = 6;
    break;
  case 8:
    uVar1 = 7;
    break;
  case 9:
  case 10:
  case 0xb:
    uVar1 = 8;
    break;
  case 0xc:
    uVar1 = 9;
    break;
  case 0xd:
    uVar1 = 0xc;
    goto LAB_1037212e;
  case 0xe:
    uVar1 = 0xd;
    goto LAB_1037212e;
  case 0xf:
    uVar1 = 0xe;
LAB_1037212e:
    *(uint8_t *)((int)param_1 + 0x66) = uVar1;
    return 1;
  default:
    return 1;
  }
  *(uint8_t *)((int)param_1 + 0x66) = uVar1;
LAB_103721ae:
  return 1;
}
