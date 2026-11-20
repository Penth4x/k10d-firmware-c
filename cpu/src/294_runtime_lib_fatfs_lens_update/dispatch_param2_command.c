/* @k10d dispatch_param2_command @ 0x10537240
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Routes execution based on the first element of param_2, calling one of two sub-
 *   functions.
 * summary:
 *   The function reads param_2[0] to determine the path. If it is zero, it checks bits 0-1
 *   of the integer at param_1+0x48; if clear, it returns -0x16, otherwise it calls
 *   validate_lens_fw_chunk. If param_2[0] is non-zero, it calls
 *   transfer_buffer_in_chunks_10537284 with param_1, the command value, and param_3. The
 *   specific role of the sub-functions is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_param2_command(int param_1,int *param_2,void *param_3)

{
  struct {
    void * pvStack_14;
    int iStack_10;
    int iStack_c;
  } _cfg_14;
  int iVar1;
  uintptr_t sp;
  _cfg_14.iStack_10 = param_2[2] << 5;
  _cfg_14.iStack_c = (param_2[1] + -1) * 0x20;
  _cfg_14.pvStack_14 = param_3;
  if (*param_2 == 0) {
    if ((*(uint *)(param_1 + 0x48) & 3) == 0) {
      iVar1 = -0x16;
    }
    else {
      iVar1 = validate_lens_fw_chunk(param_1,&_cfg_14.pvStack_14);
    }
  }
  else {
    iVar1 = transfer_buffer_in_chunks_10537284((void *)param_1,*param_2,&_cfg_14.pvStack_14);
  }
  return iVar1;
}
