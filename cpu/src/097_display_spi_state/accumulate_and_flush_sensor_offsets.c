/* @k10d accumulate_and_flush_sensor_offsets @ 0x1041d370
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1041d384) overlaps instruction at (ram,0x1041d382)
    */

void accumulate_and_flush_sensor_offsets(cls_1059d1d8 *param_1,int param_2,uint param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_3 & 0x1000) == 0) {
    return;
  }
  if (param_2 == -0x7ffffffd) {
    iVar5 = 0xa2;
  }
  else if (param_2 == -0x7ffffffc) {
    iVar5 = 0xa3;
  }
  else if (param_2 == -0x7ffffffb) {
    iVar5 = 0xa4;
  }
  else {
    if (param_2 != -0x7ffffffa) goto code_r0x1041d3c6;
    iVar5 = 0xa5;
  }
  *(uint8_t *)((int)&param_1->field_0x0 + iVar5) = 1;
code_r0x1041d3c6:
  if (param_1->field_0xa6 == '\0') {
    if (((param_1->field_0xa2 != '\0') && (param_1->field_0xa3 != '\0')) &&
       ((param_1->field_0xa4 != '\0' && (param_1->field_0xa5 != '\0')))) {
      param_1->field_0xa6 = 1;
      param_1->field_0xa2 = 0;
      param_1->field_0xa3 = 0;
      param_1->field_0xa4 = 0;
      param_1->field_0xa5 = 0;
    }
  }
  else if ((((param_1->field_0xa2 != '\0') && (param_1->field_0xa3 != '\0')) &&
           (param_1->field_0xa4 != '\0')) &&
          ((param_1->field_0xa5 != '\0' && (param_1->field_0xa6 != '\0')))) {
    param_1->field_0xa7 = 1;
    param_1->field_0xa2 = 0;
    param_1->field_0xa3 = 0;
    param_1->field_0xa4 = 0;
    param_1->field_0xa5 = 0;
  }
  if ((param_1->field_0xa6 != '\0') && (param_1->field_0xa7 != '\0')) {
    param_1->field_0xa6 = 0;
    param_1->field_0xa7 = 0;
    set_flag_at_offset_0x84_1041b75a(param_1);
    if (param_1->field_0xa0 == '\0') {
      if (*(char *)(param_1->field_0x58 + 0x5d) == '\0') {
        set_flag_at_offset_0x7c_1041dabe(param_1);
      }
    }
    else {
      set_flag_at_offset_0x7c_1041dabe(param_1);
    }
    iVar5 = *(int *)param_1->field_0x30;
    iVar5 = (((vtbl_entry*)(iVar5))[79].fn)((int)param_1->field_0x30 + (int)((vtbl_entry*)(iVar5))[79].adj);
    if (iVar5 == 0) {
      iVar5 = param_1->field_0x58;
      uVar1 = param_1->field_0xae;
      uVar2 = param_1->field_0xb0;
      uVar3 = param_1->field_0xb2;
      *(uint16_t *)(iVar5 + 0x40) = param_1->field_0xac;
      *(uint16_t *)(iVar5 + 0x42) = uVar1;
      *(uint16_t *)(iVar5 + 0x44) = uVar2;
      *(uint16_t *)(iVar5 + 0x46) = uVar3;
    }
    else {
      iVar5 = param_1->field_0x58;
      *(uint16_t *)(iVar5 + 0xc0) = 0;
      *(uint16_t *)(iVar5 + 0xc2) = 0;
      *(uint16_t *)(iVar5 + 0xc4) = 0;
      *(uint16_t *)(iVar5 + 0xc6) = 0;
      *(uint16_t *)(iVar5 + 0xb8) = -param_1->field_0xac;
      *(uint16_t *)(iVar5 + 0xba) = -param_1->field_0xae;
      *(uint16_t *)(iVar5 + 0xbc) = -param_1->field_0xb0;
      *(uint16_t *)(iVar5 + 0xbe) = -param_1->field_0xb2;
    }
    param_1->field_0xb2 = 0;
    param_1->field_0xb0 = 0;
    param_1->field_0xae = 0;
    param_1->field_0xac = 0;
    piVar4 = (int *)param_1->field_0x50;
    if (param_1->field_0xa0 == '\0') {
      (((vtbl_entry*)(*piVar4))[2].fn)((int)piVar4 + (int)((vtbl_entry*)(*piVar4))[2].adj,0xd00005,0);
    }
    else {
      (((vtbl_entry*)(*piVar4))[2].fn)((int)piVar4 + (int)((vtbl_entry*)(*piVar4))[2].adj,0xd00009);
      param_1->field_0xa0 = 0;
    }
  }
  return;
}
