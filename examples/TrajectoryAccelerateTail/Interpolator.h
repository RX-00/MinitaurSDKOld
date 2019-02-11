// Joe Norby

#ifndef INTERPOLATOR_H
#define INTERPOLATOR_H

#define TIMESTEPS 42
#define MOTORS 9

class Interpolator {
 private:
  int index;
  float a,b,s;
  float P[MOTORS];

 public:
  Interpolator();
  float getSingleZOH(float *, float *, int);
  float getSingleLinearInterp(float *, float *, int);
  float getSingleCubicSplineInterp(float *, float *, float *, int);
  void getMultipleZOH(float [][MOTORS], float [], float, float []);
  void getMultipleLinearInterp(float [][MOTORS], float [], float, float []);
  void getMultipleCubicSplineInterp(float [][MOTORS], float [][MOTORS], float [], float, float []);

};

#endif
