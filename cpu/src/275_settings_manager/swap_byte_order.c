/* @k10d swap_byte_order @ 0x1051c090
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t swap_byte_order(uint16_t param_1)

{
  uint16_t uStack_6;
  
  uStack_6 = (uStack_6 & ~(0xffULL << 0)) | ((((uint64_t)((uint8_t)((ushort)param_1 >> 8))) & 0xffULL) << 0);
  uStack_6 = (uStack_6 & ~(0xffULL << 8)) | ((((uint64_t)((uint8_t)param_1)) & 0xffULL) << 8);
  uStack_6 = CONCAT11((uint8_t)uStack_6,((uint8_t)((uint64_t)(uStack_6) >> 0)));
  return uStack_6;
}
