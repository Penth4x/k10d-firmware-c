/* @k10d dispatch_mode_change_event_10368890 @ 0x10368890
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103688a2) overlaps instruction at (ram,0x103688a0)
    */

uint32_t dispatch_mode_change_event_10368890(void *param_1,uint32_t param_2)

{
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar1;
  char cVar6;
  uint32_t uVar2;
  void *pvVar7;
  
  switch(param_2) {
  case 0:
    pvVar7 = (void *)((int)param_1 + 0x1c);
    bVar3 = compare_bytes_at_offsets_1051e968((int)pvVar7);
    if (!bVar3) {
      return 1;
    }
    cVar6 = read_byte_at_offset_five_1051e924((int)pvVar7);
    iVar1 = allocate_and_init_buffer_1036bd76(param_1,3,pvVar7);
    if (iVar1 != 1) {
      return 0;
    }
    cVar4 = read_byte_at_offset_0x4c_1051ec22((int)pvVar7);
    if (cVar4 == '\0') {
      cVar4 = read_byte_at_offset_five_1051e924((int)pvVar7);
      if (cVar6 == cVar4) {
        return 1;
      }
LAB_10368a2c:
      bVar5 = read_byte_at_offset_five_1051e924((int)param_1 + 0x1c);
      set_index_and_dispatch_event((cls_10558e74 *)((int)param_1 + 0x6c),(uint)bVar5);
      init_struct_and_set_offset_field(param_1);
      return 1;
    }
    break;
  case 1:
    pvVar7 = (void *)((int)param_1 + 0x1c);
    bVar3 = check_byte_range_condition_1051e97a((int)pvVar7);
    if (!bVar3) {
      return 1;
    }
    cVar6 = read_byte_at_offset_five_1051e924((int)pvVar7);
    iVar1 = allocate_and_init_buffer_1036bd76(param_1,4,pvVar7);
    if (iVar1 != 1) {
      return 0;
    }
    cVar4 = read_byte_at_offset_0x4c_1051ec22((int)pvVar7);
    if (cVar4 == '\0') {
      cVar4 = read_byte_at_offset_five_1051e924((int)pvVar7);
      if (cVar6 == cVar4) {
        return 1;
      }
      goto LAB_10368a2c;
    }
    break;
  case 2:
    pvVar7 = (void *)((int)param_1 + 0x1c);
    bVar3 = check_byte_at_offset_five_1051ea50((int)pvVar7);
    if (!bVar3) {
      return 1;
    }
    cVar6 = read_byte_at_offset_five_1051e924((int)pvVar7);
    iVar1 = allocate_and_init_buffer_1036bd76(param_1,5,pvVar7);
    if (iVar1 != 1) {
      return 0;
    }
    cVar4 = read_byte_at_offset_0x4c_1051ec22((int)pvVar7);
    if (cVar4 == '\0') {
      cVar4 = read_byte_at_offset_five_1051e924((int)pvVar7);
      if (cVar6 == cVar4) {
        return 1;
      }
      goto LAB_10368a2c;
    }
    break;
  case 3:
    pvVar7 = (void *)((int)param_1 + 0x1c);
    bVar3 = check_byte_increment_1051ea5e((int)pvVar7);
    if (!bVar3) {
      return 1;
    }
    cVar6 = read_byte_at_offset_five_1051e924((int)pvVar7);
    iVar1 = allocate_and_init_buffer_1036bd76(param_1,6,pvVar7);
    if (iVar1 != 1) {
      return 0;
    }
    cVar4 = read_byte_at_offset_0x4c_1051ec22((int)pvVar7);
    if (cVar4 == '\0') {
      cVar4 = read_byte_at_offset_five_1051e924((int)pvVar7);
      if (cVar6 == cVar4) {
        return 1;
      }
      goto LAB_10368a2c;
    }
    break;
  case 4:
    iVar1 = allocate_and_init_buffer_1036bd76(param_1,7,(void *)((int)param_1 + 0x1c));
    if (iVar1 != 1) {
      return 0;
    }
    cVar6 = read_byte_at_offset_0x4c_1051ec22((int)param_1 + 0x1c);
    goto joined_r0x10368a96;
  case 5:
    iVar1 = allocate_and_init_buffer_1036bd76(param_1,8,(void *)((int)param_1 + 0x1c));
    if (iVar1 != 1) {
      return 0;
    }
    cVar6 = read_byte_at_offset_0x4c_1051ec22((int)param_1 + 0x1c);
joined_r0x10368a96:
    if (cVar6 == '\0') {
      return 1;
    }
    break;
  default:
    return 1;
  }
  uVar2 = process_exposure_sequence(param_1);
  return uVar2;
}
