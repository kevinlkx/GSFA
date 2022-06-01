// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// gsfa_gibbs_cpp
List gsfa_gibbs_cpp(arma::mat Y, arma::mat G, int K, int neg_ctrl_index, bool use_ctrl, String prior_type, String initialize, double prior_s, double prior_r, double prior_sb, double prior_rb, double prior_gp, double prior_hp, double prior_gb, double prior_hb, double prior_gw, double prior_hw, double prior_gc, double prior_hc, int niter, int ave_niter, int lfsr_niter, bool verbose, bool return_samples);
RcppExport SEXP _GSFA_gsfa_gibbs_cpp(SEXP YSEXP, SEXP GSEXP, SEXP KSEXP, SEXP neg_ctrl_indexSEXP, SEXP use_ctrlSEXP, SEXP prior_typeSEXP, SEXP initializeSEXP, SEXP prior_sSEXP, SEXP prior_rSEXP, SEXP prior_sbSEXP, SEXP prior_rbSEXP, SEXP prior_gpSEXP, SEXP prior_hpSEXP, SEXP prior_gbSEXP, SEXP prior_hbSEXP, SEXP prior_gwSEXP, SEXP prior_hwSEXP, SEXP prior_gcSEXP, SEXP prior_hcSEXP, SEXP niterSEXP, SEXP ave_niterSEXP, SEXP lfsr_niterSEXP, SEXP verboseSEXP, SEXP return_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type neg_ctrl_index(neg_ctrl_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type use_ctrl(use_ctrlSEXP);
    Rcpp::traits::input_parameter< String >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< String >::type initialize(initializeSEXP);
    Rcpp::traits::input_parameter< double >::type prior_s(prior_sSEXP);
    Rcpp::traits::input_parameter< double >::type prior_r(prior_rSEXP);
    Rcpp::traits::input_parameter< double >::type prior_sb(prior_sbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_rb(prior_rbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gp(prior_gpSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hp(prior_hpSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gb(prior_gbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hb(prior_hbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gw(prior_gwSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hw(prior_hwSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gc(prior_gcSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hc(prior_hcSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type ave_niter(ave_niterSEXP);
    Rcpp::traits::input_parameter< int >::type lfsr_niter(lfsr_niterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type return_samples(return_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(gsfa_gibbs_cpp(Y, G, K, neg_ctrl_index, use_ctrl, prior_type, initialize, prior_s, prior_r, prior_sb, prior_rb, prior_gp, prior_hp, prior_gb, prior_hb, prior_gw, prior_hw, prior_gc, prior_hc, niter, ave_niter, lfsr_niter, verbose, return_samples));
    return rcpp_result_gen;
END_RCPP
}
// restart_gsfa_gibbs_cpp
List restart_gsfa_gibbs_cpp(arma::mat Y, arma::mat G, arma::mat Z, arma::mat F, arma::mat W, arma::mat Gamma, arma::mat beta, arma::vec pi_vec, arma::vec pi_beta, arma::vec psi, arma::vec sigma_w2, arma::vec sigma_b2, arma::vec c2, List prior_params, int neg_ctrl_index, bool use_ctrl, String prior_type, int niter, int ave_niter, int lfsr_niter, bool verbose, bool return_samples);
RcppExport SEXP _GSFA_restart_gsfa_gibbs_cpp(SEXP YSEXP, SEXP GSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP, SEXP GammaSEXP, SEXP betaSEXP, SEXP pi_vecSEXP, SEXP pi_betaSEXP, SEXP psiSEXP, SEXP sigma_w2SEXP, SEXP sigma_b2SEXP, SEXP c2SEXP, SEXP prior_paramsSEXP, SEXP neg_ctrl_indexSEXP, SEXP use_ctrlSEXP, SEXP prior_typeSEXP, SEXP niterSEXP, SEXP ave_niterSEXP, SEXP lfsr_niterSEXP, SEXP verboseSEXP, SEXP return_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_vec(pi_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_beta(pi_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_w2(sigma_w2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_b2(sigma_b2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< List >::type prior_params(prior_paramsSEXP);
    Rcpp::traits::input_parameter< int >::type neg_ctrl_index(neg_ctrl_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type use_ctrl(use_ctrlSEXP);
    Rcpp::traits::input_parameter< String >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type ave_niter(ave_niterSEXP);
    Rcpp::traits::input_parameter< int >::type lfsr_niter(lfsr_niterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type return_samples(return_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(restart_gsfa_gibbs_cpp(Y, G, Z, F, W, Gamma, beta, pi_vec, pi_beta, psi, sigma_w2, sigma_b2, c2, prior_params, neg_ctrl_index, use_ctrl, prior_type, niter, ave_niter, lfsr_niter, verbose, return_samples));
    return rcpp_result_gen;
END_RCPP
}
// gsfa_gibbs_2groups_cpp
List gsfa_gibbs_2groups_cpp(arma::mat Y, arma::mat G, arma::vec group, int K, int neg_ctrl_index, bool use_ctrl, String prior_type, String initialize, double prior_s, double prior_r, double prior_sb, double prior_rb, double prior_gp, double prior_hp, double prior_gb, double prior_hb, double prior_gw, double prior_hw, double prior_gc, double prior_hc, int niter, int ave_niter, int lfsr_niter, bool verbose, bool return_samples);
RcppExport SEXP _GSFA_gsfa_gibbs_2groups_cpp(SEXP YSEXP, SEXP GSEXP, SEXP groupSEXP, SEXP KSEXP, SEXP neg_ctrl_indexSEXP, SEXP use_ctrlSEXP, SEXP prior_typeSEXP, SEXP initializeSEXP, SEXP prior_sSEXP, SEXP prior_rSEXP, SEXP prior_sbSEXP, SEXP prior_rbSEXP, SEXP prior_gpSEXP, SEXP prior_hpSEXP, SEXP prior_gbSEXP, SEXP prior_hbSEXP, SEXP prior_gwSEXP, SEXP prior_hwSEXP, SEXP prior_gcSEXP, SEXP prior_hcSEXP, SEXP niterSEXP, SEXP ave_niterSEXP, SEXP lfsr_niterSEXP, SEXP verboseSEXP, SEXP return_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type neg_ctrl_index(neg_ctrl_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type use_ctrl(use_ctrlSEXP);
    Rcpp::traits::input_parameter< String >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< String >::type initialize(initializeSEXP);
    Rcpp::traits::input_parameter< double >::type prior_s(prior_sSEXP);
    Rcpp::traits::input_parameter< double >::type prior_r(prior_rSEXP);
    Rcpp::traits::input_parameter< double >::type prior_sb(prior_sbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_rb(prior_rbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gp(prior_gpSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hp(prior_hpSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gb(prior_gbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hb(prior_hbSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gw(prior_gwSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hw(prior_hwSEXP);
    Rcpp::traits::input_parameter< double >::type prior_gc(prior_gcSEXP);
    Rcpp::traits::input_parameter< double >::type prior_hc(prior_hcSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type ave_niter(ave_niterSEXP);
    Rcpp::traits::input_parameter< int >::type lfsr_niter(lfsr_niterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type return_samples(return_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(gsfa_gibbs_2groups_cpp(Y, G, group, K, neg_ctrl_index, use_ctrl, prior_type, initialize, prior_s, prior_r, prior_sb, prior_rb, prior_gp, prior_hp, prior_gb, prior_hb, prior_gw, prior_hw, prior_gc, prior_hc, niter, ave_niter, lfsr_niter, verbose, return_samples));
    return rcpp_result_gen;
END_RCPP
}
// restart_gibbs_2groups_cpp
List restart_gibbs_2groups_cpp(arma::mat Y, arma::mat G, arma::vec group, arma::mat Z, arma::mat F, arma::mat W, arma::mat Gamma0, arma::mat Gamma1, arma::mat beta0, arma::mat beta1, arma::vec pi_vec, arma::vec pi_beta0, arma::vec pi_beta1, arma::vec psi, arma::vec sigma_w2, arma::vec sigma_b20, arma::vec sigma_b21, arma::vec c2, List prior_params, int neg_ctrl_index, bool use_ctrl, String prior_type, int niter, int ave_niter, int lfsr_niter, bool verbose, bool return_samples);
RcppExport SEXP _GSFA_restart_gibbs_2groups_cpp(SEXP YSEXP, SEXP GSEXP, SEXP groupSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP, SEXP Gamma0SEXP, SEXP Gamma1SEXP, SEXP beta0SEXP, SEXP beta1SEXP, SEXP pi_vecSEXP, SEXP pi_beta0SEXP, SEXP pi_beta1SEXP, SEXP psiSEXP, SEXP sigma_w2SEXP, SEXP sigma_b20SEXP, SEXP sigma_b21SEXP, SEXP c2SEXP, SEXP prior_paramsSEXP, SEXP neg_ctrl_indexSEXP, SEXP use_ctrlSEXP, SEXP prior_typeSEXP, SEXP niterSEXP, SEXP ave_niterSEXP, SEXP lfsr_niterSEXP, SEXP verboseSEXP, SEXP return_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group(groupSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Gamma0(Gamma0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Gamma1(Gamma1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta1(beta1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_vec(pi_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_beta0(pi_beta0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_beta1(pi_beta1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_w2(sigma_w2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_b20(sigma_b20SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_b21(sigma_b21SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< List >::type prior_params(prior_paramsSEXP);
    Rcpp::traits::input_parameter< int >::type neg_ctrl_index(neg_ctrl_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type use_ctrl(use_ctrlSEXP);
    Rcpp::traits::input_parameter< String >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type ave_niter(ave_niterSEXP);
    Rcpp::traits::input_parameter< int >::type lfsr_niter(lfsr_niterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type return_samples(return_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(restart_gibbs_2groups_cpp(Y, G, group, Z, F, W, Gamma0, Gamma1, beta0, beta1, pi_vec, pi_beta0, pi_beta1, psi, sigma_w2, sigma_b20, sigma_b21, c2, prior_params, neg_ctrl_index, use_ctrl, prior_type, niter, ave_niter, lfsr_niter, verbose, return_samples));
    return rcpp_result_gen;
END_RCPP
}
// mvrnormArma
arma::vec mvrnormArma(arma::vec mu, arma::mat sigma);
RcppExport SEXP _GSFA_mvrnormArma(SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(mvrnormArma(mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// sample_Z
void sample_Z(int N, int K, arma::mat Y, arma::mat F, arma::mat W, arma::mat G, arma::mat beta, arma::vec psi, arma::mat& Z);
RcppExport SEXP _GSFA_sample_Z(SEXP NSEXP, SEXP KSEXP, SEXP YSEXP, SEXP FSEXP, SEXP WSEXP, SEXP GSEXP, SEXP betaSEXP, SEXP psiSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Z(ZSEXP);
    sample_Z(N, K, Y, F, W, G, beta, psi, Z);
    return R_NilValue;
END_RCPP
}
// sample_GammaBeta
void sample_GammaBeta(int N, int M, int K, arma::mat Z, arma::mat G, arma::mat& Gamma, arma::mat& beta, arma::vec sigma_b2, arma::vec pi_beta);
RcppExport SEXP _GSFA_sample_GammaBeta(SEXP NSEXP, SEXP MSEXP, SEXP KSEXP, SEXP ZSEXP, SEXP GSEXP, SEXP GammaSEXP, SEXP betaSEXP, SEXP sigma_b2SEXP, SEXP pi_betaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_b2(sigma_b2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_beta(pi_betaSEXP);
    sample_GammaBeta(N, M, K, Z, G, Gamma, beta, sigma_b2, pi_beta);
    return R_NilValue;
END_RCPP
}
// sample_W
void sample_W(int P, int K, arma::mat Y, arma::mat Z, arma::mat F, arma::mat& W, arma::vec psi, arma::vec sigma_w2, arma::vec c2);
RcppExport SEXP _GSFA_sample_W(SEXP PSEXP, SEXP KSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP, SEXP psiSEXP, SEXP sigma_w2SEXP, SEXP c2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_w2(sigma_w2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type c2(c2SEXP);
    sample_W(P, K, Y, Z, F, W, psi, sigma_w2, c2);
    return R_NilValue;
END_RCPP
}
// sample_F
void sample_F(int P, int K, arma::mat W, arma::mat& F, arma::vec pi_vec, arma::vec sigma_w2, arma::vec c2);
RcppExport SEXP _GSFA_sample_F(SEXP PSEXP, SEXP KSEXP, SEXP WSEXP, SEXP FSEXP, SEXP pi_vecSEXP, SEXP sigma_w2SEXP, SEXP c2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_vec(pi_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_w2(sigma_w2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type c2(c2SEXP);
    sample_F(P, K, W, F, pi_vec, sigma_w2, c2);
    return R_NilValue;
END_RCPP
}
// sample_FW_spike_slab
void sample_FW_spike_slab(int N, int P, int K, arma::mat Y, arma::mat Z, arma::mat& F, arma::mat& W, arma::vec psi, arma::vec sigma_w2, arma::vec pi_vec);
RcppExport SEXP _GSFA_sample_FW_spike_slab(SEXP NSEXP, SEXP PSEXP, SEXP KSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP, SEXP psiSEXP, SEXP sigma_w2SEXP, SEXP pi_vecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma_w2(sigma_w2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi_vec(pi_vecSEXP);
    sample_FW_spike_slab(N, P, K, Y, Z, F, W, psi, sigma_w2, pi_vec);
    return R_NilValue;
END_RCPP
}
// sample_psi
void sample_psi(int N, int P, arma::mat Y, arma::mat Z, arma::mat F, arma::mat W, arma::vec prior_psi, arma::vec& psi);
RcppExport SEXP _GSFA_sample_psi(SEXP NSEXP, SEXP PSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP, SEXP prior_psiSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_psi(prior_psiSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type psi(psiSEXP);
    sample_psi(N, P, Y, Z, F, W, prior_psi, psi);
    return R_NilValue;
END_RCPP
}
// sample_pi
void sample_pi(int P, int K, arma::mat F, arma::vec prior_pi, arma::vec& pi_vec);
RcppExport SEXP _GSFA_sample_pi(SEXP PSEXP, SEXP KSEXP, SEXP FSEXP, SEXP prior_piSEXP, SEXP pi_vecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_pi(prior_piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi_vec(pi_vecSEXP);
    sample_pi(P, K, F, prior_pi, pi_vec);
    return R_NilValue;
END_RCPP
}
// sample_pi_beta
void sample_pi_beta(int M, int K, arma::mat Gamma, arma::vec prior_pibeta, arma::vec& pi_beta);
RcppExport SEXP _GSFA_sample_pi_beta(SEXP MSEXP, SEXP KSEXP, SEXP GammaSEXP, SEXP prior_pibetaSEXP, SEXP pi_betaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_pibeta(prior_pibetaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi_beta(pi_betaSEXP);
    sample_pi_beta(M, K, Gamma, prior_pibeta, pi_beta);
    return R_NilValue;
END_RCPP
}
// sample_sigma_w2
void sample_sigma_w2(int K, int P, arma::mat F, arma::mat W, arma::vec prior_sigma2w, arma::vec c2, arma::vec& sigma_w2_vec);
RcppExport SEXP _GSFA_sample_sigma_w2(SEXP KSEXP, SEXP PSEXP, SEXP FSEXP, SEXP WSEXP, SEXP prior_sigma2wSEXP, SEXP c2SEXP, SEXP sigma_w2_vecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_sigma2w(prior_sigma2wSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma_w2_vec(sigma_w2_vecSEXP);
    sample_sigma_w2(K, P, F, W, prior_sigma2w, c2, sigma_w2_vec);
    return R_NilValue;
END_RCPP
}
// sample_sigma_w2_spike_slab
void sample_sigma_w2_spike_slab(int K, arma::mat F, arma::mat W, arma::vec prior_sigma2w, arma::vec& sigma_w2_vec);
RcppExport SEXP _GSFA_sample_sigma_w2_spike_slab(SEXP KSEXP, SEXP FSEXP, SEXP WSEXP, SEXP prior_sigma2wSEXP, SEXP sigma_w2_vecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_sigma2w(prior_sigma2wSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma_w2_vec(sigma_w2_vecSEXP);
    sample_sigma_w2_spike_slab(K, F, W, prior_sigma2w, sigma_w2_vec);
    return R_NilValue;
END_RCPP
}
// sample_c2
void sample_c2(int K, int P, arma::mat F, arma::mat W, arma::vec sigma2w, arma::vec prior_c, arma::vec& c2);
RcppExport SEXP _GSFA_sample_c2(SEXP KSEXP, SEXP PSEXP, SEXP FSEXP, SEXP WSEXP, SEXP sigma2wSEXP, SEXP prior_cSEXP, SEXP c2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma2w(sigma2wSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_c(prior_cSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type c2(c2SEXP);
    sample_c2(K, P, F, W, sigma2w, prior_c, c2);
    return R_NilValue;
END_RCPP
}
// sample_sigma_b2
void sample_sigma_b2(int M, arma::mat Gamma, arma::mat beta, arma::vec prior_sigma2b, arma::vec& sigma_b2_vec);
RcppExport SEXP _GSFA_sample_sigma_b2(SEXP MSEXP, SEXP GammaSEXP, SEXP betaSEXP, SEXP prior_sigma2bSEXP, SEXP sigma_b2_vecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_sigma2b(prior_sigma2bSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma_b2_vec(sigma_b2_vecSEXP);
    sample_sigma_b2(M, Gamma, beta, prior_sigma2b, sigma_b2_vec);
    return R_NilValue;
END_RCPP
}
// initialize_random
void initialize_random(int K, arma::mat Y, arma::mat& Z, arma::mat& F, arma::mat& W);
RcppExport SEXP _GSFA_initialize_random(SEXP KSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    initialize_random(K, Y, Z, F, W);
    return R_NilValue;
END_RCPP
}
// initialize_svd
void initialize_svd(int K, arma::mat Y, arma::mat& Z, arma::mat& F, arma::mat& W);
RcppExport SEXP _GSFA_initialize_svd(SEXP KSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    initialize_svd(K, Y, Z, F, W);
    return R_NilValue;
END_RCPP
}
// initialize_given_Z
void initialize_given_Z(int K, arma::mat Y, arma::mat& Z, arma::mat& F, arma::mat& W);
RcppExport SEXP _GSFA_initialize_given_Z(SEXP KSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP FSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    initialize_given_Z(K, Y, Z, F, W);
    return R_NilValue;
END_RCPP
}
// initialize_GammaBeta
void initialize_GammaBeta(int M, int K, arma::mat G, arma::mat Z, arma::mat& beta, arma::mat& Gamma);
RcppExport SEXP _GSFA_initialize_GammaBeta(SEXP MSEXP, SEXP KSEXP, SEXP GSEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP GammaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Gamma(GammaSEXP);
    initialize_GammaBeta(M, K, G, Z, beta, Gamma);
    return R_NilValue;
END_RCPP
}
// compute_posterior_mean_cpp
List compute_posterior_mean_cpp(arma::cube Gamma_mtx, arma::cube beta_mtx, arma::mat pi_beta_mtx, arma::cube Z_mtx, arma::cube F_mtx, arma::cube W_mtx, arma::mat pi_mtx, arma::mat sigma_w2_mtx, arma::mat c2_mtx, int niter, int ave_niter, String prior_type);
RcppExport SEXP _GSFA_compute_posterior_mean_cpp(SEXP Gamma_mtxSEXP, SEXP beta_mtxSEXP, SEXP pi_beta_mtxSEXP, SEXP Z_mtxSEXP, SEXP F_mtxSEXP, SEXP W_mtxSEXP, SEXP pi_mtxSEXP, SEXP sigma_w2_mtxSEXP, SEXP c2_mtxSEXP, SEXP niterSEXP, SEXP ave_niterSEXP, SEXP prior_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type Gamma_mtx(Gamma_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type beta_mtx(beta_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi_beta_mtx(pi_beta_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Z_mtx(Z_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type F_mtx(F_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type W_mtx(W_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi_mtx(pi_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma_w2_mtx(sigma_w2_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type c2_mtx(c2_mtxSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type ave_niter(ave_niterSEXP);
    Rcpp::traits::input_parameter< String >::type prior_type(prior_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_posterior_mean_cpp(Gamma_mtx, beta_mtx, pi_beta_mtx, Z_mtx, F_mtx, W_mtx, pi_mtx, sigma_w2_mtx, c2_mtx, niter, ave_niter, prior_type));
    return rcpp_result_gen;
END_RCPP
}
// compute_posterior_mean_2groups_cpp
List compute_posterior_mean_2groups_cpp(arma::cube Gamma0_mtx, arma::cube beta0_mtx, arma::mat pi_beta0_mtx, arma::cube Gamma1_mtx, arma::cube beta1_mtx, arma::mat pi_beta1_mtx, arma::cube Z_mtx, arma::cube F_mtx, arma::cube W_mtx, arma::mat pi_mtx, arma::mat sigma_w2_mtx, arma::mat c2_mtx, int niter, int ave_niter, String prior_type);
RcppExport SEXP _GSFA_compute_posterior_mean_2groups_cpp(SEXP Gamma0_mtxSEXP, SEXP beta0_mtxSEXP, SEXP pi_beta0_mtxSEXP, SEXP Gamma1_mtxSEXP, SEXP beta1_mtxSEXP, SEXP pi_beta1_mtxSEXP, SEXP Z_mtxSEXP, SEXP F_mtxSEXP, SEXP W_mtxSEXP, SEXP pi_mtxSEXP, SEXP sigma_w2_mtxSEXP, SEXP c2_mtxSEXP, SEXP niterSEXP, SEXP ave_niterSEXP, SEXP prior_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type Gamma0_mtx(Gamma0_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type beta0_mtx(beta0_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi_beta0_mtx(pi_beta0_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Gamma1_mtx(Gamma1_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type beta1_mtx(beta1_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi_beta1_mtx(pi_beta1_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Z_mtx(Z_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type F_mtx(F_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type W_mtx(W_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi_mtx(pi_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma_w2_mtx(sigma_w2_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type c2_mtx(c2_mtxSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type ave_niter(ave_niterSEXP);
    Rcpp::traits::input_parameter< String >::type prior_type(prior_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_posterior_mean_2groups_cpp(Gamma0_mtx, beta0_mtx, pi_beta0_mtx, Gamma1_mtx, beta1_mtx, pi_beta1_mtx, Z_mtx, F_mtx, W_mtx, pi_mtx, sigma_w2_mtx, c2_mtx, niter, ave_niter, prior_type));
    return rcpp_result_gen;
END_RCPP
}
// compute_lfsr_cpp
void compute_lfsr_cpp(arma::cube beta_mtx, arma::cube W_mtx, arma::cube F_mtx, arma::mat& lfsr_mat, arma::mat& total_effect, int use_niter, String prior_type);
RcppExport SEXP _GSFA_compute_lfsr_cpp(SEXP beta_mtxSEXP, SEXP W_mtxSEXP, SEXP F_mtxSEXP, SEXP lfsr_matSEXP, SEXP total_effectSEXP, SEXP use_niterSEXP, SEXP prior_typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type beta_mtx(beta_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type W_mtx(W_mtxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type F_mtx(F_mtxSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type lfsr_mat(lfsr_matSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type total_effect(total_effectSEXP);
    Rcpp::traits::input_parameter< int >::type use_niter(use_niterSEXP);
    Rcpp::traits::input_parameter< String >::type prior_type(prior_typeSEXP);
    compute_lfsr_cpp(beta_mtx, W_mtx, F_mtx, lfsr_mat, total_effect, use_niter, prior_type);
    return R_NilValue;
END_RCPP
}
// calibrate_beta_vs_negctrl
arma::cube calibrate_beta_vs_negctrl(arma::cube beta_mtx, int neg_ctrl_index);
RcppExport SEXP _GSFA_calibrate_beta_vs_negctrl(SEXP beta_mtxSEXP, SEXP neg_ctrl_indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type beta_mtx(beta_mtxSEXP);
    Rcpp::traits::input_parameter< int >::type neg_ctrl_index(neg_ctrl_indexSEXP);
    rcpp_result_gen = Rcpp::wrap(calibrate_beta_vs_negctrl(beta_mtx, neg_ctrl_index));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GSFA_gsfa_gibbs_cpp", (DL_FUNC) &_GSFA_gsfa_gibbs_cpp, 24},
    {"_GSFA_restart_gsfa_gibbs_cpp", (DL_FUNC) &_GSFA_restart_gsfa_gibbs_cpp, 22},
    {"_GSFA_gsfa_gibbs_2groups_cpp", (DL_FUNC) &_GSFA_gsfa_gibbs_2groups_cpp, 25},
    {"_GSFA_restart_gibbs_2groups_cpp", (DL_FUNC) &_GSFA_restart_gibbs_2groups_cpp, 27},
    {"_GSFA_mvrnormArma", (DL_FUNC) &_GSFA_mvrnormArma, 2},
    {"_GSFA_sample_Z", (DL_FUNC) &_GSFA_sample_Z, 9},
    {"_GSFA_sample_GammaBeta", (DL_FUNC) &_GSFA_sample_GammaBeta, 9},
    {"_GSFA_sample_W", (DL_FUNC) &_GSFA_sample_W, 9},
    {"_GSFA_sample_F", (DL_FUNC) &_GSFA_sample_F, 7},
    {"_GSFA_sample_FW_spike_slab", (DL_FUNC) &_GSFA_sample_FW_spike_slab, 10},
    {"_GSFA_sample_psi", (DL_FUNC) &_GSFA_sample_psi, 8},
    {"_GSFA_sample_pi", (DL_FUNC) &_GSFA_sample_pi, 5},
    {"_GSFA_sample_pi_beta", (DL_FUNC) &_GSFA_sample_pi_beta, 5},
    {"_GSFA_sample_sigma_w2", (DL_FUNC) &_GSFA_sample_sigma_w2, 7},
    {"_GSFA_sample_sigma_w2_spike_slab", (DL_FUNC) &_GSFA_sample_sigma_w2_spike_slab, 5},
    {"_GSFA_sample_c2", (DL_FUNC) &_GSFA_sample_c2, 7},
    {"_GSFA_sample_sigma_b2", (DL_FUNC) &_GSFA_sample_sigma_b2, 5},
    {"_GSFA_initialize_random", (DL_FUNC) &_GSFA_initialize_random, 5},
    {"_GSFA_initialize_svd", (DL_FUNC) &_GSFA_initialize_svd, 5},
    {"_GSFA_initialize_given_Z", (DL_FUNC) &_GSFA_initialize_given_Z, 5},
    {"_GSFA_initialize_GammaBeta", (DL_FUNC) &_GSFA_initialize_GammaBeta, 6},
    {"_GSFA_compute_posterior_mean_cpp", (DL_FUNC) &_GSFA_compute_posterior_mean_cpp, 12},
    {"_GSFA_compute_posterior_mean_2groups_cpp", (DL_FUNC) &_GSFA_compute_posterior_mean_2groups_cpp, 15},
    {"_GSFA_compute_lfsr_cpp", (DL_FUNC) &_GSFA_compute_lfsr_cpp, 7},
    {"_GSFA_calibrate_beta_vs_negctrl", (DL_FUNC) &_GSFA_calibrate_beta_vs_negctrl, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_GSFA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
