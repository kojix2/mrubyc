/* Auto generated by make_method_table.rb */
#include "symbol_builtin.h"
struct RClass *mrbc_init_class_true(struct VM *vm)
{
  static const mrbc_sym method_symbols[] = {
#if MRBC_USE_STRING
    MRBC_SYMID_inspect,
#endif
#if MRBC_USE_STRING
    MRBC_SYMID_to_s,
#endif
  };
  static const mrbc_func_t method_functions[] = {
#if MRBC_USE_STRING
    c_true_to_s,
#endif
#if MRBC_USE_STRING
    c_true_to_s,
#endif
  };

  return mrbc_define_builtin_class("TrueClass", mrbc_class_object, method_symbols, method_functions, sizeof(method_symbols)/sizeof(mrbc_sym) );
}
