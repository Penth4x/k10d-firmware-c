/* @k10d read_structured_field_by_index @ 0x1041a612
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_structured_field_by_index(int param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  uVar1 = 0;
  if (((param_2 < 9) &&
      (puVar2 = (uint32_t *)(param_1 + 0x1588 + param_2 * 8), *(char *)(puVar2 + 1) != '\0')) &&
     (*(char *)((int)puVar2 + 5) != '\0')) {
    uVar1 = *puVar2;
  }
  return uVar1;
}
