/* @k10d release_capture_resources @ 0x104208e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_capture_resources(void *param_1)

{
  release_three_resource_groups(*(uint32_t *)((int)param_1 + 0x28));
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xd4),0);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xd8),0);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xdc),0);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xe0),0);
  return;
}
