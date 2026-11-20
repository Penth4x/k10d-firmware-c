/* @k10d map_source_value_to_index_and_write @ 0x1036b26e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * purpose:
 *   Reads a source value, maps it to an index 0-4, and writes it to an object field while
 *   toggling a flag.
 * summary:
 *   The function operates on an object at param_1 + 0x14. It first checks a flag via
 *   read_byte_at_offset_0x1d and sets it to 1 if non-zero. It then reads a global
 *   iRam800043a4; if zero, it calls read_field_from_param_offset to get a value and maps it
 *   to an index (0-4) based on specific return codes (2, 6, 3, 5, 4). This index is passed
 *   to reset_and_select_one_of_six_objects along with the object offset. Finally, it checks
 *   the flag again and sets it to 0 if non-zero. The pattern suggests updating a state
 *   field based on a source value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_source_value_to_index_and_write(cls_10557c18 *param_1)

{
  char cVar2;
  int iVar1;
  uint8_t *puVar3;
  int iVar4;
  
  puVar3 = &param_1->field_0x14;
  cVar2 = read_byte_at_offset_0x1d((int)puVar3);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2((int)puVar3,1);
  }
  iVar4 = iRam800043a4;
  if (iRam800043a4 == 0) {
    iVar1 = read_field_from_param_offset(param_1);
    if (iVar1 == 2) {
      iVar4 = 0;
    }
    else if (iVar1 == 6) {
      iVar4 = 1;
    }
    else if (iVar1 == 3) {
      iVar4 = 2;
    }
    else if (iVar1 == 5) {
      iVar4 = 3;
    }
    else {
      iVar4 = 3;
      if (iVar1 == 4) {
        iVar4 = 4;
      }
    }
  }
  reset_and_select_one_of_six_objects((int)(puVar3),(uint32_t)(iVar4));
  cVar2 = read_byte_at_offset_0x1d((int)puVar3);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2((int)puVar3,0);
  }
  return;
}
