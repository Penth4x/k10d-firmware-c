/* @k10d initialize_object_pointers @ 0x1036c56e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs several objects at fixed SDRAM addresses and stores their pointers into a
 *   sequence of global slots.
 * summary:
 *   The function calls constructors (cls_*_new) for objects at 0x800158d4, 0x800158dc,
 *   0x80015af0, 0x80015d04, 0x80018060, and 0x80018088, and calls
 *   alloc_and_zero_two_words_1045c3bc with 0x80018058. After each construction, it calls
 *   prepend_to_singly_linked_list with a different address in the 0x800043ac-0x8000441c
 *   range, which appears to store the newly created object pointer into a global slot.
 *   get_lens_fw_update_status is called once in the middle. The specific roles of the
 *   constructed objects and the global slots are not determinable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_pointers(void)

{
  cls_10563ff4_new((cls_10563ff4 *)0x800158d4/*SDRAM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800043ac/*SDRAM*/));
  cls_105b9458_new((cls_105b9458 *)0x800158dc/*SDRAM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800043bc/*SDRAM*/));
  cls_105b9458_new((cls_105b9458 *)0x80015af0/*SDRAM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800043cc/*SDRAM*/));
  cls_105b9458_new((cls_105b9458 *)0x80015d04/*SDRAM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x800043dc/*SDRAM*/));
  get_lens_fw_update_status((int)0x80015f18, 0x10, 0x214, (code *)cls_105b9458_new);
  prepend_to_singly_linked_list((uint32_t *)(0x800043ec/*SDRAM*/));
  alloc_and_zero_two_words_1045c3bc((uint32_t *)(0x80018058/*SDRAM*/));
  prepend_to_singly_linked_list((uint32_t *)(0x800043fc/*SDRAM*/));
  cls_10559b1c_new((cls_10559b1c *)0x80018060/*SDRAM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x8000440c/*SDRAM*/));
  cls_105a2af8_new((cls_105a2af8 *)0x80018088/*SDRAM*/);
  prepend_to_singly_linked_list((uint32_t *)(0x8000441c/*SDRAM*/));
  return;
}
