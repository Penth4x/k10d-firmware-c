/* @k10d set_object_fields_and_notify @ 0x10478b5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores two values from param_2 into param_1 at offsets 0x14 and 4, then calls two
 *   helper functions with the updated object.
 * summary:
 *   The function writes the first 4 bytes of param_2 to offset 0x14 of param_1 and the
 *   second pointer (param_2[1]) to offset 4. It then invokes
 *   allocate_and_concatenate_strings and build_concatenated_string_buffer, passing param_1
 *   and the newly set pointer at offset 4. The specific roles of the helpers and the object
 *   structure are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_fields_and_notify(void *param_1,uint32_t *param_2)

{
  char *pcVar1;
  
  *(uint32_t *)((int)param_1 + 0x14) = *param_2;
  pcVar1 = (char *)param_2[1];
  *(char **)((int)param_1 + 4) = pcVar1;
  allocate_and_concatenate_strings(param_1,pcVar1);
  build_concatenated_string_buffer(param_1,*(char **)((int)param_1 + 4));
  return;
}
