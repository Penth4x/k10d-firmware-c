/* @k10d write_three_values_to_object @ 0x104f437c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_values_to_object(int param_1,uint16_t *param_2)

{
  (*(code *)0x1044db3c/*ROM*/)(*(int *)(param_1 + 0xc) + 0x10,*param_2);
  (*(code *)0x1044db4c/*ROM*/)(*(int *)(param_1 + 0xc) + 0x10,param_2[1]);
  (*(code *)0x1044db5c/*ROM*/)(*(int *)(param_1 + 0xc) + 0x10,param_2[2]);
  return;
}
