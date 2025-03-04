#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_35(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_7780559063331998336);
void live_err_fun(double *nom_x, double *delta_x, double *out_999415349872430631);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_8573234105847486633);
void live_H_mod_fun(double *state, double *out_19946696934257530);
void live_f_fun(double *state, double dt, double *out_1498526153347133616);
void live_F_fun(double *state, double dt, double *out_1755752448204562714);
void live_h_4(double *state, double *unused, double *out_896586902185652217);
void live_H_4(double *state, double *unused, double *out_4153196962792427124);
void live_h_9(double *state, double *unused, double *out_8820358569283700125);
void live_H_9(double *state, double *unused, double *out_7042058515072506466);
void live_h_10(double *state, double *unused, double *out_4080446749417464670);
void live_H_10(double *state, double *unused, double *out_5400928639869946893);
void live_h_12(double *state, double *unused, double *out_9039434647238207568);
void live_H_12(double *state, double *unused, double *out_4774295987840020791);
void live_h_35(double *state, double *unused, double *out_2247056583479490249);
void live_H_35(double *state, double *unused, double *out_7519859020165034500);
void live_h_32(double *state, double *unused, double *out_4336423878475766591);
void live_H_32(double *state, double *unused, double *out_7651023805105774969);
void live_h_13(double *state, double *unused, double *out_4522400920186593733);
void live_H_13(double *state, double *unused, double *out_5736719612513754518);
void live_h_14(double *state, double *unused, double *out_8820358569283700125);
void live_H_14(double *state, double *unused, double *out_7042058515072506466);
void live_h_33(double *state, double *unused, double *out_1795930317822364768);
void live_H_33(double *state, double *unused, double *out_7776328048905659512);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}