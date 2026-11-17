/* @k10d check_lens_fw_entry_present @ 0x10539084
 * name: model (proposed by the local model from the decompile, confidence 0.78)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Searches two lens firmware descriptor tables for a matching entry pointer and returns 0
 *   if found, -2 if not.
 * summary:
 *   Iterates over two 0x80-byte records at _DAT_80014980. For each non-empty record, it
 *   follows a linked list starting at offset 100 (plus 4) and compares each node pointer to
 *   param_1. Returns 0 on a match, otherwise 0xfffffffe (-2). The module context is lens
 *   firmware update, so this likely checks whether a given lens firmware image or
 *   descriptor is already registered in the update tables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_lens_fw_entry_present(void *param_1)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    if (*(char *)(iVar2 * 0x80 + _DAT_80014980/*SDRAM*/) != '\0') {
      pvVar1 = *(void **)(*(int *)(_DAT_80014980/*SDRAM*/ + iVar2 * 0x80 + 100) + 4);
      while (pvVar1 != (void *)0x0) {
        bVar3 = pvVar1 == param_1;
        pvVar1 = *(void **)((int)pvVar1 + 4);
        if (bVar3) {
          return 0;
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0xfffffffe;
}
