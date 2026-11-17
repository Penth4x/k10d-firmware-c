/* @k10d write_three_values_to_offset @ 0x104f4338
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_values_to_offset(int param_1,uint16_t *param_2)

{
  (*(code *)0x1044dab8/*ROM*/)(*(int *)(param_1 + 0xc) + 0x10,*param_2);
  (*(code *)0x1044dad0/*ROM*/)(*(int *)(param_1 + 0xc) + 0x10,param_2[1]);
  (*(code *)0x1044dae8/*ROM*/)(*(int *)(param_1 + 0xc) + 0x10,param_2[2]);
  return;
}
