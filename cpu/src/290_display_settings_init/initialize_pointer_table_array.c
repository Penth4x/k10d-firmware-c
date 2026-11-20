/* @k10d initialize_pointer_table_array @ 0x1052f38e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Populates a large SDRAM array with pointers to ROM data blocks and calls an unknown
 *   helper between groups.
 * summary:
 *   The function writes a sequence of pointers (from the 0x105fa96c..0x105fad74 ROM range)
 *   into consecutive 4-byte slots in SDRAM starting at 0x8005a934. It interleaves zero
 *   writes and calls prepend_to_singly_linked_list with incrementing SDRAM addresses
 *   (0x80013738, 0x80013748, etc.) after each group of pointer assignments. The specific
 *   role of the pointer table or the helper function is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_pointer_table_array(void)

{
  _DAT_8005a934/*SDRAM*/ = (uintptr_t)(&DAT_105fa96c/*ROM*/);
  _DAT_8005a938/*SDRAM*/ = (uintptr_t)(&DAT_105fa96c/*ROM*/);
  _DAT_8005a93c/*SDRAM*/ = (uintptr_t)(&DAT_105fa96c/*ROM*/);
  _DAT_8005a940/*SDRAM*/ = (uintptr_t)(&DAT_105fa96c/*ROM*/);
  _DAT_8005a944/*SDRAM*/ = (uintptr_t)(&DAT_105fa97a/*ROM*/);
  _DAT_8005a948/*SDRAM*/ = (uintptr_t)(&DAT_105fa988/*ROM*/);
  _DAT_8005a94c/*SDRAM*/ = (uintptr_t)(&DAT_105fa996/*ROM*/);
  _DAT_8005a950/*SDRAM*/ = (uintptr_t)(&DAT_105fa9a4/*ROM*/);
  _DAT_8005a954/*SDRAM*/ = (uintptr_t)(&DAT_105fa9b2/*ROM*/);
  _DAT_8005a958/*SDRAM*/ = (uintptr_t)(&DAT_105fa9c0/*ROM*/);
  _DAT_8005a95c/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ce/*ROM*/);
  _DAT_8005a960/*SDRAM*/ = (uintptr_t)(&DAT_105fa9dc/*ROM*/);
  _DAT_8005a964/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005a968/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005a96c/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005a970/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005a974/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005a978/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013738/*SDRAM*/));
  _DAT_8005a97c/*SDRAM*/ = (uintptr_t)(&DAT_105faa30/*ROM*/);
  _DAT_8005a980/*SDRAM*/ = (uintptr_t)(&DAT_105faa3e/*ROM*/);
  _DAT_8005a984/*SDRAM*/ = (uintptr_t)(&DAT_105faa4c/*ROM*/);
  _DAT_8005a988/*SDRAM*/ = (uintptr_t)(&DAT_105faa5a/*ROM*/);
  _DAT_8005a98c/*SDRAM*/ = (uintptr_t)(&DAT_105fab48/*ROM*/);
  _DAT_8005a990/*SDRAM*/ = (uintptr_t)(&DAT_105fab56/*ROM*/);
  _DAT_8005a994/*SDRAM*/ = (uintptr_t)(&DAT_105fab64/*ROM*/);
  _DAT_8005a998/*SDRAM*/ = (uintptr_t)(&DAT_105fab72/*ROM*/);
  _DAT_8005a99c/*SDRAM*/ = (uintptr_t)(&DAT_105fab80/*ROM*/);
  _DAT_8005a9a0/*SDRAM*/ = (uintptr_t)(&DAT_105fab8c/*ROM*/);
  _DAT_8005a9a4/*SDRAM*/ = (uintptr_t)(&DAT_105fab98/*ROM*/);
  _DAT_8005a9a8/*SDRAM*/ = (uintptr_t)(&DAT_105faba4/*ROM*/);
  _DAT_8005a9ac/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005a9b0/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005a9b4/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005a9b8/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005a9bc/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005a9c0/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013748/*SDRAM*/));
  _DAT_8005a9c4/*SDRAM*/ = (uintptr_t)(&DAT_105faa30/*ROM*/);
  _DAT_8005a9c8/*SDRAM*/ = (uintptr_t)(&DAT_105faa3e/*ROM*/);
  _DAT_8005a9cc/*SDRAM*/ = (uintptr_t)(&DAT_105faa4c/*ROM*/);
  _DAT_8005a9d0/*SDRAM*/ = (uintptr_t)(&DAT_105faa5a/*ROM*/);
  _DAT_8005a9d4/*SDRAM*/ = (uintptr_t)(&DAT_105fab48/*ROM*/);
  _DAT_8005a9d8/*SDRAM*/ = (uintptr_t)(&DAT_105fab56/*ROM*/);
  _DAT_8005a9dc/*SDRAM*/ = (uintptr_t)(&DAT_105fab64/*ROM*/);
  _DAT_8005a9e0/*SDRAM*/ = (uintptr_t)(&DAT_105fab72/*ROM*/);
  _DAT_8005a9e4/*SDRAM*/ = (uintptr_t)(&DAT_105fabb0/*ROM*/);
  _DAT_8005a9e8/*SDRAM*/ = (uintptr_t)(&DAT_105fabb0/*ROM*/);
  _DAT_8005a9ec/*SDRAM*/ = (uintptr_t)(&DAT_105fabb0/*ROM*/);
  _DAT_8005a9f0/*SDRAM*/ = (uintptr_t)(&DAT_105fabb0/*ROM*/);
  _DAT_8005a9f4/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005a9f8/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005a9fc/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005aa00/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005aa04/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005aa08/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013758/*SDRAM*/));
  _DAT_8005aa0c/*SDRAM*/ = (uintptr_t)(&DAT_105faa68/*ROM*/);
  _DAT_8005aa10/*SDRAM*/ = (uintptr_t)(&DAT_105faa76/*ROM*/);
  _DAT_8005aa14/*SDRAM*/ = (uintptr_t)(&DAT_105faa84/*ROM*/);
  _DAT_8005aa18/*SDRAM*/ = (uintptr_t)(&DAT_105faa92/*ROM*/);
  _DAT_8005aa1c/*SDRAM*/ = (uintptr_t)(&DAT_105fabbc/*ROM*/);
  _DAT_8005aa20/*SDRAM*/ = (uintptr_t)(&DAT_105fabca/*ROM*/);
  _DAT_8005aa24/*SDRAM*/ = (uintptr_t)(&DAT_105fabd8/*ROM*/);
  _DAT_8005aa28/*SDRAM*/ = (uintptr_t)(&DAT_105fabe6/*ROM*/);
  _DAT_8005aa2c/*SDRAM*/ = (uintptr_t)(&DAT_105fabf4/*ROM*/);
  _DAT_8005aa30/*SDRAM*/ = (uintptr_t)(&DAT_105fac00/*ROM*/);
  _DAT_8005aa34/*SDRAM*/ = (uintptr_t)(&DAT_105fac0c/*ROM*/);
  _DAT_8005aa38/*SDRAM*/ = (uintptr_t)(&DAT_105fac18/*ROM*/);
  _DAT_8005aa3c/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005aa40/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005aa44/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005aa48/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005aa4c/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005aa50/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013768/*SDRAM*/));
  _DAT_8005aa54/*SDRAM*/ = (uintptr_t)(&DAT_105faa68/*ROM*/);
  _DAT_8005aa58/*SDRAM*/ = (uintptr_t)(&DAT_105faa76/*ROM*/);
  _DAT_8005aa5c/*SDRAM*/ = (uintptr_t)(&DAT_105faa84/*ROM*/);
  _DAT_8005aa60/*SDRAM*/ = (uintptr_t)(&DAT_105faa92/*ROM*/);
  _DAT_8005aa64/*SDRAM*/ = (uintptr_t)(&DAT_105fabbc/*ROM*/);
  _DAT_8005aa68/*SDRAM*/ = (uintptr_t)(&DAT_105fabca/*ROM*/);
  _DAT_8005aa6c/*SDRAM*/ = (uintptr_t)(&DAT_105fabd8/*ROM*/);
  _DAT_8005aa70/*SDRAM*/ = (uintptr_t)(&DAT_105fabe6/*ROM*/);
  _DAT_8005aa74/*SDRAM*/ = (uintptr_t)(&DAT_105fac24/*ROM*/);
  _DAT_8005aa78/*SDRAM*/ = (uintptr_t)(&DAT_105fac24/*ROM*/);
  _DAT_8005aa7c/*SDRAM*/ = (uintptr_t)(&DAT_105fac24/*ROM*/);
  _DAT_8005aa80/*SDRAM*/ = (uintptr_t)(&DAT_105fac24/*ROM*/);
  _DAT_8005aa84/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005aa88/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005aa8c/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005aa90/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005aa94/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005aa98/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013778/*SDRAM*/));
  _DAT_8005aa9c/*SDRAM*/ = (uintptr_t)(&DAT_105faaa0/*ROM*/);
  _DAT_8005aaa0/*SDRAM*/ = (uintptr_t)(&DAT_105faaae/*ROM*/);
  _DAT_8005aaa4/*SDRAM*/ = (uintptr_t)(&DAT_105faabc/*ROM*/);
  _DAT_8005aaa8/*SDRAM*/ = (uintptr_t)(&DAT_105faaca/*ROM*/);
  _DAT_8005aaac/*SDRAM*/ = (uintptr_t)(&DAT_105fac30/*ROM*/);
  _DAT_8005aab0/*SDRAM*/ = (uintptr_t)(&DAT_105fac3e/*ROM*/);
  _DAT_8005aab4/*SDRAM*/ = (uintptr_t)(&DAT_105fac4c/*ROM*/);
  _DAT_8005aab8/*SDRAM*/ = (uintptr_t)(&DAT_105fac5a/*ROM*/);
  _DAT_8005aabc/*SDRAM*/ = (uintptr_t)(&DAT_105fac68/*ROM*/);
  _DAT_8005aac0/*SDRAM*/ = (uintptr_t)(&DAT_105fac74/*ROM*/);
  _DAT_8005aac4/*SDRAM*/ = (uintptr_t)(&DAT_105fac80/*ROM*/);
  _DAT_8005aac8/*SDRAM*/ = (uintptr_t)(&DAT_105fac8c/*ROM*/);
  _DAT_8005aacc/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005aad0/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005aad4/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005aad8/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005aadc/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005aae0/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013788/*SDRAM*/));
  _DAT_8005aae4/*SDRAM*/ = (uintptr_t)(&DAT_105faaa0/*ROM*/);
  _DAT_8005aae8/*SDRAM*/ = (uintptr_t)(&DAT_105faaae/*ROM*/);
  _DAT_8005aaec/*SDRAM*/ = (uintptr_t)(&DAT_105faabc/*ROM*/);
  _DAT_8005aaf0/*SDRAM*/ = (uintptr_t)(&DAT_105faaca/*ROM*/);
  _DAT_8005aaf4/*SDRAM*/ = (uintptr_t)(&DAT_105fac30/*ROM*/);
  _DAT_8005aaf8/*SDRAM*/ = (uintptr_t)(&DAT_105fac3e/*ROM*/);
  _DAT_8005aafc/*SDRAM*/ = (uintptr_t)(&DAT_105fac4c/*ROM*/);
  _DAT_8005ab00/*SDRAM*/ = (uintptr_t)(&DAT_105fac5a/*ROM*/);
  _DAT_8005ab04/*SDRAM*/ = (uintptr_t)(&DAT_105fac98/*ROM*/);
  _DAT_8005ab08/*SDRAM*/ = (uintptr_t)(&DAT_105fac98/*ROM*/);
  _DAT_8005ab0c/*SDRAM*/ = (uintptr_t)(&DAT_105fac98/*ROM*/);
  _DAT_8005ab10/*SDRAM*/ = (uintptr_t)(&DAT_105fac98/*ROM*/);
  _DAT_8005ab14/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005ab18/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005ab1c/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005ab20/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005ab24/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005ab28/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013798/*SDRAM*/));
  _DAT_8005ab2c/*SDRAM*/ = (uintptr_t)(&DAT_105faad8/*ROM*/);
  _DAT_8005ab30/*SDRAM*/ = (uintptr_t)(&DAT_105faae6/*ROM*/);
  _DAT_8005ab34/*SDRAM*/ = (uintptr_t)(&DAT_105faaf4/*ROM*/);
  _DAT_8005ab38/*SDRAM*/ = (uintptr_t)(&DAT_105fab02/*ROM*/);
  _DAT_8005ab3c/*SDRAM*/ = (uintptr_t)(&DAT_105faca4/*ROM*/);
  _DAT_8005ab40/*SDRAM*/ = (uintptr_t)(&DAT_105facb2/*ROM*/);
  _DAT_8005ab44/*SDRAM*/ = (uintptr_t)(&DAT_105facc0/*ROM*/);
  _DAT_8005ab48/*SDRAM*/ = (uintptr_t)(&DAT_105facce/*ROM*/);
  _DAT_8005ab4c/*SDRAM*/ = (uintptr_t)(&DAT_105facdc/*ROM*/);
  _DAT_8005ab50/*SDRAM*/ = (uintptr_t)(&DAT_105face8/*ROM*/);
  _DAT_8005ab54/*SDRAM*/ = (uintptr_t)(&DAT_105facf4/*ROM*/);
  _DAT_8005ab58/*SDRAM*/ = (uintptr_t)(&DAT_105fad00/*ROM*/);
  _DAT_8005ab5c/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005ab60/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005ab64/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005ab68/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005ab6c/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005ab70/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x800137a8/*SDRAM*/));
  _DAT_8005ab74/*SDRAM*/ = (uintptr_t)(&DAT_105faad8/*ROM*/);
  _DAT_8005ab78/*SDRAM*/ = (uintptr_t)(&DAT_105faae6/*ROM*/);
  _DAT_8005ab7c/*SDRAM*/ = (uintptr_t)(&DAT_105faaf4/*ROM*/);
  _DAT_8005ab80/*SDRAM*/ = (uintptr_t)(&DAT_105fab02/*ROM*/);
  _DAT_8005ab84/*SDRAM*/ = (uintptr_t)(&DAT_105faca4/*ROM*/);
  _DAT_8005ab88/*SDRAM*/ = (uintptr_t)(&DAT_105facb2/*ROM*/);
  _DAT_8005ab8c/*SDRAM*/ = (uintptr_t)(&DAT_105facc0/*ROM*/);
  _DAT_8005ab90/*SDRAM*/ = (uintptr_t)(&DAT_105facce/*ROM*/);
  _DAT_8005ab94/*SDRAM*/ = (uintptr_t)(&DAT_105fad0c/*ROM*/);
  _DAT_8005ab98/*SDRAM*/ = (uintptr_t)(&DAT_105fad0c/*ROM*/);
  _DAT_8005ab9c/*SDRAM*/ = (uintptr_t)(&DAT_105fad0c/*ROM*/);
  _DAT_8005aba0/*SDRAM*/ = (uintptr_t)(&DAT_105fad0c/*ROM*/);
  _DAT_8005aba4/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005aba8/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005abac/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005abb0/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005abb4/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005abb8/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x800137b8/*SDRAM*/));
  _DAT_8005abbc/*SDRAM*/ = (uintptr_t)(&DAT_105fab10/*ROM*/);
  _DAT_8005abc0/*SDRAM*/ = (uintptr_t)(&DAT_105fab1e/*ROM*/);
  _DAT_8005abc4/*SDRAM*/ = (uintptr_t)(&DAT_105fab2c/*ROM*/);
  _DAT_8005abc8/*SDRAM*/ = (uintptr_t)(&DAT_105fab3a/*ROM*/);
  _DAT_8005abcc/*SDRAM*/ = (uintptr_t)(&DAT_105fad18/*ROM*/);
  _DAT_8005abd0/*SDRAM*/ = (uintptr_t)(&DAT_105fad26/*ROM*/);
  _DAT_8005abd4/*SDRAM*/ = (uintptr_t)(&DAT_105fad34/*ROM*/);
  _DAT_8005abd8/*SDRAM*/ = (uintptr_t)(&DAT_105fad42/*ROM*/);
  _DAT_8005abdc/*SDRAM*/ = (uintptr_t)(&DAT_105fad50/*ROM*/);
  _DAT_8005abe0/*SDRAM*/ = (uintptr_t)(&DAT_105fad5c/*ROM*/);
  _DAT_8005abe4/*SDRAM*/ = (uintptr_t)(&DAT_105fad68/*ROM*/);
  _DAT_8005abe8/*SDRAM*/ = (uintptr_t)(&DAT_105fad74/*ROM*/);
  _DAT_8005abec/*SDRAM*/ = (uintptr_t)(&DAT_105fa9ea/*ROM*/);
  _DAT_8005abf0/*SDRAM*/ = (uintptr_t)(&DAT_105fa9f8/*ROM*/);
  _DAT_8005abf4/*SDRAM*/ = (uintptr_t)(&DAT_105faa06/*ROM*/);
  _DAT_8005abf8/*SDRAM*/ = (uintptr_t)(&DAT_105faa14/*ROM*/);
  _DAT_8005abfc/*SDRAM*/ = (uintptr_t)(&DAT_105faa22/*ROM*/);
  DAT_8005ac00/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x800137c8/*SDRAM*/));
  return;
}
