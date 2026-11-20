/* @k10d initialize_object_fields_1047f846 @ 0x1047f846
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_fields_1047f846(cls_105aaf90 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  initialize_object_header((cls_105aaf60 *)param_1);
  write_two_bytes_to_object_offset_1047f8d6(param_1,0);
  write_two_bytes_to_object(param_1,0,0);
  write_u32_to_obj_offset_0x2c(param_1,2);
  write_two_bytes_to_object_offset_1047f918(param_1,1);
  write_two_bytes_to_object_offset_1047f928(param_1,6);
  set_object_field_at_offset_0x40(param_1,0x80);
  set_byte_at_offset_0x42(param_1,0x29);
  write_u32_to_obj_offset_0x43(param_1,0);
  copy_eleven_bytes(param_1,0x105aaf54/*ROM*/);
  iVar3 = param_1->field_0x0;
  uVar1 = get_or_init_global_buffer();
  iVar2 = get_ram_value_by_index(uVar1,0x20);
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    *(uint8_t *)(iVar4 + iVar3 + 0x52) = *(uint8_t *)(iVar4 + iVar2);
  } while (iVar4 != 0);
  return;
}
