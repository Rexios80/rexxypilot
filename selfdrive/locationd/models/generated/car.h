#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_3493469749503897327);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_5684173860674989860);
void car_H_mod_fun(double *state, double *out_5537805799327843263);
void car_f_fun(double *state, double dt, double *out_7350276361713144536);
void car_F_fun(double *state, double dt, double *out_7686000262962875627);
void car_h_25(double *state, double *unused, double *out_5704266148613010008);
void car_H_25(double *state, double *unused, double *out_7041064152618449433);
void car_h_24(double *state, double *unused, double *out_8364193643001574417);
void car_H_24(double *state, double *unused, double *out_386858694510263676);
void car_h_30(double *state, double *unused, double *out_5429072086328504119);
void car_H_30(double *state, double *unused, double *out_6877983590963493985);
void car_h_26(double *state, double *unused, double *out_4485562233426841684);
void car_H_26(double *state, double *unused, double *out_7664176602217045959);
void car_h_27(double *state, double *unused, double *out_6343436407682692462);
void car_H_27(double *state, double *unused, double *out_4703220279163069074);
void car_h_29(double *state, double *unused, double *out_8465858137772836804);
void car_H_29(double *state, double *unused, double *out_7388214935277886169);
void car_h_28(double *state, double *unused, double *out_3082764253586382712);
void car_H_28(double *state, double *unused, double *out_9094898866866339196);
void car_h_31(double *state, double *unused, double *out_5547079480261880863);
void car_H_31(double *state, double *unused, double *out_7037968499983694483);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}