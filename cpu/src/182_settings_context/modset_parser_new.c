/* @k10d modset_parser_new @ 0x10487128
 * name: verified (structural evidence: decomp + trace: constructor runs, parse never invoked on 1.31)
 * unit: 182_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of the MODSET.TXT parser task (class cls_105b2fd8, singleton 0x80048a88);
 *   runs at boot via a PC-relative call. Builds the task; the parse itself is driven later
 *   by the task body.
 * summary:
 *   VERIFIED: decomp + trace: constructor runs, parse never invoked on 1.31
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b2fd8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x88), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    cls_105a2c1c_new(param_1 + 0x13);
    cls_1059e478_new(param_1 + 0x18);
    param_1[0x12] = (uint32_t)&DAT_105b2fd8/*ROM*/;
    param_1[0x17] = (uint32_t)&DAT_105b3010/*ROM*/;
    param_1[0x18] = (uint32_t)&DAT_105b3028/*ROM*/;
    cls_105a2af8_new(param_1 + 0x19);
    *(uint8_t *)(param_1 + 0x1b) = 0;
    *(uint8_t *)((int)param_1 + 0x6d) = 0;
    *(uint8_t *)((int)param_1 + 0x6e) = 0;
    *(uint8_t *)((int)param_1 + 0x6f) = 0;
    *(uint8_t *)(param_1 + 0x1c) = 0;
    *(uint8_t *)((int)param_1 + 0x71) = 0;
    *(uint8_t *)((int)param_1 + 0x72) = 0;
    *(uint8_t *)((int)param_1 + 0x73) = 0;
    *(uint8_t *)(param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x75) = 0;
    *(uint8_t *)((int)param_1 + 0x76) = 0;
    *(uint8_t *)((int)param_1 + 0x77) = 0;
    *(uint8_t *)(param_1 + 0x1e) = 0;
    *(uint8_t *)((int)param_1 + 0x79) = 0;
    *(uint8_t *)((int)param_1 + 0x7a) = 0;
    *(uint8_t *)((int)param_1 + 0x7b) = 0;
    *(uint8_t *)(param_1 + 0x1f) = 0;
    *(uint8_t *)((int)param_1 + 0x7d) = 0;
    *(uint8_t *)((int)param_1 + 0x7e) = 0;
    *(uint8_t *)((int)param_1 + 0x7f) = 0;
    *(uint8_t *)(param_1 + 0x20) = 0;
    *(uint8_t *)((int)param_1 + 0x81) = 0;
    *(uint8_t *)((int)param_1 + 0x82) = 0;
    *(uint8_t *)((int)param_1 + 0x83) = 0;
    param_1[0x21] = 0;
    wait_flg_obj(param_1 + 0x19,0);
    alloc_pool_and_init_task(param_1 + 0x13,0x10,0x1000,4);
  }
  return (int)param_1;
}
