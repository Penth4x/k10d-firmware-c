/* @k10d initialize_object_array_1048439c @ 0x1048439c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a sequence of 32 objects at consecutive SDRAM addresses and registers each
 *   with a helper.
 * summary:
 *   The function calls a series of distinct `cls_*_new` constructors, each writing to a
 *   4-byte slot starting at 0x8004887c and incrementing by 4. After each construction, it
 *   calls prepend_to_singly_linked_list with a corresponding pointer in the 0x800100xx
 *   range. The pattern suggests initializing a fixed-size array of objects and registering
 *   them, but the specific subsystem or object types are not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_array_1048439c(void)

{
  cls_1059e508_new((void*)0x8004887c/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001008c/*SDRAM*/);
  cls_105d7168_new((void*)0x80048880/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001009c/*SDRAM*/);
  cls_1059f93c_new((void*)0x80048884/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800100ac/*SDRAM*/);
  cls_1059f86c_new((void*)0x80048888/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800100bc/*SDRAM*/);
  cls_105a0024_new((void*)0x8004888c/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800100cc/*SDRAM*/);
  cls_1059f664_new((void*)0x80048890/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800100dc/*SDRAM*/);
  cls_105a015c_new((void*)0x80048894/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800100ec/*SDRAM*/);
  cls_1059f734_new((void*)0x80048898/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800100fc/*SDRAM*/);
  cls_1059f79c_new((void*)0x8004889c/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001010c/*SDRAM*/);
  cls_1059f8d4_new((void*)0x800488a0/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001011c/*SDRAM*/);
  cls_1059f6cc_new((void*)0x800488a4/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001012c/*SDRAM*/);
  cls_1059f5fc_new((void*)0x800488a8/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001013c/*SDRAM*/);
  cls_1059f804_new((void*)0x800488ac/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001014c/*SDRAM*/);
  cls_105fa7c0_new((void*)0x800488b0/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001015c/*SDRAM*/);
  cls_1059f9a4_new((void*)0x800488b4/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001016c/*SDRAM*/);
  cls_1059fa0c_new((void*)0x800488b8/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001017c/*SDRAM*/);
  cls_1059fa74_new((void*)0x800488bc/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001018c/*SDRAM*/);
  cls_1059fadc_new((void*)0x800488c0/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001019c/*SDRAM*/);
  cls_1059fb44_new((void*)0x800488c4/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800101ac/*SDRAM*/);
  cls_1059fbac_new((void*)0x800488c8/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800101bc/*SDRAM*/);
  cls_1059fc14_new((void*)0x800488cc/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800101cc/*SDRAM*/);
  cls_1059fc7c_new((void*)0x800488d0/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800101dc/*SDRAM*/);
  cls_1059fce4_new((void*)0x800488d4/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800101ec/*SDRAM*/);
  cls_1059fd4c_new((void*)0x800488d8/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x800101fc/*SDRAM*/);
  cls_1059fdb4_new((void*)0x800488dc/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001020c/*SDRAM*/);
  cls_1059fe1c_new((void*)0x800488e0/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001021c/*SDRAM*/);
  cls_1059fe84_new((void*)0x800488e4/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001022c/*SDRAM*/);
  cls_1059feec_new((void*)0x800488e8/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001023c/*SDRAM*/);
  cls_1059ff54_new((void*)0x800488ec/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001024c/*SDRAM*/);
  cls_1059ffbc_new((void*)0x800488f0/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001025c/*SDRAM*/);
  cls_105a008c_new((void*)0x800488f4/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001026c/*SDRAM*/);
  cls_105a00f4_new((void*)0x800488f8/*SDRAM*/);
  prepend_to_singly_linked_list((void*)0x8001027c/*SDRAM*/);
  return;
}
