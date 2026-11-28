/* @k10d alloc_and_init_small_struct_1045c524 @ 0x1045c524
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_init_small_struct_1045c524(uint16_t *rec_ptr, uint32_t word0, uint32_t byte2, uint32_t byte3,
                 uint8_t byte4, uint8_t byte5, uint8_t byte6, uint8_t byte7)

{
  /* If rec_ptr is null, allocate an 8-byte record; skip init if alloc fails. */
  if ((rec_ptr != (uint16_t *)0x0) ||
     (rec_ptr = (uint16_t *)heap_alloc((void *)8), rec_ptr != (uint16_t *)0x0)) {
    *rec_ptr = ((uint16_t)word0);                          /* offset 0: halfword */
    *(uint8_t *)(rec_ptr + 1) = (uint8_t)byte2;            /* offset 2: byte   */
    *(uint8_t *)((int)rec_ptr + 3) = (uint8_t)byte3;       /* offset 3: byte   */
    *(uint8_t *)(rec_ptr + 2) = byte4;                     /* offset 4: byte   */
    *(uint8_t *)((int)rec_ptr + 5) = byte5;                /* offset 5: byte   */
    *(uint8_t *)(rec_ptr + 3) = byte6;                     /* offset 6: byte   */
    *(uint8_t *)((int)rec_ptr + 7) = byte7;                /* offset 7: byte   */
  }
  return;
}
