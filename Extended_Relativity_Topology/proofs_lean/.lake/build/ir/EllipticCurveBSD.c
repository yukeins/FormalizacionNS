// Lean compiler output
// Module: EllipticCurveBSD
// Imports: public import Init public meta import Init public import Mathlib.Data.Real.Basic public import Mathlib.Data.Complex.Basic public import Mathlib.Analysis.InnerProductSpace.Basic public import Mathlib.LinearAlgebra.Matrix.Determinant.Basic public import Mathlib.LinearAlgebra.Matrix.PosDef public import Mathlib.Algebra.Order.Field.Basic
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Infinity_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Infinity_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Infinity_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Affine_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Affine_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Affine_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0;
static lean_once_cell_t lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__1;
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue(uint8_t);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___redArg(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx(lean_object* v_F_6_, lean_object* v_inst_7_, lean_object* v_a_8_, lean_object* v_b_9_, lean_object* v_x_10_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___redArg(v_x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx___boxed(lean_object* v_F_12_, lean_object* v_inst_13_, lean_object* v_a_14_, lean_object* v_b_15_, lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorIdx(v_F_12_, v_inst_13_, v_a_14_, v_b_15_, v_x_16_);
lean_dec(v_x_16_);
lean_dec(v_b_15_);
lean_dec(v_a_14_);
lean_dec_ref(v_inst_13_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___redArg(lean_object* v_t_18_, lean_object* v_k_19_){
_start:
{
if (lean_obj_tag(v_t_18_) == 0)
{
return v_k_19_;
}
else
{
lean_object* v_x_20_; lean_object* v_y_21_; lean_object* v___x_22_; 
v_x_20_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_x_20_);
v_y_21_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_y_21_);
lean_dec_ref_known(v_t_18_, 2);
v___x_22_ = lean_apply_3(v_k_19_, v_x_20_, v_y_21_, lean_box(0));
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim(lean_object* v_F_23_, lean_object* v_inst_24_, lean_object* v_a_25_, lean_object* v_b_26_, lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___redArg(v_t_29_, v_k_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___boxed(lean_object* v_F_33_, lean_object* v_inst_34_, lean_object* v_a_35_, lean_object* v_b_36_, lean_object* v_motive_37_, lean_object* v_ctorIdx_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_k_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim(v_F_33_, v_inst_34_, v_a_35_, v_b_36_, v_motive_37_, v_ctorIdx_38_, v_t_39_, v_h_40_, v_k_41_);
lean_dec(v_ctorIdx_38_);
lean_dec(v_b_36_);
lean_dec(v_a_35_);
lean_dec_ref(v_inst_34_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Infinity_elim___redArg(lean_object* v_t_43_, lean_object* v_Infinity_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___redArg(v_t_43_, v_Infinity_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Infinity_elim(lean_object* v_F_46_, lean_object* v_inst_47_, lean_object* v_a_48_, lean_object* v_b_49_, lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_Infinity_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___redArg(v_t_51_, v_Infinity_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Infinity_elim___boxed(lean_object* v_F_55_, lean_object* v_inst_56_, lean_object* v_a_57_, lean_object* v_b_58_, lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_Infinity_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Infinity_elim(v_F_55_, v_inst_56_, v_a_57_, v_b_58_, v_motive_59_, v_t_60_, v_h_61_, v_Infinity_62_);
lean_dec(v_b_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_inst_56_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Affine_elim___redArg(lean_object* v_t_64_, lean_object* v_Affine_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___redArg(v_t_64_, v_Affine_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Affine_elim(lean_object* v_F_67_, lean_object* v_inst_68_, lean_object* v_a_69_, lean_object* v_b_70_, lean_object* v_motive_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_Affine_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_ctorElim___redArg(v_t_72_, v_Affine_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Affine_elim___boxed(lean_object* v_F_76_, lean_object* v_inst_77_, lean_object* v_a_78_, lean_object* v_b_79_, lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_Affine_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lp_EllipticCurveBSD_EllipticCurveBSD_WeierstrassPoint_Affine_elim(v_F_76_, v_inst_77_, v_a_78_, v_b_79_, v_motive_80_, v_t_81_, v_h_82_, v_Affine_83_);
lean_dec(v_b_79_);
lean_dec(v_a_78_);
lean_dec_ref(v_inst_77_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorIdx(uint8_t v_x_85_){
_start:
{
if (v_x_85_ == 0)
{
lean_object* v___x_86_; 
v___x_86_ = lean_unsigned_to_nat(0u);
return v___x_86_;
}
else
{
lean_object* v___x_87_; 
v___x_87_ = lean_unsigned_to_nat(1u);
return v___x_87_;
}
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorIdx___boxed(lean_object* v_x_88_){
_start:
{
uint8_t v_x_boxed_89_; lean_object* v_res_90_; 
v_x_boxed_89_ = lean_unbox(v_x_88_);
v_res_90_ = lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorIdx(v_x_boxed_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim___redArg(lean_object* v_k_91_){
_start:
{
lean_inc(v_k_91_);
return v_k_91_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim___redArg___boxed(lean_object* v_k_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim___redArg(v_k_92_);
lean_dec(v_k_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim(lean_object* v_motive_94_, lean_object* v_ctorIdx_95_, uint8_t v_t_96_, lean_object* v_h_97_, lean_object* v_k_98_){
_start:
{
lean_inc(v_k_98_);
return v_k_98_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim___boxed(lean_object* v_motive_99_, lean_object* v_ctorIdx_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_k_103_){
_start:
{
uint8_t v_t_boxed_104_; lean_object* v_res_105_; 
v_t_boxed_104_ = lean_unbox(v_t_101_);
v_res_105_ = lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_ctorElim(v_motive_99_, v_ctorIdx_100_, v_t_boxed_104_, v_h_102_, v_k_103_);
lean_dec(v_k_103_);
lean_dec(v_ctorIdx_100_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim___redArg(lean_object* v_Even_106_){
_start:
{
lean_inc(v_Even_106_);
return v_Even_106_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim___redArg___boxed(lean_object* v_Even_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim___redArg(v_Even_107_);
lean_dec(v_Even_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim(lean_object* v_motive_109_, uint8_t v_t_110_, lean_object* v_h_111_, lean_object* v_Even_112_){
_start:
{
lean_inc(v_Even_112_);
return v_Even_112_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim___boxed(lean_object* v_motive_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_Even_116_){
_start:
{
uint8_t v_t_boxed_117_; lean_object* v_res_118_; 
v_t_boxed_117_ = lean_unbox(v_t_114_);
v_res_118_ = lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Even_elim(v_motive_113_, v_t_boxed_117_, v_h_115_, v_Even_116_);
lean_dec(v_Even_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim___redArg(lean_object* v_Odd_119_){
_start:
{
lean_inc(v_Odd_119_);
return v_Odd_119_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim___redArg___boxed(lean_object* v_Odd_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim___redArg(v_Odd_120_);
lean_dec(v_Odd_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim(lean_object* v_motive_122_, uint8_t v_t_123_, lean_object* v_h_124_, lean_object* v_Odd_125_){
_start:
{
lean_inc(v_Odd_125_);
return v_Odd_125_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim___boxed(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_Odd_129_){
_start:
{
uint8_t v_t_boxed_130_; lean_object* v_res_131_; 
v_t_boxed_130_ = lean_unbox(v_t_127_);
v_res_131_ = lp_EllipticCurveBSD_EllipticCurveBSD_Z2Parity_Odd_elim(v_motive_126_, v_t_boxed_130_, v_h_128_, v_Odd_129_);
lean_dec(v_Odd_129_);
return v_res_131_;
}
}
static lean_object* _init_lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(1u);
v___x_133_ = lean_nat_to_int(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__1(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_obj_once(&lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0, &lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0_once, _init_lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0);
v___x_135_ = lean_int_neg(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue(uint8_t v_p_136_){
_start:
{
if (v_p_136_ == 0)
{
lean_object* v___x_137_; 
v___x_137_ = lean_obj_once(&lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0, &lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0_once, _init_lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__0);
return v___x_137_;
}
else
{
lean_object* v___x_138_; 
v___x_138_ = lean_obj_once(&lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__1, &lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__1_once, _init_lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___closed__1);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue___boxed(lean_object* v_p_139_){
_start:
{
uint8_t v_p_boxed_140_; lean_object* v_res_141_; 
v_p_boxed_140_ = lean_unbox(v_p_139_);
v_res_141_ = lp_EllipticCurveBSD_EllipticCurveBSD_parity__eigenvalue(v_p_boxed_140_);
return v_res_141_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Real_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Complex_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_InnerProductSpace_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_PosDef(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Order_Field_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_EllipticCurveBSD_EllipticCurveBSD(uint8_t builtin) {
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
res = initialize_mathlib_Mathlib_Data_Real_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Complex_Basic(builtin);
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
