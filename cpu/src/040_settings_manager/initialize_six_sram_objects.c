/* @k10d initialize_six_sram_objects @ 0x10394b1e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs six objects in SDRAM and registers them via a common initialization routine.
 * summary:
 *   The function calls cls_105b9458_new on five distinct SDRAM addresses (0x80019c58
 *   through 0x8001a294) and alloc_and_zero_two_words_1045c3bc on a sixth (0x8001a4a8).
 *   After each construction, it calls prepend_to_singly_linked_list with a corresponding
 *   SDRAM address in the 0x800045xx range. The pattern suggests a batch initialization of
 *   state structures or queues.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_six_sram_objects(void)

{
  cls_105b9458_new((void*)0x80019c58/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800045bc/*SDRAM*/);
  cls_105b9458_new((void*)0x80019e6c/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800045cc/*SDRAM*/);
  cls_105b9458_new((void*)0x8001a080/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800045dc/*SDRAM*/);
  cls_105b9458_new((void*)0x8001a294/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800045ec/*SDRAM*/);
  alloc_and_zero_two_words_1045c3bc((void*)0x8001a4a8/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800045fc/*SDRAM*/);
  return;
}
