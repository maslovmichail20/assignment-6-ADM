#ifndef ASSIGNMENT_6_ADM_CREATECANVAS_H
#define ASSIGNMENT_6_ADM_CREATECANVAS_H

#include <vector>

using namespace std;

class DisplayControl {
public:
    DisplayControl(vector<double>&, vector<double>&, int, vector<int>&);
    vector<double> camera;
    vector<double> light;
    vector<vector<double>> canvas;
    vector<int> rgb;
    unsigned int widthPx;
    unsigned int heightPx;
    double width;
    double height;
    double dx;
    double dy;
    double dz;
    ~DisplayControl();
};


#endif //ASSIGNMENT_6_ADM_CREATECANVAS_H
