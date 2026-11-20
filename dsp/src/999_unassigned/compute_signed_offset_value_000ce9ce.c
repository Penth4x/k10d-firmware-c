/* @k10d compute_signed_offset_value_000ce9ce @ 0x000ce9ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a value stored in _DAT_0003ce8a based on the sign and magnitude of
 *   _DAT_0003f24c using two calls to unsigned_divide.
 * summary:
 *   The function branches on whether _DAT_0003f24c is zero, negative, or positive. For non-
 *   zero values, it calls unsigned_divide with constants 2500000 and 4000000, passing the
 *   magnitude of _DAT_0003f24c (with sign adjustment) and an offset of +/-2000. The result
 *   is stored in _DAT_0003ce8a, with sign inversion applied for negative inputs. The final
 *   value is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_signed_offset_value_000ce9ce(void)

{
  int iVar1;
  
  if (_DAT_0003f24c == 0) {
    _DAT_0003ce8a = 0;
  }
  else if (_DAT_0003f24c < 1) {
    iVar1 = unsigned_divide(2500000,-(int)_DAT_0003f24c);
    _DAT_0003ce8a = unsigned_divide(4000000,iVar1 + 2000);
    _DAT_0003ce8a = -_DAT_0003ce8a;
  }
  else {
    iVar1 = unsigned_divide(2500000,(int)_DAT_0003f24c);
    _DAT_0003ce8a = unsigned_divide(4000000,iVar1 + -2000);
  }
  return (int)_DAT_0003ce8a;
}
