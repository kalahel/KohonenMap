//
// Created by Mat on 13/12/2018.
//

#include "Neuron.h"

void Neuron::initWeights(int weightsNumber) {
    this->weights.clear();
    for (int i = 0; i < weightsNumber; i++) {
        int randInt = rand() % 100;         // In the range 0 to 99
        float randFloat = ((float) randInt) / 100;
        this->weights.push_back(randFloat);
    }
}

float Neuron::computeDistance(std::vector<float> *inputs) {
    if(inputs->size() != this->weights.size()) {
        perror("Weight and inputs size mismatch");
        return -1;
    }
    float resultValue = 0.0;
    for (int i = 0; i < inputs->size(); ++i) {
        resultValue += pow((this->weights[i] - (*inputs)[i]),2.0);
    }
    return resultValue;
}
