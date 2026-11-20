/* @k10d build_capture_status_packet_1041fee6 @ 0x1041fee6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_capture_status_packet_1041fee6(void *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uintptr_t sp;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint32_t uStack_10;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_c = 0x20;
  uStack_a = 0x20;
  iVar2 = **(int **)((int)param_1 + 0x30);
  uStack_22 = (((vtbl_entry*)(iVar2))[60].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[60].adj);
  if (param_2 == 0) {
    iVar2 = **(int **)((int)param_1 + 0x30);
    uStack_24 = (((vtbl_entry*)(iVar2))[62].fn)
                          ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[62].adj);
  }
  else if (param_2 == 1) {
    iVar2 = **(int **)((int)param_1 + 0x30);
    uStack_24 = (((vtbl_entry*)(iVar2))[63].fn)
                          ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[63].adj);
  }
  else {
    iVar2 = **(int **)((int)param_1 + 0x30);
    uStack_24 = (((vtbl_entry*)(iVar2))[62].fn)
                          ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[62].adj);
  }
  iVar2 = **(int **)((int)param_1 + 0x30);
  uStack_1e = (((vtbl_entry*)(iVar2))[64].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[64].adj);
  iVar2 = **(int **)((int)param_1 + 0x30);
  uStack_20 = (((vtbl_entry*)(iVar2))[65].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[65].adj);
  uStack_16 = uStack_22;
  uStack_1c = 0;
  uStack_18 = uStack_24;
  iVar2 = **(int **)((int)param_1 + 0x30);
  uStack_12 = (((vtbl_entry*)(iVar2))[66].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[66].adj);
  iVar2 = **(int **)((int)param_1 + 0x30);
  uStack_14 = (((vtbl_entry*)(iVar2))[67].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar2))[67].adj);
  uStack_c = 0x20;
  uStack_a = 0x20;
  uStack_10 = 0;
  cVar1 = read_sysparam_byte(*(uint8_t **)((int)param_1 + 0x48));
  if (cVar1 != '\0') {
    iVar2 = get_sysparam_store_byte((void*)(*(uint32_t *)((int)param_1 + 0x48)),0x1b);
    if (iVar2 != 0) {
      uStack_c = *(uint16_t *)(*(int *)((int)param_1 + 0x48) + 0x2c);
      uStack_a = *(uint16_t *)(*(int *)((int)param_1 + 0x48) + 0x2e);
      switch(*(uint16_t *)(*(int *)((int)param_1 + 0x48) + 0x30)) {
      case 0:
      default:
        uStack_10 = 0;
        break;
      case 1:
        uStack_10 = 1;
        break;
      case 2:
        uStack_10 = 2;
        break;
      case 3:
        uStack_10 = 3;
        break;
      case 4:
        uStack_10 = 4;
        break;
      case 5:
        uStack_10 = 5;
        break;
      case 6:
        uStack_10 = 6;
        break;
      case 7:
        uStack_10 = 7;
        break;
      case 8:
        uStack_10 = 8;
      }
    }
    switch(*(uint16_t *)(*(int *)((int)param_1 + 0x48) + 0x32)) {
    case 0:
      uStack_1c = 0;
      break;
    case 1:
      uStack_1c = 1;
      break;
    case 2:
      uStack_1c = 2;
      break;
    case 3:
      uStack_1c = 3;
      break;
    case 4:
      uStack_1c = 4;
      break;
    case 5:
      uStack_1c = 5;
      break;
    case 6:
      uStack_1c = 6;
      break;
    case 7:
      uStack_1c = 7;
      break;
    case 8:
      uStack_1c = 8;
      break;
    case 9:
      uStack_1c = 9;
      break;
    case 10:
      uStack_1c = 10;
      break;
    default:
      uStack_1c = 0;
    }
  }
  populate_struct_from_array(*(uint32_t *)((int)param_1 + 0x28),*(int **)((int)param_1 + 0xec),&uStack_24);
  populate_struct_from_array(*(uint32_t *)((int)param_1 + 0x28),*(int **)((int)param_1 + 0xf0),&uStack_24);
  return;
}
