/* @k10d accumulate_and_flush_sensor_offsets @ 0x1041d370
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1041d384) overlaps instruction at (ram,0x1041d382)
    */

void accumulate_and_flush_sensor_offsets(void *param_1,int param_2,uint param_3)

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
  *(uint8_t *)(iVar5 + (int)param_1) = 1;
code_r0x1041d3c6:
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    if (((*(char *)((int)param_1 + 0xa2) != '\0') && (*(char *)((int)param_1 + 0xa3) != '\0')) &&
       ((*(char *)((int)param_1 + 0xa4) != '\0' && (*(char *)((int)param_1 + 0xa5) != '\0')))) {
      *(uint8_t *)((int)param_1 + 0xa6) = 1;
      *(uint8_t *)((int)param_1 + 0xa2) = 0;
      *(uint8_t *)((int)param_1 + 0xa3) = 0;
      *(uint8_t *)((int)param_1 + 0xa4) = 0;
      *(uint8_t *)((int)param_1 + 0xa5) = 0;
    }
  }
  else if ((((*(char *)((int)param_1 + 0xa2) != '\0') && (*(char *)((int)param_1 + 0xa3) != '\0'))
           && (*(char *)((int)param_1 + 0xa4) != '\0')) &&
          ((*(char *)((int)param_1 + 0xa5) != '\0' && (*(char *)((int)param_1 + 0xa6) != '\0')))) {
    *(uint8_t *)((int)param_1 + 0xa7) = 1;
    *(uint8_t *)((int)param_1 + 0xa2) = 0;
    *(uint8_t *)((int)param_1 + 0xa3) = 0;
    *(uint8_t *)((int)param_1 + 0xa4) = 0;
    *(uint8_t *)((int)param_1 + 0xa5) = 0;
  }
  if ((*(char *)((int)param_1 + 0xa6) != '\0') && (*(char *)((int)param_1 + 0xa7) != '\0')) {
    *(uint8_t *)((int)param_1 + 0xa6) = 0;
    *(uint8_t *)((int)param_1 + 0xa7) = 0;
    set_flag_at_offset_0x84_1041b75a(param_1);
    if (*(char *)((int)param_1 + 0xa0) == '\0') {
      if (*(char *)(*(int *)((int)param_1 + 0x58) + 0x5d) == '\0') {
        set_flag_at_offset_0x7c_1041dabe(param_1);
      }
    }
    else {
      set_flag_at_offset_0x7c_1041dabe(param_1);
    }
    iVar5 = **(int **)((int)param_1 + 0x30);
    iVar5 = (**(code **)(iVar5 + 0x27c))
                      ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar5 + 0x278));
    if (iVar5 == 0) {
      iVar5 = *(int *)((int)param_1 + 0x58);
      uVar1 = *(uint16_t *)((int)param_1 + 0xae);
      uVar2 = *(uint16_t *)((int)param_1 + 0xb0);
      uVar3 = *(uint16_t *)((int)param_1 + 0xb2);
      *(uint16_t *)(iVar5 + 0x40) = *(uint16_t *)((int)param_1 + 0xac);
      *(uint16_t *)(iVar5 + 0x42) = uVar1;
      *(uint16_t *)(iVar5 + 0x44) = uVar2;
      *(uint16_t *)(iVar5 + 0x46) = uVar3;
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0x58);
      *(uint16_t *)(iVar5 + 0xc0) = 0;
      *(uint16_t *)(iVar5 + 0xc2) = 0;
      *(uint16_t *)(iVar5 + 0xc4) = 0;
      *(uint16_t *)(iVar5 + 0xc6) = 0;
      *(short *)(iVar5 + 0xb8) = -*(short *)((int)param_1 + 0xac);
      *(short *)(iVar5 + 0xba) = -*(short *)((int)param_1 + 0xae);
      *(short *)(iVar5 + 0xbc) = -*(short *)((int)param_1 + 0xb0);
      *(short *)(iVar5 + 0xbe) = -*(short *)((int)param_1 + 0xb2);
    }
    *(uint16_t *)((int)param_1 + 0xb2) = 0;
    *(uint16_t *)((int)param_1 + 0xb0) = 0;
    *(uint16_t *)((int)param_1 + 0xae) = 0;
    *(uint16_t *)((int)param_1 + 0xac) = 0;
    piVar4 = *(int **)((int)param_1 + 0x50);
    if (*(char *)((int)param_1 + 0xa0) == '\0') {
      (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),0xd00005,0);
    }
    else {
      (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),0xd00009);
      *(uint8_t *)((int)param_1 + 0xa0) = 0;
    }
  }
  return;
}
