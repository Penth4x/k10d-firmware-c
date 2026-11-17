/* @k10d dispatch_event_by_type_103642ca @ 0x103642ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103642de) overlaps instruction at (ram,0x103642dc)
    */

uint32_t dispatch_event_by_type_103642ca(void *param_1,uint32_t param_2)

{
  short sVar1;
  bool bVar5;
  char cVar6;
  int *piVar2;
  uint8_t uVar7;
  int iVar3;
  char cVar8;
  uint32_t uVar4;
  void *pvVar9;
  
  switch(param_2) {
  case 0:
    pvVar9 = (void *)((int)param_1 + 0x1c);
    bVar5 = compare_bytes_at_offsets_1051e580((int)pvVar9);
    if (!bVar5) {
      return 1;
    }
    cVar8 = read_byte_at_offset_five_1051e50e((int)pvVar9);
    iVar3 = dispatch_event_with_buffer_lock(param_1,7,pvVar9);
    if (iVar3 != 1) {
      return 0;
    }
    cVar6 = read_byte_at_offset_0x4c_1051e83a((int)pvVar9);
    if (cVar6 == '\0') {
      cVar6 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      if (cVar8 == cVar6) {
        return 1;
      }
      piVar2 = *(int **)((int)param_1 + 0x70);
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0xc0);
      uVar7 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      (**(code **)(iVar3 + 0xc4))((int)piVar2 + (int)sVar1,uVar7);
LAB_10364518:
      release_object_at_offset_0x70(param_1);
      return 1;
    }
    break;
  case 1:
    pvVar9 = (void *)((int)param_1 + 0x1c);
    bVar5 = check_byte_range_condition_1051e592((int)pvVar9);
    if (!bVar5) {
      return 1;
    }
    cVar8 = read_byte_at_offset_five_1051e50e((int)pvVar9);
    iVar3 = dispatch_event_with_buffer_lock(param_1,8,pvVar9);
    if (iVar3 != 1) {
      return 0;
    }
    cVar6 = read_byte_at_offset_0x4c_1051e83a((int)pvVar9);
    if (cVar6 == '\0') {
      cVar6 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      if (cVar8 == cVar6) {
        return 1;
      }
      piVar2 = *(int **)((int)param_1 + 0x70);
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0xc0);
      uVar7 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      (**(code **)(iVar3 + 0xc4))((int)piVar2 + (int)sVar1,uVar7);
      goto LAB_10364518;
    }
    break;
  case 2:
    pvVar9 = (void *)((int)param_1 + 0x1c);
    bVar5 = check_byte_at_offset_five_1051e668((int)pvVar9);
    if (!bVar5) {
      return 1;
    }
    cVar8 = read_byte_at_offset_five_1051e50e((int)pvVar9);
    iVar3 = dispatch_event_with_buffer_lock(param_1,9,pvVar9);
    if (iVar3 != 1) {
      return 0;
    }
    cVar6 = read_byte_at_offset_0x4c_1051e83a((int)pvVar9);
    if (cVar6 == '\0') {
      cVar6 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      if (cVar8 == cVar6) {
        return 1;
      }
      piVar2 = *(int **)((int)param_1 + 0x70);
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0xc0);
      uVar7 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      (**(code **)(iVar3 + 0xc4))((int)piVar2 + (int)sVar1,uVar7);
      goto LAB_10364518;
    }
    break;
  case 3:
    pvVar9 = (void *)((int)param_1 + 0x1c);
    bVar5 = check_byte_increment_1051e676((int)pvVar9);
    if (!bVar5) {
      return 1;
    }
    cVar8 = read_byte_at_offset_five_1051e50e((int)pvVar9);
    iVar3 = dispatch_event_with_buffer_lock(param_1,10,pvVar9);
    if (iVar3 != 1) {
      return 0;
    }
    cVar6 = read_byte_at_offset_0x4c_1051e83a((int)pvVar9);
    if (cVar6 == '\0') {
      cVar6 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      if (cVar8 == cVar6) {
        return 1;
      }
      piVar2 = *(int **)((int)param_1 + 0x70);
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0xc0);
      uVar7 = read_byte_at_offset_five_1051e50e((int)pvVar9);
      (**(code **)(iVar3 + 0xc4))((int)piVar2 + (int)sVar1,uVar7);
      goto LAB_10364518;
    }
    break;
  case 4:
    iVar3 = dispatch_event_with_buffer_lock(param_1,0xb,(void *)((int)param_1 + 0x1c));
    if (iVar3 != 1) {
      return 0;
    }
    cVar8 = read_byte_at_offset_0x4c_1051e83a((int)param_1 + 0x1c);
    goto joined_r0x10364568;
  case 5:
    iVar3 = dispatch_event_with_buffer_lock(param_1,0xc,(void *)((int)param_1 + 0x1c));
    if (iVar3 != 1) {
      return 0;
    }
    cVar8 = read_byte_at_offset_0x4c_1051e83a((int)param_1 + 0x1c);
joined_r0x10364568:
    if (cVar8 == '\0') {
      return 1;
    }
    break;
  default:
    return 1;
  }
  uVar4 = process_sensor_readout_buffer_1036457e(param_1);
  return uVar4;
}
