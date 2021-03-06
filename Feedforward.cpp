#include <iostream>

#define MAX2 (a,b) (a) > (b) ? (a) : (b)

class Neuron{
public:
    double W_; //weight
    double b_; //bias

    double getAct(const double& x){
        //for linear or identity activation functions
        return x;

        //for ReLU activation functions
        //return MAX2(0.0, x)
    }

    double feedForward(const double& input){
        //output y = f(\sigma)
        //\sigma = W_ * input x + b
        //for multiple inputs,
        //\sigma = w0_ * x0_ + w1_ * x1_ ... + b
        const double sigma = W_ * input + b_;

        return getAct(sigma);
    }
};

int main(){

    Neuron my_neuron;
    my_neuron.W_ = 2.0;
    my_neuron.b_ = 1.0;

    std::cout << "Input: 1.0, " << "Output:" << my_neuron.feedForward(1.0) << std::endl;
    std::cout << "Input: 2.0, " << "Output:" << my_neuron.feedForward(2.0) << std::endl;
    std::cout << "Input: 3.0, " << "Output:" << my_neuron.feedForward(3.0) << std::endl;
    
}