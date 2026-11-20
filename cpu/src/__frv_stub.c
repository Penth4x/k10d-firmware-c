/* @k10d __frv_reg_unset stub @ 0xffffffff
 * Emit sentinel for short-call sites whose argument register could not be recovered.
 * Returns 0 (the value is unknown); a trampoline could log instead. @end */
#include "frv_intrinsics.h"
uint32_t __frv_reg_unset(int reg) { (void)reg; return 0; }
