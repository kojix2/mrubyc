/* Auto generated by make_method_table.rb */
#include "symbol_builtin.h"
struct RClass *mrbc_init_class_math_sub(struct VM *vm)
{
  static const mrbc_sym method_symbols[] = {
    MRBC_SYMID_acos,
    MRBC_SYMID_acosh,
    MRBC_SYMID_asin,
    MRBC_SYMID_asinh,
    MRBC_SYMID_atan,
    MRBC_SYMID_atan2,
    MRBC_SYMID_atanh,
    MRBC_SYMID_cbrt,
    MRBC_SYMID_cos,
    MRBC_SYMID_cosh,
    MRBC_SYMID_erf,
    MRBC_SYMID_erfc,
    MRBC_SYMID_exp,
    MRBC_SYMID_hypot,
    MRBC_SYMID_ldexp,
    MRBC_SYMID_log,
    MRBC_SYMID_log10,
    MRBC_SYMID_log2,
    MRBC_SYMID_sin,
    MRBC_SYMID_sinh,
    MRBC_SYMID_sqrt,
    MRBC_SYMID_tan,
    MRBC_SYMID_tanh,
  };
  static const mrbc_func_t method_functions[] = {
    c_math_acos,
    c_math_acosh,
    c_math_asin,
    c_math_asinh,
    c_math_atan,
    c_math_atan2,
    c_math_atanh,
    c_math_cbrt,
    c_math_cos,
    c_math_cosh,
    c_math_erf,
    c_math_erfc,
    c_math_exp,
    c_math_hypot,
    c_math_ldexp,
    c_math_log,
    c_math_log10,
    c_math_log2,
    c_math_sin,
    c_math_sinh,
    c_math_sqrt,
    c_math_tan,
    c_math_tanh,
  };

  return mrbc_define_builtin_class(MRBC_SYM(Math), mrbc_class_object, method_symbols, method_functions, sizeof(method_symbols)/sizeof(mrbc_sym) );
}
