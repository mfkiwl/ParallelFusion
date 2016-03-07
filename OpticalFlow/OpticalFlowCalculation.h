#ifndef OPTICAL_FLOW_CALCULATION_H__
#define OPTICAL_FLOW_CALCULATION_H__

#include <vector>
#include <opencv2/core/core.hpp>

std::vector<std::pair<double, double> > calcFlowsPyrLK(const cv::Mat &image_1, const cv::Mat &image_2, const int NUM_LEVELS);
std::vector<std::pair<double, double> > calcFlowsFarneback(const cv::Mat &image_1, const cv::Mat &image_2, const int NUM_LEVELS, const int POLY_N, const int FLAGS);
std::vector<std::pair<double, double> > calcFlowsLayerWise(const cv::Mat &image_1, const cv::Mat &image_2, const double ALPHA, const double RATIO);
std::vector<std::pair<double, double> > calcFlowsBrox(const cv::Mat &image_1, const cv::Mat &image_2, const double ALPHA, const double RATIO);
  
#endif
