/* @k10d check_three_conditions_on_object @ 0x1044a4dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns 1 if three sequential checks on the input object all succeed, otherwise 0.
 * summary:
 *   The function calls sdhc_select_card with the object and 0, then
 *   dispatch_on_short_field, then sdhc_select_card again with a value from offset 0xe0 of
 *   the object. It returns 1 only if all three calls return non-zero. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_three_conditions_on_object(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_select_card(param_1,0);
  uVar2 = 0;
  if (((iVar1 != 0) && (iVar1 = dispatch_on_short_field(param_1), iVar1 != 0)) &&
     (iVar1 = sdhc_select_card(param_1,*(uint16_t *)((int)param_1 + 0xe0)), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
