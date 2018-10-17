// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// integrate_KernelPrometheePlus
double integrate_KernelPrometheePlus(Eigen::VectorXd dados, int prefFunction, Eigen::VectorXd weights, Eigen::VectorXd parms, double band, bool normalize, int alt);
RcppExport SEXP _RMCriteria_integrate_KernelPrometheePlus(SEXP dadosSEXP, SEXP prefFunctionSEXP, SEXP weightsSEXP, SEXP parmsSEXP, SEXP bandSEXP, SEXP normalizeSEXP, SEXP altSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type dados(dadosSEXP);
    Rcpp::traits::input_parameter< int >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type parms(parmsSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< int >::type alt(altSEXP);
    rcpp_result_gen = Rcpp::wrap(integrate_KernelPrometheePlus(dados, prefFunction, weights, parms, band, normalize, alt));
    return rcpp_result_gen;
END_RCPP
}
// integrate_KernelPrometheeMinus
double integrate_KernelPrometheeMinus(Eigen::VectorXd dados, int prefFunction, Eigen::VectorXd weights, Eigen::VectorXd parms, double band, bool normalize, int alt);
RcppExport SEXP _RMCriteria_integrate_KernelPrometheeMinus(SEXP dadosSEXP, SEXP prefFunctionSEXP, SEXP weightsSEXP, SEXP parmsSEXP, SEXP bandSEXP, SEXP normalizeSEXP, SEXP altSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type dados(dadosSEXP);
    Rcpp::traits::input_parameter< int >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type parms(parmsSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< int >::type alt(altSEXP);
    rcpp_result_gen = Rcpp::wrap(integrate_KernelPrometheeMinus(dados, prefFunction, weights, parms, band, normalize, alt));
    return rcpp_result_gen;
END_RCPP
}
// Ktest
double Ktest(Eigen::VectorXd vec, double band, bool plus, int alt);
RcppExport SEXP _RMCriteria_Ktest(SEXP vecSEXP, SEXP bandSEXP, SEXP plusSEXP, SEXP altSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type plus(plusSEXP);
    Rcpp::traits::input_parameter< int >::type alt(altSEXP);
    rcpp_result_gen = Rcpp::wrap(Ktest(vec, band, plus, alt));
    return rcpp_result_gen;
END_RCPP
}
// GaussianPrefKernel
double GaussianPrefKernel(double y, Eigen::VectorXd vec, double band, double sigma, bool plus);
RcppExport SEXP _RMCriteria_GaussianPrefKernel(SEXP ySEXP, SEXP vecSEXP, SEXP bandSEXP, SEXP sigmaSEXP, SEXP plusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type plus(plusSEXP);
    rcpp_result_gen = Rcpp::wrap(GaussianPrefKernel(y, vec, band, sigma, plus));
    return rcpp_result_gen;
END_RCPP
}
// UsualPrefKernel
double UsualPrefKernel(double y, Eigen::VectorXd vec, double band, bool plus);
RcppExport SEXP _RMCriteria_UsualPrefKernel(SEXP ySEXP, SEXP vecSEXP, SEXP bandSEXP, SEXP plusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type plus(plusSEXP);
    rcpp_result_gen = Rcpp::wrap(UsualPrefKernel(y, vec, band, plus));
    return rcpp_result_gen;
END_RCPP
}
// UShapePrefKernel
double UShapePrefKernel(double y, Eigen::VectorXd vec, double band, bool plus, double q);
RcppExport SEXP _RMCriteria_UShapePrefKernel(SEXP ySEXP, SEXP vecSEXP, SEXP bandSEXP, SEXP plusSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type plus(plusSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(UShapePrefKernel(y, vec, band, plus, q));
    return rcpp_result_gen;
END_RCPP
}
// LevelPrefKernel
double LevelPrefKernel(double y, Eigen::VectorXd vec, double band, bool plus, double q, double p);
RcppExport SEXP _RMCriteria_LevelPrefKernel(SEXP ySEXP, SEXP vecSEXP, SEXP bandSEXP, SEXP plusSEXP, SEXP qSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type plus(plusSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(LevelPrefKernel(y, vec, band, plus, q, p));
    return rcpp_result_gen;
END_RCPP
}
// VShapePrefKernel
double VShapePrefKernel(double y, Eigen::VectorXd vec, double band, bool plus, double p);
RcppExport SEXP _RMCriteria_VShapePrefKernel(SEXP ySEXP, SEXP vecSEXP, SEXP bandSEXP, SEXP plusSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type plus(plusSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(VShapePrefKernel(y, vec, band, plus, p));
    return rcpp_result_gen;
END_RCPP
}
// VShapeIndPrefKernel
double VShapeIndPrefKernel(double y, Eigen::VectorXd vec, double band, bool plus, double q, double p);
RcppExport SEXP _RMCriteria_VShapeIndPrefKernel(SEXP ySEXP, SEXP vecSEXP, SEXP bandSEXP, SEXP plusSEXP, SEXP qSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type plus(plusSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(VShapeIndPrefKernel(y, vec, band, plus, q, p));
    return rcpp_result_gen;
END_RCPP
}
// matPrometheeI
Eigen::MatrixXd matPrometheeI(Eigen::VectorXd datVec, int prefFunction, Eigen::VectorXd parms);
RcppExport SEXP _RMCriteria_matPrometheeI(SEXP datVecSEXP, SEXP prefFunctionSEXP, SEXP parmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type datVec(datVecSEXP);
    Rcpp::traits::input_parameter< int >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type parms(parmsSEXP);
    rcpp_result_gen = Rcpp::wrap(matPrometheeI(datVec, prefFunction, parms));
    return rcpp_result_gen;
END_RCPP
}
// PrometheeI
List PrometheeI(Eigen::MatrixXd datMat, Eigen::VectorXd vecWeights, Eigen::VectorXi prefFunction, Eigen::MatrixXd parms, bool normalize);
RcppExport SEXP _RMCriteria_PrometheeI(SEXP datMatSEXP, SEXP vecWeightsSEXP, SEXP prefFunctionSEXP, SEXP parmsSEXP, SEXP normalizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type datMat(datMatSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vecWeights(vecWeightsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type parms(parmsSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    rcpp_result_gen = Rcpp::wrap(PrometheeI(datMat, vecWeights, prefFunction, parms, normalize));
    return rcpp_result_gen;
END_RCPP
}
// matPrometheeII
Eigen::MatrixXd matPrometheeII(Eigen::VectorXd datVec, int prefFunction, Eigen::VectorXd parms);
RcppExport SEXP _RMCriteria_matPrometheeII(SEXP datVecSEXP, SEXP prefFunctionSEXP, SEXP parmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type datVec(datVecSEXP);
    Rcpp::traits::input_parameter< int >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type parms(parmsSEXP);
    rcpp_result_gen = Rcpp::wrap(matPrometheeII(datVec, prefFunction, parms));
    return rcpp_result_gen;
END_RCPP
}
// PrometheeII
Eigen::VectorXd PrometheeII(Eigen::MatrixXd datMat, Eigen::VectorXd vecWeights, Eigen::VectorXi prefFunction, Eigen::MatrixXd parms, bool normalize);
RcppExport SEXP _RMCriteria_PrometheeII(SEXP datMatSEXP, SEXP vecWeightsSEXP, SEXP prefFunctionSEXP, SEXP parmsSEXP, SEXP normalizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type datMat(datMatSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vecWeights(vecWeightsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type parms(parmsSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    rcpp_result_gen = Rcpp::wrap(PrometheeII(datMat, vecWeights, prefFunction, parms, normalize));
    return rcpp_result_gen;
END_RCPP
}
// matPrometheeIII
Eigen::MatrixXd matPrometheeIII(Eigen::VectorXd datVec, int prefFunction, Eigen::VectorXd parms);
RcppExport SEXP _RMCriteria_matPrometheeIII(SEXP datVecSEXP, SEXP prefFunctionSEXP, SEXP parmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type datVec(datVecSEXP);
    Rcpp::traits::input_parameter< int >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type parms(parmsSEXP);
    rcpp_result_gen = Rcpp::wrap(matPrometheeIII(datVec, prefFunction, parms));
    return rcpp_result_gen;
END_RCPP
}
// PrometheeIII
List PrometheeIII(Eigen::MatrixXd datMat, Eigen::VectorXd vecWeights, Eigen::VectorXi prefFunction, Eigen::VectorXi alphaVector, Eigen::MatrixXd parms);
RcppExport SEXP _RMCriteria_PrometheeIII(SEXP datMatSEXP, SEXP vecWeightsSEXP, SEXP prefFunctionSEXP, SEXP alphaVectorSEXP, SEXP parmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type datMat(datMatSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vecWeights(vecWeightsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type alphaVector(alphaVectorSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type parms(parmsSEXP);
    rcpp_result_gen = Rcpp::wrap(PrometheeIII(datMat, vecWeights, prefFunction, alphaVector, parms));
    return rcpp_result_gen;
END_RCPP
}
// PrometheeIV
Rcpp::List PrometheeIV(Eigen::MatrixXd datMat, Eigen::VectorXd vecWeights, Eigen::VectorXi prefFunction, Eigen::MatrixXd parms, bool normalize);
RcppExport SEXP _RMCriteria_PrometheeIV(SEXP datMatSEXP, SEXP vecWeightsSEXP, SEXP prefFunctionSEXP, SEXP parmsSEXP, SEXP normalizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type datMat(datMatSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vecWeights(vecWeightsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type parms(parmsSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    rcpp_result_gen = Rcpp::wrap(PrometheeIV(datMat, vecWeights, prefFunction, parms, normalize));
    return rcpp_result_gen;
END_RCPP
}
// PrometheeIVKernel
Rcpp::List PrometheeIVKernel(Eigen::MatrixXd datMat, Eigen::VectorXd vecWeights, Eigen::VectorXi prefFunction, Eigen::MatrixXd parms, Eigen::MatrixXd band, bool normalize);
RcppExport SEXP _RMCriteria_PrometheeIVKernel(SEXP datMatSEXP, SEXP vecWeightsSEXP, SEXP prefFunctionSEXP, SEXP parmsSEXP, SEXP bandSEXP, SEXP normalizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type datMat(datMatSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type vecWeights(vecWeightsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type prefFunction(prefFunctionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type parms(parmsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    rcpp_result_gen = Rcpp::wrap(PrometheeIVKernel(datMat, vecWeights, prefFunction, parms, band, normalize));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RMCriteria_integrate_KernelPrometheePlus", (DL_FUNC) &_RMCriteria_integrate_KernelPrometheePlus, 7},
    {"_RMCriteria_integrate_KernelPrometheeMinus", (DL_FUNC) &_RMCriteria_integrate_KernelPrometheeMinus, 7},
    {"_RMCriteria_Ktest", (DL_FUNC) &_RMCriteria_Ktest, 4},
    {"_RMCriteria_GaussianPrefKernel", (DL_FUNC) &_RMCriteria_GaussianPrefKernel, 5},
    {"_RMCriteria_UsualPrefKernel", (DL_FUNC) &_RMCriteria_UsualPrefKernel, 4},
    {"_RMCriteria_UShapePrefKernel", (DL_FUNC) &_RMCriteria_UShapePrefKernel, 5},
    {"_RMCriteria_LevelPrefKernel", (DL_FUNC) &_RMCriteria_LevelPrefKernel, 6},
    {"_RMCriteria_VShapePrefKernel", (DL_FUNC) &_RMCriteria_VShapePrefKernel, 5},
    {"_RMCriteria_VShapeIndPrefKernel", (DL_FUNC) &_RMCriteria_VShapeIndPrefKernel, 6},
    {"_RMCriteria_matPrometheeI", (DL_FUNC) &_RMCriteria_matPrometheeI, 3},
    {"_RMCriteria_PrometheeI", (DL_FUNC) &_RMCriteria_PrometheeI, 5},
    {"_RMCriteria_matPrometheeII", (DL_FUNC) &_RMCriteria_matPrometheeII, 3},
    {"_RMCriteria_PrometheeII", (DL_FUNC) &_RMCriteria_PrometheeII, 5},
    {"_RMCriteria_matPrometheeIII", (DL_FUNC) &_RMCriteria_matPrometheeIII, 3},
    {"_RMCriteria_PrometheeIII", (DL_FUNC) &_RMCriteria_PrometheeIII, 5},
    {"_RMCriteria_PrometheeIV", (DL_FUNC) &_RMCriteria_PrometheeIV, 5},
    {"_RMCriteria_PrometheeIVKernel", (DL_FUNC) &_RMCriteria_PrometheeIVKernel, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_RMCriteria(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
