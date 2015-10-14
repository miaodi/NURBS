#ifndef _spline_h
#define _spline_h
#endif


namespace spline {
	void DersBasisFuns(int i, double u, int p, double* U, int n, double** & ders);
	int Findspan(int m, int p, double* U, double u);
}
