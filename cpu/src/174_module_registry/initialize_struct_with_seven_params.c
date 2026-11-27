/* @k10d initialize_struct_with_seven_params @ 0x10480aa2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 174_module_registry (unit names are model-proposed)
 * purpose:
 *   Initializes a struct at param_1+10 by calling six setter functions with the provided
 *   parameters.
 * summary:
 *   The function takes a pointer to a structure and an offset of 10 (20 bytes). It calls a
 *   sequence of six functions (store_second_word through store_clamped_byte_at_offset_7)
 *   passing the offset pointer and various parameters (param_3, param_4, param_5, param_6,
 *   param_7). The callees appear to be field initializers or setters for the structure. No
 *   specific camera subsystem is identifiable from the mechanical pattern alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_with_seven_params(uint16_t *param_1,uint32_t param_2,int param_3,uint32_t param_4,byte param_5
                 ,byte param_6,byte param_7)

{
  uint16_t *puVar1;
  
  puVar1 = param_1 + 10;
  store_second_word(puVar1, (uint32_t)param_2);
  set_clamped_byte_field(puVar1,param_3);
  clamp_and_store_byte_at_offset3(puVar1,param_4,0);
  store_capped_byte_at_offset(puVar1,(uint)param_5);
  store_clamped_byte_at_offset_6(puVar1,(uint)param_6);
  store_clamped_byte_at_offset_7(puVar1,(uint)param_7);
  return;
}
