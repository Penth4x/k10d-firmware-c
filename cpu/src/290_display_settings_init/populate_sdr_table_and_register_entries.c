/* @k10d populate_sdr_table_and_register_entries @ 0x1052fe2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Writes 16 consecutive 10-word records into SDRAM and calls a helper with a pointer to
 *   each record's associated SDRAM location.
 * summary:
 *   The function sequentially fills 16 records (each 10 words) starting at 0x8005ad34. Each
 *   record contains pointers to ROM data (e.g., 0x105fb9f3, 0x105fde38, 0x10602e54) and
 *   SDRAM addresses in the 0x80013xxx-0x80014xxx range. After writing each record, it calls
 *   prepend_to_singly_linked_list with a pointer to a specific SDRAM address (0x800143f0
 *   through 0x800144d0, stepping by 0x10). The specific subsystem or data type is not
 *   determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void populate_sdr_table_and_register_entries(void)

{
  _DAT_8005ad34/*SDRAM*/ = (uintptr_t)(&DAT_105fb9f3/*ROM*/);
  _DAT_8005ad38/*SDRAM*/ = 0x8001430c/*SDRAM*/;
  _DAT_8005ad3c/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005ad40/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005ad44/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005ad48/*SDRAM*/ = 0x80013f70/*SDRAM*/;
  _DAT_8005ad4c/*SDRAM*/ = 0x80013f8c/*SDRAM*/;
  _DAT_8005ad50/*SDRAM*/ = 0x80014280/*SDRAM*/;
  _DAT_8005ad54/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800143f0/*SDRAM*/));
  _DAT_8005ad58/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005ad5c/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005ad60/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005ad64/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005ad68/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005ad6c/*SDRAM*/ = 0x80013f70/*SDRAM*/;
  _DAT_8005ad70/*SDRAM*/ = 0x80013f8c/*SDRAM*/;
  _DAT_8005ad74/*SDRAM*/ = 0x8001429c/*SDRAM*/;
  _DAT_8005ad78/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014400/*SDRAM*/));
  _DAT_8005ad7c/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005ad80/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005ad84/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005ad88/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005ad8c/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005ad90/*SDRAM*/ = 0x80013fa8/*SDRAM*/;
  _DAT_8005ad94/*SDRAM*/ = 0x80013fc4/*SDRAM*/;
  _DAT_8005ad98/*SDRAM*/ = 0x8001429c/*SDRAM*/;
  _DAT_8005ad9c/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014410/*SDRAM*/));
  _DAT_8005ada0/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005ada4/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005ada8/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005adac/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005adb0/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005adb4/*SDRAM*/ = 0x80013fe0/*SDRAM*/;
  _DAT_8005adb8/*SDRAM*/ = 0x80013ffc/*SDRAM*/;
  _DAT_8005adbc/*SDRAM*/ = 0x8001429c/*SDRAM*/;
  _DAT_8005adc0/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014420/*SDRAM*/));
  _DAT_8005adc4/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005adc8/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005adcc/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005add0/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005add4/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005add8/*SDRAM*/ = 0x80014018/*SDRAM*/;
  _DAT_8005addc/*SDRAM*/ = 0x80014034/*SDRAM*/;
  _DAT_8005ade0/*SDRAM*/ = 0x8001429c/*SDRAM*/;
  _DAT_8005ade4/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014430/*SDRAM*/));
  _DAT_8005ade8/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005adec/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005adf0/*SDRAM*/ = (uintptr_t)(&DAT_105fde46/*ROM*/);
  _DAT_8005adf4/*SDRAM*/ = 0x8001437c/*SDRAM*/;
  _DAT_8005adf8/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005adfc/*SDRAM*/ = 0x80014050/*SDRAM*/;
  _DAT_8005ae00/*SDRAM*/ = 0x8001406c/*SDRAM*/;
  _DAT_8005ae04/*SDRAM*/ = 0x800142d4/*SDRAM*/;
  _DAT_8005ae08/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014440/*SDRAM*/));
  _DAT_8005ae0c/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005ae10/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005ae14/*SDRAM*/ = (uintptr_t)(&DAT_105fde46/*ROM*/);
  _DAT_8005ae18/*SDRAM*/ = 0x80014360/*SDRAM*/;
  _DAT_8005ae1c/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005ae20/*SDRAM*/ = 0x80014088/*SDRAM*/;
  _DAT_8005ae24/*SDRAM*/ = 0x800140a4/*SDRAM*/;
  _DAT_8005ae28/*SDRAM*/ = 0x800142d4/*SDRAM*/;
  _DAT_8005ae2c/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014450/*SDRAM*/));
  _DAT_8005ae30/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005ae34/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005ae38/*SDRAM*/ = (uintptr_t)(&DAT_105fde46/*ROM*/);
  _DAT_8005ae3c/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005ae40/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005ae44/*SDRAM*/ = 0x800140c0/*SDRAM*/;
  _DAT_8005ae48/*SDRAM*/ = 0x800140dc/*SDRAM*/;
  _DAT_8005ae4c/*SDRAM*/ = 0x800142d4/*SDRAM*/;
  _DAT_8005ae50/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014460/*SDRAM*/));
  _DAT_8005ae54/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005ae58/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005ae5c/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005ae60/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005ae64/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005ae68/*SDRAM*/ = 0x800140f8/*SDRAM*/;
  _DAT_8005ae6c/*SDRAM*/ = 0x80014114/*SDRAM*/;
  _DAT_8005ae70/*SDRAM*/ = 0x80014280/*SDRAM*/;
  _DAT_8005ae74/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014470/*SDRAM*/));
  _DAT_8005ae78/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005ae7c/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005ae80/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005ae84/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005ae88/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005ae8c/*SDRAM*/ = 0x80014130/*SDRAM*/;
  _DAT_8005ae90/*SDRAM*/ = 0x8001414c/*SDRAM*/;
  _DAT_8005ae94/*SDRAM*/ = 0x800142b8/*SDRAM*/;
  _DAT_8005ae98/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014480/*SDRAM*/));
  _DAT_8005ae9c/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005aea0/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005aea4/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005aea8/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005aeac/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005aeb0/*SDRAM*/ = 0x80014168/*SDRAM*/;
  _DAT_8005aeb4/*SDRAM*/ = 0x80014184/*SDRAM*/;
  _DAT_8005aeb8/*SDRAM*/ = 0x800142b8/*SDRAM*/;
  _DAT_8005aebc/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x80014490/*SDRAM*/));
  _DAT_8005aec0/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005aec4/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005aec8/*SDRAM*/ = (uintptr_t)(&DAT_105fde38/*ROM*/);
  _DAT_8005aecc/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005aed0/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005aed4/*SDRAM*/ = 0x800141a0/*SDRAM*/;
  _DAT_8005aed8/*SDRAM*/ = 0x800141bc/*SDRAM*/;
  _DAT_8005aedc/*SDRAM*/ = 0x800142b8/*SDRAM*/;
  _DAT_8005aee0/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800144a0/*SDRAM*/));
  _DAT_8005aee4/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005aee8/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005aeec/*SDRAM*/ = (uintptr_t)(&DAT_105fde46/*ROM*/);
  _DAT_8005aef0/*SDRAM*/ = 0x8001437c/*SDRAM*/;
  _DAT_8005aef4/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005aef8/*SDRAM*/ = 0x800141d8/*SDRAM*/;
  _DAT_8005aefc/*SDRAM*/ = 0x800141f4/*SDRAM*/;
  _DAT_8005af00/*SDRAM*/ = 0x800142f0/*SDRAM*/;
  _DAT_8005af04/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800144b0/*SDRAM*/));
  _DAT_8005af08/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005af0c/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005af10/*SDRAM*/ = (uintptr_t)(&DAT_105fde46/*ROM*/);
  _DAT_8005af14/*SDRAM*/ = 0x80014360/*SDRAM*/;
  _DAT_8005af18/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005af1c/*SDRAM*/ = 0x80014210/*SDRAM*/;
  _DAT_8005af20/*SDRAM*/ = 0x8001422c/*SDRAM*/;
  _DAT_8005af24/*SDRAM*/ = 0x800142f0/*SDRAM*/;
  _DAT_8005af28/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800144c0/*SDRAM*/));
  _DAT_8005af2c/*SDRAM*/ = (uintptr_t)(&DAT_105fb9ec/*ROM*/);
  _DAT_8005af30/*SDRAM*/ = 0x80014328/*SDRAM*/;
  _DAT_8005af34/*SDRAM*/ = (uintptr_t)(&DAT_105fde46/*ROM*/);
  _DAT_8005af38/*SDRAM*/ = 0x80014344/*SDRAM*/;
  _DAT_8005af3c/*SDRAM*/ = (uintptr_t)(&DAT_10602e54);
  _DAT_8005af40/*SDRAM*/ = 0x80014248/*SDRAM*/;
  _DAT_8005af44/*SDRAM*/ = 0x80014264/*SDRAM*/;
  _DAT_8005af48/*SDRAM*/ = 0x800142f0/*SDRAM*/;
  _DAT_8005af4c/*SDRAM*/ = (uintptr_t)(&DAT_105fb9fa/*ROM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800144d0/*SDRAM*/));
  return;
}
