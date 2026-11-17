/* @k10d wait_for_event_with_retry @ 0x100f14a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_event_with_retry(uint32_t param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    do {
      iVar1 = check_two_status_flags(0x2902);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(param_1);
        dispatch_event_with_retry(0x2902,0);
        iVar1 = call_helper_with_zero_arg_100f19a0();
        if (iVar1 != -1) {
          return 0;
        }
      }
      bVar3 = cVar2 != '\0';
      cVar2 = cVar2 + -1;
    } while (bVar3);
  }
  return 0xffffffff;
}
