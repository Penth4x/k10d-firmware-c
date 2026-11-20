/* @k10d transfer_buffer_in_chunks_1053b78e @ 0x1053b78e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transfers a buffer in chunks by repeatedly calling a helper, validating chunk size
 *   against a limit.
 * summary:
 *   Loops over param_4 bytes, calling decode_packed_nibble_value with the current chunk
 *   size (param_3) and adjusting the remaining count by the amount actually transferred
 *   (_cfg_24.iStack_20). It validates that the chunk size is at least 2 and does not exceed the
 *   limit at param_1+0x4c, returning -0x390 on failure. The final transferred chunk size is
 *   stored in *param_5. The module context suggests lens firmware update, but the function
 *   itself only performs chunked buffer transfer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_buffer_in_chunks_1053b78e(int param_1,void *param_2,uint param_3,int param_4,uint *param_5)

{
  struct {
    uint uStack_24;
    int iStack_20;
    uint uStack_1c;
  } _cfg_24;
  int iVar1;
  uintptr_t sp;
  _cfg_24.uStack_24 = param_3;
  do {
    if ((_cfg_24.uStack_24 < 2) || (*(uint *)(param_1 + 0x4c) < _cfg_24.uStack_24)) {
      return -0x390;
    }
    iVar1 = decode_packed_nibble_value(param_1,param_2,param_4,&_cfg_24.uStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_4 = param_4 - _cfg_24.iStack_20;
    _cfg_24.uStack_24 = _cfg_24.uStack_1c;
  } while (param_4 != 0);
  *param_5 = _cfg_24.uStack_1c;
  return 0;
}
