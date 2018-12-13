//
// Created by Mat on 13/12/2018.
//

#ifndef KOHONENMAP_NEURON_H
#define KOHONENMAP_NEURON_H


#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

class Neuron {
private :
    std::vector<float> weights;


    /**
    * Initialize random weights
    * @param weightsNumber
    */
    void initWeights(int weightsNumber);

public :
    float computeDistance(std::vector<float> *inputs);

};


#endif //KOHONENMAP_NEURON_H
