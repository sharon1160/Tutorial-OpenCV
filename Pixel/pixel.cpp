#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv ){
    std::cout<<"hola, OpenCV"<<std::endl;
    cv::Mat imagen = cv::imread("lenna.jpg", cv::IMREAD_GRAYSCALE);
    if( imagen.empty()){
        std::cerr <<"Imagen no encontrada"<<std::endl;
        return 1;
    }

    const std::string window_name{"Lenna"};

    cv :: namedWindow(window_name);
    cv :: imshow(window_name, imagen);
    cv :: waitKey(0);

    return 0;
}