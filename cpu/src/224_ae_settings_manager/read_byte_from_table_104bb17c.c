/* @k10d read_byte_from_table_104bb17c @ 0x104bb17c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_table_104bb17c(int param_1,int param_2,uint8_t *param_3)

{
  uint8_t *puVar1;
  
  puVar1 = (uint8_t *)(param_1 + 0x4c + param_2 * 2);
  *param_3 = puVar1[1];
  return *puVar1;
}
