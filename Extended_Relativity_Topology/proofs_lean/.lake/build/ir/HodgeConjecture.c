// Lean compiler output
// Module: HodgeConjecture
// Imports: public import Init public meta import Init public import Mathlib.Basic.Real.Basic public import Mathlib.Basic.Complex.Basic public import Mathlib.Analysis.InnerProductSpace.Basic public import Mathlib.LinearAlgebra.Matrix.Determinant.Basic public import Mathlib.LinearAlgebra.Matrix.PosDef public import Mathlib.Algebra.Order.Field.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_HodgeConjecture_HodgeConjecture_euler__characteristic__surface(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_HodgeConjecture_HodgeConjecture_euler__characteristic__surface___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_HodgeConjecture_HodgeConjecture_euler__characteristic__surface(lean_object* v_b0_1_, lean_object* v_b1_2_, lean_object* v_b2_3_, lean_object* v_b3_4_, lean_object* v_b4_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_6_ = lean_int_sub(v_b0_1_, v_b1_2_);
v___x_7_ = lean_int_add(v___x_6_, v_b2_3_);
lean_dec(v___x_6_);
v___x_8_ = lean_int_sub(v___x_7_, v_b3_4_);
lean_dec(v___x_7_);
v___x_9_ = lean_int_add(v___x_8_, v_b4_5_);
lean_dec(v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_HodgeConjecture_HodgeConjecture_euler__characteristic__surface___boxed(lean_object* v_b0_10_, lean_object* v_b1_11_, lean_object* v_b2_12_, lean_object* v_b3_13_, lean_object* v_b4_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lp_HodgeConjecture_HodgeConjecture_euler__characteristic__surface(v_b0_10_, v_b1_11_, v_b2_12_, v_b3_13_, v_b4_14_);
lean_dec(v_b4_14_);
lean_dec(v_b3_13_);
lean_dec(v_b2_12_);
lean_dec(v_b1_11_);
lean_dec(v_b0_10_);
return v_res_15_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Basic_Real_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Basic_Complex_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_InnerProductSpace_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_PosDef(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Order_Field_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_HodgeConjecture_HodgeConjecture(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Basic_Real_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Basic_Complex_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_InnerProductSpace_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_PosDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_Order_Field_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
