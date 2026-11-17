/* @k10d write_four_fields_to_object @ 0x10532058
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_fields_to_object(int param_1,int param_2)

{
  uint8_t uVar1;
  uint8_t uVar2;
  byte bVar3;
  void *pvVar4;
  
  pvVar4 = (void *)(*(int *)(param_1 + 0x14) + 0x4a8);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,0);
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,1);
  store_second_word(pvVar4,CONCAT11(uVar1,uVar2));
  bVar3 = read_byte_from_struct_offset_104a8c54(param_2,2);
  set_clamped_byte_field(pvVar4,(uint)bVar3);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,3);
  clamp_and_store_byte_at_offset3(pvVar4,uVar1,0);
  return;
}
